#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - fucntion to insert a node to the right
 * @parent: the parent to insert the right node
 * @value: the key of the right node
 * Return: the right node
 **/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node_right;

	if (parent == NULL)
		return (NULL);
	node_right = calloc(1, sizeof(binary_tree_t));
	if (node_right == NULL)
		return (NULL);
	if (parent->right == NULL)
	{
		parent->right = node_right;
		node_right->n = value;
		node_right->left = NULL;
		node_right->right = NULL;
		node_right->parent = parent;
	}
	else
	{
		node_right->right = parent->right;
		parent->right->parent = node_right;
		parent->right = node_right;
		node_right->parent = parent;
		node_right->left = NULL;
		node_right->n = value;
	}
	return (node_right);
}
