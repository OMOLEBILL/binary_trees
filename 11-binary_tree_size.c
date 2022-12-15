#include "binary_trees.h"
size_t binary_tree_size2(const binary_tree_t *tree);

/**
 * binary_tree_size2 - measures the size of a binary tree
 *
 *@tree: pointer to tree
 *
 *Return: size
 */

size_t binary_tree_size2(const binary_tree_t *tree)
{
	int depth1 = 0, depth2 = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
	{
		depth1 = binary_tree_size2(tree->left);
		depth1++;
	}
	if (tree->right != NULL)
	{
		depth2 = binary_tree_size2(tree->right);
		depth2++;
	}
	return (depth1 + depth2);
}

/**
 * binary_tree_size - measures the size of a binary tree
 *
 *@tree: pointer to tree
 *
 *Return: size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_size2(tree) + 1);
}
