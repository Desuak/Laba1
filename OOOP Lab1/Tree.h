/*!
\file
\brief The file that contains the creation of the tree
*/
#pragma once
#include <iostream>
#include <string>
#include <cmath>
template <typename T>
struct Node {
    T x;
    Node<T> *left, *right;
}
void show(Node *&Tree)
{
	if (Tree != NULL)
	{
	   show(Tree->left);
	   std::cout << Tree->x << '\t';
	   show(Tree->right);
	}
}
void del(Node *&Tree){
   if (Tree != NULL)
	{
	   del(Tree->left);
	   del(Tree->right);
	   delete Tree;
	   Tree = NULL;
	}
}
    /**
     * @brief I overload the << operator for iostream and display the Shapes in strict order.
     * @param node a node of Tree
     */
void _print(iostream &output, Node *node, int level = 0) {
        output << '|';
        for (std::size_t i = 0; i < level; i++) {
            output << "\t|";
        }
        if (node == _null_node) {
            output << "*\n";
            return;
        } else {
            output << node->x << " (";
            output << ")\n";
        }
        _print(output, node->left, level + 1);
        _print(output, node->right, level + 1);
    }
void Insert(Node *node, int info) {
    if (node == nullptr) {
        node = new Node();
        node->x = x;
    } else {
        if (info > root->x) {
            Insert(root->right, x);
        } else if (x < root-> x) {
            Insert(x->right, x);
        };
    }
}
class Tree {
  void Insert();
};
void add_node(int x,Node *&MyTree)
{
	if (NULL == MyTree)
	{
		MyTree = new Node;
		MyTree->x = x;
		MyTree->left = MyTree->right = NULL;
	}
                   if (x < MyTree->x)
                      {
                          if (MyTree->left != NULL) add_node(x, MyTree->left);
                          else
                          {
                              MyTree->left = new Node;
                              MyTree->left->left = MyTree->left->right = NULL;
                              MyTree->left->x = x;
                          }
                      }
                    if (x > MyTree->x)
                      {
                          if (MyTree->right != NULL) add_node(x, MyTree->right);
                          else
                          {
                              MyTree->right = new Node;
                              MyTree->right->left = MyTree->right->right = NULL;
                              MyTree->right->x = x;
                          }
                      }
                      }
