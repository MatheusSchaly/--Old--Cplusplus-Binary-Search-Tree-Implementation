/*
 * BinarySearchTree.h
 *
 * Author:      Matheus Schaly
 * Created on:  Aug 14, 2017 
 * Description: Declares the Doubly Linked List object
 */

#ifndef BINARYSEARCHTREE_H_
#define BINARYSEARCHTREE_H_

#include "Node.h"

#include <iostream>

using namespace std;

class BinarySearchTree {
	Node *root;
public:
	BinarySearchTree();
	void setRoot(Node *node);
	Node* getRoot();
	void insert(int data);
	void remove(int data);
	bool search(int data);
};



#endif /* BINARYSEARCHTREE_H_ */
