from sklearn.model_selection import train_test_split
from sklearn.ensemble import RandomForestClassifier
from sklearn import metrics
from sklearn import tree

import pandas as pd
import sys
import os

logName = "[Python - Tree Generator]: "
dataset_name = sys.argv[1]
trees_quantity = int(sys.argv[2])
max_depth = int(sys.argv[3])
dataset = pd.read_csv("assets/datasets/" + dataset_name + ".csv")
print(logName + "Starting Training of "+ dataset_name + " with " + str(trees_quantity) + " trees and "+ str(max_depth) + " of depth")
resultsFile = open(sys.argv[4], 'a')
resultsFile.write(dataset_name + "," + str(trees_quantity) + ","+ str(max_depth) + "")
resultsFile.close()

def remove_id(dataset):
    dataset = dataset.rename(columns=lambda name: name.lower())
    column_names = list(dataset)

    for index in range(len(column_names)):
        if column_names[index] == "id":
            dataset = dataset.drop(columns="id", axis=1)
            break

    return dataset


def parse_qualitative_variables(dataset):
    dataset = pd.get_dummies(dataset, drop_first=True)
    return dataset


column_names = list(dataset)
target_column_name = column_names[len(column_names) - 1]
dataset.rename(columns={target_column_name: "target"}, inplace=True)

dataset = remove_id(dataset)

X = dataset.drop(["target"], axis=1)
X = parse_qualitative_variables(X)
Y = dataset["target"]
X_train, X_test, Y_train, Y_test = train_test_split(X, Y, test_size=0.3)  # 70% training and 30% test

clf = RandomForestClassifier(n_estimators=trees_quantity, max_depth=max_depth)

clf.fit(X_train, Y_train)
y_pred = clf.predict(X_test)

print(logName + "Accuracy:", metrics.accuracy_score(Y_test, y_pred))

directory = dataset_name
tree_path = "assets/trees/" + dataset_name
path = os.path.join("assets/trees/", directory)

if os.path.exists(path) == False:
    os.mkdir(path)
print(logName+ "Removing Previous Decision Trees")
for f in os.listdir(path):
    os.remove(os.path.join(path,f))
    
i = 0
print(logName+ "Generating Decision Trees")
for t in clf.estimators_:
    text = tree.export_graphviz(t)
    fileName = "tree" + str(i) + ".txt"
    fileTree = open(tree_path + "/" + fileName, 'w')
    fileTree.write(text)
    fileTree.close()
    #print(logName+ f"Generating Decision Tree {i}")
    i += 1
