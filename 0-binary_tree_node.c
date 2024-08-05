#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
*binary_tree_node - Crear un arbol binario
*Return: retorna puntero al nuevo nodo
*@parent: nodo padre para el nuevo nodo
*@value: valor que guarda el nuevo nodo
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nodo;

	nodo = malloc(sizeof(binary_tree_t));

	if (nodo == NULL)
		return (NULL);

	nodo->parent = parent;
	nodo->left = NULL;
	nodo->right = NULL;
	nodo->n = value;

	return (nodo);
}
