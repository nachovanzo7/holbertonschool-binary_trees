#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 *medir4 - Comparar cantidad de niveles
 *Return: retorna la diferencia de niveles
 *@tree: puntero a al nodo para calcular
 */

int medir4(const binary_tree_t *tree)
{
	size_t a, b;

	if (tree == NULL)
		return (0);


	a = 1 + medir4(tree->left);
	b = 1 + medir4(tree->right);


	if (a > b)
		return (a);

	else
		return (b);
}

/**
 *binary_tree_balance - Calcular cantidad de niveles de un nodo
 *Return: retorna la longitud
 *@tree: puntero al nodo para calcular cantidad de niveles
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t x, y;

	if (tree == NULL)
		return (0);

	x = medir4(tree->left);
	y = medir4(tree->right);

	return (x - y);
}
