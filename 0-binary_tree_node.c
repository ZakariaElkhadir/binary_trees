#include "binary_trees.h"

/**
 * binary_tree_node - function that create bt node
 *
 * @parent: pointer to the parent node
 * @value: value to put in the new node
 *
 * Return: the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *NewNode;

	NewNode = malloc(sizeof(binary_tree_t));

	if (!NewNode)
		return (NULL);

	NewNode->parent = parent;
	NewNode->n = value;
	NewNode->left = NULL;
	NewNode->right = NULL;

	return (NewNode);
}
