#include "binary_trees.h"

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

int binary_tree_is_perfect(const binary_tree_t *tree)
{
  int depth;

  if (!tree)
    return (0);

  depth = the_depth(tree);
  return (is_perfect(tree, depth, 0));
}
