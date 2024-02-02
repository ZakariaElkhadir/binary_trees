#include "binary_trees.h"
/**
 * the_depth - depth measure
 * @tree: pointer to the root node
 *
 * Return: the depth of the node
 */
int the_depth(const binary_tree_t *tree)
{
	int d = 0;

	while (tree != NULL)
	{
		d++;
		tree = tree->left;
	}
	return (d);
}
/**
 * is_perfect - counts the leaves in a binary tree
 * @tree: binary tree
 * @dpth: depth of left most side
 * @level: depth of a chain
 * Return: 1 if it is perfect 0 if not
 */
int is_perfect(const binary_tree_t *tree, int dpth, int level)
{
	if (!tree)
		return (1);

	if (!tree->left && !tree->right)
		return (dpth == (level + 1));

	if (!tree->left || !tree->right)
		return (0);

	return (is_perfect(tree->left, dpth, level + 1) &&
			is_perfect(tree->right, dpth, level + 1));
}
/**
 * binary_tree_is_perfect - finds if tree is full or not
 * @tree: root node
 * Return: 1 if full 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth;

	if (!tree)
		return (0);

	depth = the_depth(tree);
	return (is_perfect(tree, depth, 0));
}
