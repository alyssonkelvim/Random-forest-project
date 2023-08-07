package project.src.java.dotTreeParser.treeStructure;

import java.util.HashMap;
import java.util.List;
import java.util.Objects;
import java.util.stream.Collectors;

import project.src.java.dotTreeParser.treeStructure.Nodes.InnerNode;
import project.src.java.dotTreeParser.treeStructure.Nodes.Node;
import project.src.java.dotTreeParser.treeStructure.Nodes.OuterNode;


public class Tree {

    private HashMap<Integer, InnerNode> innerNodes = new HashMap<>();
    private HashMap<Integer, OuterNode> outerNodes = new HashMap<>();

    private Node root;

    public void newInnerNode(InnerNode node){
        if (Objects.isNull(root)){
            this.root = node;
        }
        innerNodes.put(node.getId(), node);
    }

    public void newOuterNode(OuterNode node){
        if (Objects.isNull(root)){
            this.root = node;
        }
        outerNodes.put(node.getId(), node);
    }
    public void linkNodes(Integer fatherId, Integer sonId){
        InnerNode father = innerNodes.get(fatherId);
        Node son = innerNodes.get(sonId);
        if(Objects.isNull(son)){
            son = outerNodes.get(sonId);
        }
        
        if (father.leftIsNull()) {
            father.setLeftNode(son);
        } else {
            father.setRightNode(son);
        }
        son.setFather(father);
    }

    public Node getRoot() {
        return root;
    }

    public void setRoot(Node root) {
        this.root = root;
    }

    @Override
    public String toString() {
        return "Tree [root=" + root + "]";
    }

    public int getClassQuantity() {
        return outerNodes.values().stream().findFirst().get().getValues().size();
    }
  
    public List<OuterNode> getOuterNodes(){
    	return this.outerNodes.values()
    			.stream()
    			.sorted((a,b)->a.getIndex().compareTo(b.getIndex()))
    			.collect(Collectors.toList());
    }
}
