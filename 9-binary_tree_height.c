#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_height: function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: If tree is NULL, your function must return 0
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
