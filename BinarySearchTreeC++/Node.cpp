/*
 * Node.cpp
 *
 * Author:      Matheus Schaly
 * Created on:  Aug 14, 2017 
 * Description: Implements the Node object
 */

#include "Node.h"

Node::Node(int data = 0) {
	this -> data = data;
	right = NULL;
	left = NULL;
}

void Node::setData(int data) {
	this -> data = data;
}

int Node::getData() {
	return data;
}

void Node::setRight(Node *right) {
	this -> right = right;
}

Node* Node::getRight() {
	return right;
}

void Node::setLeft(Node *left) {
	this -> left = left;
}

Node* Node::getLeft() {
	return left;
}


