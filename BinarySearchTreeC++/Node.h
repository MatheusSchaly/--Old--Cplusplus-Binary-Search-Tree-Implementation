/*
 * Node.h
 *
 * Author:      Matheus Schaly
 * Created on:  Aug 14, 2017 
 * Description: Declares the Node object
 */

#ifndef NODE_H_
#define NODE_H_

#include <iostream>

using namespace std;

class Node {
	int data;
	Node *right, *left;
public:
	Node(int data);
	void setData(int data);
	int getData();
	void setRight(Node *right);
	Node* getRight();
	void setLeft(Node *left);
	Node* getLeft();
};



#endif /* NODE_H_ */
