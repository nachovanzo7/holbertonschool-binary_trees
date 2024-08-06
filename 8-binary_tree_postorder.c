#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 *binary_tree_postorder - Recorrer el arbol en orden left-right-parent
 *Return: no retorna nada
 *@tree: puntero al root del arbol
 *@func: puntero a la funcion de imprimir nodo
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
	return;
binary_tree_postorder(tree->left, func);
binary_tree_postorder(tree->right, func);
func(tree->n);
}
