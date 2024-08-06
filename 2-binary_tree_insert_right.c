#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 *binary_tree_insert_right - Inserta nuevo nodo a la derecha del padre
 *Return: puntero al nuevo nodo
 *@parent: nodo padre del nuevo nodo
 *@value: valor que guarda el nuevo nodo
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *nodo;

	nodo = malloc(sizeof(binary_tree_t));

	if (nodo == NULL)
		return (NULL);

	nodo->n = value;
	nodo->left = NULL;
	nodo->right = NULL;
	nodo->parent = parent;

	if (parent->right != NULL)
	{
		nodo->right = parent->right;
		parent->right->parent = nodo;
	}

	parent->right = nodo;
	return (nodo);
}
