
#pragma once
using namespace std;

class NodeInterface {

public:
	NodeInterface() {}
	virtual ~NodeInterface() {}

	/*
	* Returns the data stored in this node
	*
	* @return the data stored in this node.
	*/
	virtual int getData() const = 0;

	/*
	* Returns the left child of this node or null if empty left child.
	*
	* @return the left child of this node or null if empty left child.
	*/
	virtual NodeInterface * getLeftChild() const = 0;

	/*
	* Returns the right child of this node or null if empty right child.
	*
	* @return the right child of this node or null if empty right child.
	*/
	virtual NodeInterface * getRightChild() const = 0;

	/*
	* Returns the height of this node. The height is the number of nodes
	* along the longest path from this node to a leaf. 
	*
	* @return the height of this tree with this node as the local root.
	*/
	virtual int getHeight() = 0;
};
