#include "binary_trees.h"


/**
 * binary_tree_insert_left -  creates a binary tree node.
 *
 * @parent: pointer to the parent node of the node to create.
 * @value: value to put in the new node.
 *
 * Return: pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

	binary_tree_t *Node;

	Node = malloc(sizeof(binary_tree_t));


	if (!Node)
		return (NULL);

	Node->parent = parent;
	Node->n = value;
	Node->left = parent->left;
	Node->right = NULL;
	if (parent->left)
		parent->left->parent = Node;
	parent->left = Node;

	return (Node);
}

