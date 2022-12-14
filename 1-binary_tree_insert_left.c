#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserting at the left
 * @parent: the node to insert
 * @value: the key of the parent
 * Return: the new node
 **/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node_left;

	if (parent == NULL)
		return (NULL);
	node_left = calloc(1, sizeof(binary_tree_t));
	if (node_left == NULL)
		return (NULL);
	if (parent->left == NULL)
	{
		parent->left = node_left;
		node_left->parent = parent;
		node_left->n = value;
		node_left->left = NULL;
		node_left->right = NULL;
	}
	else
	{
		node_left->left = parent->left;
		parent->left->parent = node_left;
		parent->left = node_left;
		node_left->n = value;
		node_left->parent = parent;
		node_left->right = NULL;
	}

	return (node_left);
}
