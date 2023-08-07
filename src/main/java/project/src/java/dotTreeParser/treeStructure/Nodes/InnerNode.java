package project.src.java.dotTreeParser.treeStructure.Nodes;

import java.util.ArrayList;
import project.src.java.dotTreeParser.treeStructure.Comparisson;

public class InnerNode extends Node {
    private Comparisson comparisson;
    private Node leftNode;
    private Node rightNode;
    private boolean dummy;
    
    
	public InnerNode(Comparisson comparisson, ArrayList<Integer> values){
        this.comparisson = comparisson;
        this.values = values;

        this.leftNode = null;
        this.rightNode = null;
    }

    public InnerNode() {
    }
    
    public InnerNode cloneDummy() {
    	var dummy = new InnerNode();
    	var comparisson = new Comparisson();
    	comparisson.setColumn(this.getComparisson().getColumn());
    	comparisson.setComparissonType(this.getComparisson().getComparissonType());
    	comparisson.setFeatureName(this.getComparisson().getFeatureName());
    	comparisson.setThreshold(this.getComparisson().getThreshold());
    	ArrayList<Integer> clonedList = new ArrayList<>();
        for (Integer element : values) {
            clonedList.add(element);
        }
    	dummy.setComparisson(comparisson);
    	dummy.setValues(clonedList);
    	dummy.setDummy(true);
    	return dummy;
    }

    public boolean leftIsNull(){
        return this.leftNode == null;
    }

    public boolean rightIsNull(){
        return this.rightNode == null;
    }

    public Comparisson getComparisson() {
        return comparisson;
    }

    public Node getLeftNode() {
        return leftNode;
    }

    public Node getRightNode() {
        return rightNode;
    }

    public void setComparisson(Comparisson comparisson) {
        this.comparisson = comparisson;
    }

    public void setLeftNode(Node leftNode) {
        this.leftNode = leftNode;
    }

    public void setRightNode(Node rightNode) {
        this.rightNode = rightNode;
    }

	public boolean isDummy() {
		return dummy;
	}

	public void setDummy(boolean dummy) {
		this.dummy = dummy;
	}

    

}
