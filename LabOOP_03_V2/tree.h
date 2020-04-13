#pragma once
#include <string>

#include "Node.h"
class Tree
{
private:
	//THE ROOT OF THE TREE
	Node* root; //!private
	//CREATES A NEW NODE
	Node* CreateTreeNode(int value);
	//INSERTS THE NEW NODE IN A TREE
	Node* Insert(int key, Node* node);
	//DELETES THE NODE
	Node* Delete(Node* node, int value);
	//FINDS THE MINIMAL VALUE IN A BRANCH
	Node* minValue(Node* node);
	//POSTORDER TRAVERSAL
	std::string PostOrderPriv(Node* node, std::string s);
	//INORDER TRAVERSAL
	std::string InOrderPriv(Node* node, std::string s);
	//PREORDER TRAVERSAL
	std::string PreOrderPriv(Node* node, std::string s);
	//COUNT NODES
	int Nodes(Node* node);
	// COUNT EDGES
	int Edges(Node* node);
	// FINDS THE HEIGHT OF THE TREE
	int Height(Node* node);

public:
	Tree();

	Tree(int value);

	Node* GetRoot();
	//INSERTS THE NEW NODE IN A TREE
	void InsertNode(int value);
	//POSTORDER TRAVERSAL
	std::string PostOrder();
	//INORDER TRAVERSAL
	std::string InOrder();
	//PREORDER TRAVERSAL
	std::string PreOrder();
	//COUNT NODES
	int CountNodes();
	// COUNT EDGES
	int CountEdges();
	// FINDS THE HEIGHT OF THE TREE
	int ShowHeight();

	~Tree();
};

