#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_height:
 *
 * @param tree
 * @return size_t
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left = 0;
    size_t right = 0;

    if (!tree)
        return (0);

    if (!tree->left && !tree->right)
        return (0);
    else
    {
        left = binary_tree_height(tree->left);
        right = binary_tree_height(tree->right);
        if (left < right)
            return (right + 1);
        else
            return (left + 1);
    }
}
