#include "binary_trees.h"
#include <stddef.h>
/**
 * binary_tree_height -  measures the height of a binary tree
 *
 * @tree:  is a pointer to the root node of the tree to measure the height
 *
 * Return: return right if greater otherwise left
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right = 0, left = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left = 1 + binary_tree_height(tree->left);

	if (tree->right)
		right = 1 + binary_tree_height(tree->right);


	return ((right > left) ? right : left);

}
