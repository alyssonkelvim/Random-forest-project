package project.src.java.dotTreeParser.treeStructure.Nodes;

import java.util.ArrayList;

public abstract class Node {
    protected Integer id;
    protected ArrayList<Integer> values;
    protected Node father;
    protected Integer level;
  

    public Integer getLevel() {
		return level;
	}

	public void setLevel(Integer level) {
		this.level = level;
	}

	public InnerNode getFather() {
		return (InnerNode)father;
	}

	public void setFather(InnerNode father) {
		this.father = father;
	}

	@Override
    public String toString() {
        return "Node [id=" + id + ", values=" + values + "]";
    }

    public Integer getId() {
        return id;
    }

    public void setId(Integer id) {
        this.id = id;
    }

    public ArrayList<Integer> getValues() {
        return values;
    }

    public void setValues(ArrayList<Integer> values) {
        this.values = values;
    }

    
}
