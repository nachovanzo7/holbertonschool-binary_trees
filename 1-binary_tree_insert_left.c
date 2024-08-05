#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
*binary_tree_insert_left - Insertar un nuevo nodo hijo a la izquierda
*Return: Puntero al nuevo nodo creado
*@parent: nodo padre del nuevo nodo
*@value: valor del nuevo nodo
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *nodo;

	nodo = malloc(sizeof(binary_tree_t));

	if (nodo == NULL)
		return (NULL);

	nodo->parent = parent;
	nodo->n = value;

	if (parent->left != NULL)
	{
		nodo->left = parent->left;
		parent->left->parent = nodo;
	}

	parent->left = nodo;

	return (nodo);


}
