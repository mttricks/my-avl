#include <iostream>
#include "AVL.h"
#include "Node.h"
#include <sstream>
#include <queue>

using namespace std;


string BSTtoString(AVL* bst) {
	queue<NodeInterface*> readQ; // used to read in the levels of the tree, contains Node*
	stringstream nodeReader_ss; // used to store the values of the nodes and the level-order sequence
	int depth = 0; // the depth of a node on the tree

	if (bst->getRootNode() == NULL) {
		return "BST is empty\n";
	}

	readQ.push(bst->getRootNode()); // push the root node of the tree into the queue

	while (!readQ.empty()) { // as long as the queue has a remaining node:
		int i = readQ.size(); // store the number of nodes on this level of the tree
		nodeReader_ss << depth << ":  ";
		for (; i > 0; i--) { // for each node on this level,
			NodeInterface* nextNode = readQ.front(); // store the next node in the queue
			nodeReader_ss << nextNode->getData() << " "; // store the data from the node into the ss
			if (nextNode->getLeftChild() != NULL) { // if there is a left child, push the left child into the queue
				readQ.push(nextNode->getLeftChild());
			}
			if (nextNode->getRightChild() != NULL) { // if there is a right child, push the left child into the queue
				readQ.push(nextNode->getRightChild());
			}
			readQ.pop(); // pop the node off of the queue, leaving its children in the queue
		}
		nodeReader_ss << "\n"; // push an endl into the ss to distinguish levels
		depth++;
	}

	return nodeReader_ss.str();
} //from the main code given

int main(){

	AVL* avl = new AVL;

	avl->add(1);
	avl->add(2);
	avl->add(3);
	avl->add(8);
	avl->add(5);

	avl->remove(1);






	cout << "current tree: " << endl;
	cout << BSTtoString(avl) << endl;
}