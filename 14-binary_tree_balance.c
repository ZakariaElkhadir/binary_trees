#include "binary_trees.h"

int binary_tree_balance(const binary_tree_t *tree)
{
  int right_height, left_height, balance;

  if (tree == NULL)
    return (0);

  right_height = binary_tree_height(tree->right);
	left_height = binary_tree_height(tree->left);
	balance = left_height - right_height;

  return (balance);

  
}
