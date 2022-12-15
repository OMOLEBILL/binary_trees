#include "binary_trees.h"
/**
 *binary_tree_is_full - function that checks if a binary tree is full
 *@tree: pointer to tree
 *Return: 1 if a binary tree is full else 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int count = 0, count2 = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL)
		count = binary_tree_is_full(tree->left);
	if (tree->right != NULL)
		count2 = binary_tree_is_full(tree->right);
	return (count && count2);
}
