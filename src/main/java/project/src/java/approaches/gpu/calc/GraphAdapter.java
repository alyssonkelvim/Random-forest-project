package project.src.java.approaches.gpu.calc;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;
import java.util.stream.Collectors;

import project.src.java.dotTreeParser.treeStructure.Tree;
import project.src.java.dotTreeParser.treeStructure.Nodes.InnerNode;
import project.src.java.dotTreeParser.treeStructure.Nodes.Node;
import project.src.java.dotTreeParser.treeStructure.Nodes.OuterNode;

public class GraphAdapter {
	
	public static int calculateLevels(Node root) {
        if (root == null) {
            return 0;
        }

        Queue<Node> queue = new LinkedList<>();
        root.setLevel(0);
        queue.add(root);
        int level = 0;
        while (!queue.isEmpty()) {
        	InnerNode currentNode = (InnerNode) queue.poll();

            if (currentNode.getLeftNode() != null && currentNode.getLeftNode() instanceof InnerNode) {
                Node leftNode = currentNode.getLeftNode();
                leftNode.setLevel(currentNode.getLevel() + 1);
                queue.add(leftNode);
            }

            if (currentNode.getRightNode() != null && currentNode.getRightNode() instanceof InnerNode) {
                Node rightNode = currentNode.getRightNode();
                rightNode.setLevel(currentNode.getLevel() + 1);
                queue.add(rightNode);
            }
            level = currentNode.getLevel();
        }
        return level;
    }
	
	static int nodeId = 3000000; 	
	public static void fillTree(InnerNode root, int treeLevel, Tree tree) {
        Queue<InnerNode> queue = new LinkedList<>();
        queue.add(root);
        while (!queue.isEmpty()) {
        	InnerNode currentNode = (InnerNode) queue.poll();
            if (currentNode.getLeftNode() != null && currentNode.getLeftNode() instanceof InnerNode) {
                InnerNode leftNode = (InnerNode) currentNode.getLeftNode();
                queue.add(leftNode);
            }else if(currentNode.getLeftNode() != null && currentNode.getLeftNode() instanceof OuterNode 
            		&& currentNode.getLevel() < treeLevel){
            	var outer = (OuterNode)currentNode.getLeftNode();
            	var dummy = currentNode.cloneDummy();
            	currentNode.setLeftNode(dummy);
            	dummy.setLeftNode(outer);
            	dummy.setRightNode(outer.clone());
            	dummy.getLeftNode().setFather(dummy);
            	dummy.getRightNode().setFather(dummy);
            	dummy.getLeftNode().setId(++nodeId);
            	dummy.getRightNode().setId(++nodeId);
            	dummy.setLevel(currentNode.getLevel() + 1);
            	dummy.setFather(currentNode);
            	queue.add(dummy);
            }
            if (currentNode.getRightNode() != null && currentNode.getRightNode() instanceof InnerNode) {
                InnerNode rightNode = (InnerNode) currentNode.getRightNode();
                queue.add(rightNode);
            }else if(currentNode.getRightNode() != null && currentNode.getRightNode() instanceof OuterNode
            		 && currentNode.getLevel() < treeLevel){
            	var outer = (OuterNode)currentNode.getRightNode();
            	var dummy = currentNode.cloneDummy();
            	currentNode.setRightNode(dummy);
            	dummy.setLeftNode(outer);
            	dummy.setRightNode(outer.clone());
            	dummy.getLeftNode().setFather(dummy);
            	dummy.getRightNode().setFather(dummy);
            	dummy.getLeftNode().setId(++nodeId);
            	dummy.getRightNode().setId(++nodeId);
            	dummy.setLevel(currentNode.getLevel() + 1);
            	dummy.setFather(currentNode);
            	queue.add(dummy);
            }
        }
	}
	
	 public static void drawTree(Node root, String prefix, boolean isLeft) {
		 	if(root instanceof InnerNode) {
		 		var node = (InnerNode) root;
		        if (node.getRightNode() != null) {
		            drawTree(node.getRightNode(), prefix + (isLeft ? "|   " : "    "), false);
		        }
	
		        System.out.println(prefix + (isLeft ? "^--- " : "v---") + "("+node.getComparisson().getThreshold()+")");
	
		        if (node.getLeftNode() != null) {
		            drawTree(node.getLeftNode(), prefix + (isLeft ? "    " : "|   "), true);
		        }
		 	}else {
		 		var node = (OuterNode) root;
		        System.out.println(prefix + (isLeft ? "^--- " : "v--- ") + node.getIndex());
		 	}
	    }
	public static List<OuterNode> identifyOuterNodes(Node root) {
        ArrayList<OuterNode> list = new ArrayList<>();
        Queue<Node> queue = new LinkedList<>();
        root.setLevel(0);
        queue.add(root);
        int index = 0;
        while (!queue.isEmpty()) {
        	Node currentNode = queue.poll();
        	if(currentNode instanceof InnerNode) {
        		var node = (InnerNode) currentNode;
	            if (node.getLeftNode() != null) {
	                Node leftNode = node.getLeftNode();
	                leftNode.setLevel(currentNode.getLevel() + 1);
	                queue.add(leftNode);
	            }
	
	            if (node.getRightNode() != null) {
	                Node rightNode = node.getRightNode();
	                rightNode.setLevel(currentNode.getLevel() + 1);
	                queue.add(rightNode);
	            }
        	}else {
        		var node = (OuterNode) currentNode;
        		node.setIndex(index);
        		index++;
        		list.add(node);
        	}
        }
        return list.stream().sorted((a,b) -> a.getIndex().compareTo(b.getIndex())).collect(Collectors.toList());
    }
}
