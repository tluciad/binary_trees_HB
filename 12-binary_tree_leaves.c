#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_leaves: function that counts the leaves in a binary tree
 * @tree:  is a pointer to the root node of the tree to count the number of leaves
 * Return: If tree is NULL, the function must return 0 
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
    if(tree == NULL)
        return(0);
    
    if(tree->left ==NULL && tree->right == NULL)
        return(1);
    else
        return(binary_tree_leaves(tree->left)+ binary_tree_leaves(tree->right));
}