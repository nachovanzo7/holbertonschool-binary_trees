#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 *medir - Calcula la cantidad de niveles de un nodo
 *Return: retorna la longitud
 *@tree: puntero al nodo
 */

size_t medir(const binary_tree_t *tree)
{
	size_t a, b;

	if (tree == NULL)
		return (0);


	a = 1 + medir(tree->left);
	b = 1 + medir(tree->right);

	if (a > b)
		return (a);

	else
		return (b);
}

/**
 *binary_tree_height - Calcular cantidad de niveles de un nodo
 *Return: retorna la longitud
 *@tree: puntero al nodo para calcular cantidad de niveles
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	return (medir(tree) - 1);
}

