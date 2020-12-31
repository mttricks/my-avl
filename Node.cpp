#include "Node.h"

NodeInterface * Node::getRightChild() const {
	return right;
}

NodeInterface * Node::getLeftChild() const {
	return left;
}

int Node::getData() const {
	return data;
}

int Node::getHeight() {
	return height;
}