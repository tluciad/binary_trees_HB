#include "binary_trees.h"
#include <stdlib.h>
/**
 * @brief
 *
 * @param tree
 * @return size_t
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    if (tree == NULL)
		return (0);

    if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);

	if (tree->right != NULL)
		return (binary_tree_nodes(tree->right) + 1);

    if (tree->left != NULL)
		return (binary_tree_nodes(tree->left) + 1);    	

	return (0);
}