#include "binary_trees.h"
/**
* binary_tree_is_leaf - check if leaf or not
*
* @node: binary_trees node
*
* Return: return 1 if node is a root, otherwise 0
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->right == NULL && node->left == NULL)
		return (1);
	else
		return (0);
}
