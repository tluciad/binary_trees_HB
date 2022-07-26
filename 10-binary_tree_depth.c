#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_depth: function that measures the depth of a node in a binary tree
 * @tree: is a pointer to the node to measure the depth
 * Return: If tree is NULL, your function must return 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
    size_t left = 0;
    size_t right = 0;

    if (!tree || !tree->parent)
        return (0);

    if (!tree->parent && !tree->parent)
        return (0);
    else
    {
        left = binary_tree_depth(tree->parent);
        right = binary_tree_depth(tree->parent);
        if (left > right)
            return (right + 1);
        else
            return (left + 1);
    }
}
