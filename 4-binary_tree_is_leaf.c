#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_is_leaf: function that checks if a node is a leaf
 * @node:
 * Return: 1 or 0 if node is NULL
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->left && !node->right)
		return (1);
	else
		return (0);
}
