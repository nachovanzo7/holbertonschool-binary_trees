#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 *medir - Calcula la cantidad de niveles de un nodo hacia arriba
 *Return: retorna la longitud
 *@tree: puntero al nodo
 */

size_t medir(const binary_tree_t *tree)
{
	size_t a;

	if (tree == NULL)
		return (0);


	a = 1 + medir(tree->parent);

		return (a);
}

/**
 *binary_tree_depth - Calcular cantidad de niveles de un nodo
 *Return: retorna la longitud
 *@tree: puntero al nodo para calcular cantidad de niveles hacia arriba
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (medir(tree) - 1);
}
