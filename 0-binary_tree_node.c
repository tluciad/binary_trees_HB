#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_node: function that creates a binary tree node
 * @parent: parent node
 * @value: value of node
 * Return:  a pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->parent = parent;

	new->n = value;
	new->left = new->right = NULL;
	return (new);
}