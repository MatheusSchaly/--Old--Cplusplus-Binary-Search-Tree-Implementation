/*
 * BinarySearchTree.cpp
 *
 * Author:      Matheus Schaly
 * Created on:  Aug 14, 2017 
 * Description: Implements the Binary Search Tree List object
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
	Node *curr = getRoot();
	Node *prev = getRoot();
	while (curr != NULL) {
		prev = curr;
		if (curr -> getData() < data) {
			curr = curr -> getRight();
		}
		else if (curr -> getData() > data) {
			curr = curr -> getLeft();
		}
		else {
			cout << "Your data already exist in the BST";
			return;
		}
	}
	if (prev -> getData() < data) {
		prev -> setRight(newNode);
	}
	else {
		prev -> setLeft(newNode);
	}
	return;
}

void BinarySearchTree::remove(int data) {
	if (getRoot() == NULL) {
		return;
	}
	Node *curr = getRoot();
	Node *prev = getRoot();
	bool leftChild;
	while (curr != NULL) {
		if (curr -> getData() < data) {
			curr = curr -> getRight();
			leftChild = false;
		}
		else if (curr -> getData() > data) {
			curr = curr -> getLeft();
			leftChild = true;
		}
		else {
			break;
		}
		prev = curr;
	}
	if (curr == NULL) {
		return;
	}
	if (curr -> getRight() == NULL && curr -> getLeft() == NULL) {
		if (leftChild) {
			prev -> setLeft(NULL);
		}
		else {
			prev -> setRight(NULL);
		}
		delete curr;
	}
	else if (curr -> getRight() == NULL) {
		if (leftChild) {
			prev -> setLeft(curr -> getLeft());
		}
		else {
			prev -> setRight(curr -> getLeft());
		}
		delete curr;
	}
	else if (curr -> getLeft() == NULL) {
		if (leftChild) {
			prev -> setRight(curr -> getRight());
		}
		else {
			prev -> setLeft(curr -> getRight());
		}
		delete curr;
	}
	else {

	}
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



