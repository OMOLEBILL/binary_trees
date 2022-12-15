#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
size_t binary_tree_height1(const binary_tree_t *tree);

/**
 * binary_tree_height - find the height of a node
 * @tree: root node
 * Return: 0 if tree is NULL
 **/
size_t binary_tree_height1(const binary_tree_t *tree)
{
	size_t lDepth = 0;
	size_t rDepth = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		lDepth += binary_tree_height1(tree->left);
	if (tree->right != NULL)
		rDepth += binary_tree_height1(tree->right);
	if (lDepth > rDepth)
		return (lDepth + 1);
	return (rDepth + 1);
}
/**
 * binary_tree_height - find the height of a node
 * @tree: root node
 * Return: 0 if tree is NULL
 **/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return ((binary_tree_height1(tree)) - 1);
}
