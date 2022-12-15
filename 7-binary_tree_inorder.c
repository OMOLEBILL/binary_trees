#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_inorder - function to do inorder transverse
 * @tree: the root node
 * @func: the func to pass in the value of the node;
 * Return: Void
 **/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	if (tree->left != NULL)
		binary_tree_inorder(tree->left, func);
	func(tree->n);
	if (tree->right != NULL)
		binary_tree_inorder(tree->right, func);
}
