package project.src.java.dotTreeParser.treeStructure.Nodes;

import java.util.ArrayList;

public class OuterNode extends Node {

    private String className;
    private Integer classNumber;
    private Integer index;

  

	public OuterNode clone() {
    	var node = new OuterNode();
    	node.setClassName(className);
    	node.setClassNumber(classNumber);
    	ArrayList<Integer> clonedList = new ArrayList<>();
        for (Integer element : values) {
            clonedList.add(element);
        }
    	node.setValues(clonedList);
    	return node;
    }
    
    public OuterNode(ArrayList<Integer> values){
        this.values = values;
    }

    public OuterNode() {
    }

    public String getClassName() {
        return className;
    }

    public void setClassName(String className) {
        this.className = className;
    }

    public Integer getClassNumber() {
        return classNumber;
    }

    public void setClassNumber(Integer classNumber) {
        this.classNumber = classNumber;
    }

    public Integer getIndex() {
  		return index;
  	}

  	public void setIndex(Integer index) {
  		this.index = index;
  	}
    
}
