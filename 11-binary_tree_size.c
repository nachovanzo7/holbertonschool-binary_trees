#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 *medir2 - Calcula el tamaÃo de un nodo
 *Return: retorna la longitud
 *@tree: puntero al nodo
 */

size_t medir2(const binary_tree_t *tree)
{
	size_t a, b;

	if (tree == NULL)
		return (0);

	a = 1 + medir2(tree->left);

	b = 1 + medir2(tree->right);

	return (a + b);
}

/**
 *binary_tree_size - Retornar la longitud del arbol
 *Return: longitud del arbol
 *@tree: puntero al nodo donde vamos a medir la longitud
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (medir2(tree) / 2);
}



