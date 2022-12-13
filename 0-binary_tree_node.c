#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - binary creation function
 * @parent: the binary node
 * @value: the key of the parent node
 * Return: the created node
 **/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;

	return (node);
}
