#include "binary_trees.h"
size_t binary_tree_depth2(const binary_tree_t *tree);

/**
 * binary_tree_depth2 - measures the height of a binary tree
 *
 *@tree: pointer to tree
 *
 *Return: height
 */

size_t binary_tree_depth2(const binary_tree_t *tree)
{
	int depth = 0;

	if (tree == NULL)
		return (0);
	if (tree->parent != NULL)
		depth += binary_tree_depth2(tree->parent);
	return (depth + 1);
}

/**
 *binary_tree_depth - measures the depth of a binary tree
 *
 *@tree: pointer to tree
 *
 *Return: depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_depth2(tree) - 1);
}
