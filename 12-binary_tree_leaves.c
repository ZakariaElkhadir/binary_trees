#include "binary_trees.h"
#include <stddef.h>
/**
* binary_tree_leaves -  counts the leaves in a binary tree
*
* @tree:  pointer to the root node of the tree to count the number of leaves
*
* Return: Number of leaves in the tree
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t rleave, lleave;

	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
		return (1);


	rleave = binary_tree_leaves(tree->right);
	lleave = binary_tree_leaves(tree->left);

	return (rleave + lleave);
}
