#include "binary_trees.h"
size_t binary_tree_balance2(const binary_tree_t *tree,
			    const binary_tree_t *tree2);

/**
 * binary_tree_balance2 - measures the balance factor of a binary tree
 *@tree: pointer to tree
 *@tree2: pointer to sub tree
 *Return: Balance factor
 */

size_t binary_tree_balance2(const binary_tree_t *tree,
			    const binary_tree_t *tree2)
{
	int depth1 = 0, depth2 = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		depth1 += binary_tree_balance2(tree->left, tree2);
	if (tree->right != NULL)
		depth2 += binary_tree_balance2(tree->right, tree2);
	if (tree == tree2)
		return (depth1 - depth2);
	if (depth1 > depth2)
		return (cont1 + 1);
	return (cont2 + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 *@tree: pointer to tree
 *Return: Balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_balance2(tree, tree));
}
