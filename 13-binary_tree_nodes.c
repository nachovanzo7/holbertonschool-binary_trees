#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 *medir3 - Calcula el tamaÃo de un nodo
 *Return: retorna la longitud
 *@tree: puntero al nodo
 */

size_t medir3(const binary_tree_t *tree)
{
	size_t a, b;
	if (tree == NULL)
	  return (0);
	if (tree->left == NULL && tree->right == NULL)
    return (0);

	a = 1 + medir3(tree->left);

	b = 1 + medir3(tree->right);

	return (a + b);
}

/**
 *binary_tree_nodes - Retornar la longitud del arbol
 *Return: longitud del arbol
 *@tree: puntero al nodo donde vamos a medir la longitud
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (medir3(tree) / 2);
}
