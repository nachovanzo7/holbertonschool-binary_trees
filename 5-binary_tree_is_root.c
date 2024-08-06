#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 *binary_tree_is_root - Chequear si el nodo (node) es una raiz
 *Return: retorna 1 en caso de que si, 0 en caso de que no
 *@node: nodo a chequear
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);

	return (0);
}
