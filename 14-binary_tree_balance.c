#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_height - get height from binary tree
 * @tree: tree to search
 * Return: height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);
	if (!tree->left && !tree->right)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	return (right_height + 1);


}


/**
 * binary_tree_balance - checks the balance of a tree
 * @tree: binary tree
 *
 * Return: size of tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int right_height = 0, left_height = 0;

	if (tree == NULL)
		return (0);
	if (tree->right)
		right_height = binary_tree_height(tree->right) + 1;
	if (tree->left)
		left_height = binary_tree_height(tree->left) + 1;

	return (left_height - right_height);


}
