#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 *binary_tree_is_full - Devuelve la cantidad de hojas que tiene un nodo
 *Return: cantidad de hojas
 *@tree: puntero al nodo
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t x;

	if (tree == NULL)
		return (0);

	/*Se encuentra una hoja -> retorna 1 ya que cuenta x si misma*/
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* Recorre hasta la hoja y se suma las encontradas (izq y der) */
	x = (binary_tree_is_full(tree->left) + binary_tree_is_full(tree->right));

	if (x % 2 != 0)
		return (0);

	return (1);
}
