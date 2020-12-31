#pragma once

#include <iostream>
#include "Node.h"
#include "AVLInterface.h"
#include "algorithm"

using namespace std;

class AVL : public AVLInterface {
public:
	AVL() {
		root = nullptr;
	}
	~AVL() {
		clear();
	}

	NodeInterface * getRootNode() const;

	bool add(int data);


	bool remove(int data);


	void clear();

// Some helper function that might be useful

bool insert(Node*& local_root, int data);
bool erase(Node* &local_root, int data);
bool rebalance(Node* &local_root);
void updateheight(Node* &local_root);
void leftrotate(Node* &local_root);
void rightrotate(Node* &local_root);
int checkbalance(Node* &local_root);//returns an int 0-4 based on type of imbalance
int getheight(Node* &local_root);

protected:
	Node *root;
};
