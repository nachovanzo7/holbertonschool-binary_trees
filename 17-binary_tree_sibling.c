#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 *binary_tree_sibling - Devolver hermano de node
 *Return: puntero al nodo hermano
 *@node: puntero a nodo
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	if (node->parent == NULL)
		return (NULL);

	if (node->parent->right == node && node->parent->left != NULL)
		return (node->parent->left);

	else if (node->parent->left == node && node->parent->left != NULL)
		return (node->parent->right);

	return (NULL);
}
