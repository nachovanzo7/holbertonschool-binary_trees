#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 *binary_tree_delete - Eliminar el arbol entero
 *Return: no retorna nada
 *@tree: puntero al root del arbol
 */

void binary_tree_delete(binary_tree_t *tree)
{

	if (tree == NULL)
		return;

	if (tree->left != NULL)
		binary_tree_delete(tree->left);
	
	if (tree->right != NULL)
		binary_tree_delete(tree->right);

	free(tree);
}
