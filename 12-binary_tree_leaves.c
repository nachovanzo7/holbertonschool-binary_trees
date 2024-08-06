#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 *binary_tree_leaves - Devuelve la cantidad de hojas que tiene un nodo
 *Return: cantidad de hojas
 *@tree: puntero al nodo
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/*Se encuentra una hoja -> retorna 1 ya que cuenta x si misma*/
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* Recorre hasta la hoja y se suma las encontradas (izq y der) */
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
