
pragma once

#include "NodeInterface.h"

using namespace std;

class AVLInterface {
public:
	AVLInterface() {}
	virtual ~AVLInterface() {}


	/* Returns the root node for this tree
	*
	* @return the root node for this tree.
	*/
	virtual NodeInterface * getRootNode() const = 0;

	/*
	* Attempts to add the given int to the AVL tree
	* Rebalances the tree if data is successfully added
	*
	* @return true if added
	* @return false if unsuccessful (i.e. the int is already in tree)
	*/
	virtual bool add(int data) = 0;

	/*
	* Attempts to remove the given int from the AVL tree
	* Rebalances the tree if data is successfully removed
	*
	* @return true if successfully removed
	* @return false if remove is unsuccessful(i.e. the int is not in the tree)
	*/
	virtual bool remove(int data) = 0;

	/*
	* Removes all nodes from the tree, resulting in an empty tree.
	*/
	virtual void clear() = 0;
};
