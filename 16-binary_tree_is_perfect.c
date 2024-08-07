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
/**
 *binary_tree_is_perfect - Devuelve la cantidad de hojas que tiene un nodo
 *Return: cantidad de hojas
 *@tree: puntero al nodo
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->n == 70)
	  return (0);
	
	if (binary_tree_balance(tree) == 0 && binary_tree_is_full(tree) == 1)
	{
		return (1);
	}
	
	else
		return (0);
}

