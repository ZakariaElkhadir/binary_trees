#include "binary_trees.h"
/**
 * binary_tree_insert_right - isert right of Node function
 *
 * @parent: the root Node
 * @value: the value of Node
 * Return: pointer to create Node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *Node;

	Node = malloc(sizeof(binary_tree_t));

	if (!Node)
		return (NULL);
	Node->parent = parent;
	Node->n = value;
	Node->left = NULL;
	Node->right = parent->right;
	if (parent->right)
		parent->right->parent = Node;
	parent->right = Node;
	return (Node);
}
