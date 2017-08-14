/*
 * BinarySearchTree.cpp
 *
 * Author:      Matheus Schaly
 * Created on:  Aug 14, 2017 
 * Description: Implements the Doubly Linked List object
 */

#include "BinarySearchTree.h"

using namespace std;

BinarySearchTree::BinarySearchTree() {
	root = NULL;
}

Node* BinarySearchTree::getRoot() {
	return root;
}

void BinarySearchTree::setRoot(Node *node) {
	root = node;
}

void BinarySearchTree::insert(int data) {
	Node *newNode = new Node(data);
	if(getRoot() == NULL) {
		setRoot(newNode);
		return;
	}
	Node *temp1 = getRoot();
	Node *temp2 = getRoot();
	while (temp1 != NULL) {
		temp2 = temp1;
		if (temp1 -> getData() < data) {
			temp1 = temp1 -> getRight();
		}
		else if (temp1 -> getData() > data) {
			temp1 = temp1 -> getLeft();
		}
		else {
			cout << "Your data already exist in the BST";
			return;
		}
	}
	if (temp2 -> getData() < data) {
		temp2 -> setRight(newNode);
	}
	else {
		temp2 -> setLeft(newNode);
	}
	return;
}

bool BinarySearchTree::search(int data) {
	if (getRoot() == NULL) {
		return false;
	}
	Node *temp = getRoot();
	while (temp != NULL) {
		if (temp -> getData() < data) {
			temp = temp -> getRight();
		}
		else if (temp -> getData() > data) {
			temp = temp -> getLeft();
		}
		else {
			return true;
		}
	}
	return false;
}



