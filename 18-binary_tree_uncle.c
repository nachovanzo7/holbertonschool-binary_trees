#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 *binary_tree_uncle - Devolver hermano de node
 *Return: puntero al nodo hermano
 *@node: puntero a nodo
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	if (node->parent == NULL)
		return (NULL);
	if (node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->right == node->parent)
		if (node->parent->parent->left != NULL)
			return (node->parent->parent->left);

	if (node->parent->parent->left == node->parent)
		if (node->parent->parent->left != NULL)
			return (node->parent->parent->right);

	return (NULL);
}
