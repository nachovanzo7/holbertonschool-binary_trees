# Árboles Binarios

## Índice

1. [Introducción](#introducción)
2. [Definición](#definición)
3. [Tipos de Árboles Binarios](#tipos-de-árboles-binarios)
    - [Árbol Binario Completo](#árbol-binario-completo)
    - [Árbol Binario Lleno](#árbol-binario-lleno)
    - [Árbol Binario Perfecto](#árbol-binario-perfecto)
    - [Árbol Binario Balanceado](#árbol-binario-balanceado)
4. [Operaciones en Árboles Binarios](#operaciones-en-árboles-binarios)
    - [Inserción](#inserción)
    - [Eliminación](#eliminación)
    - [Búsqueda](#búsqueda)
    - [Recorridos](#recorridos)
5. [Aplicaciones de los Árboles Binarios](#aplicaciones-de-los-árboles-binarios)
6. [Implementación en C](#implementación-en-c)
7. [Conclusión](#conclusión)
8. [Referencias](#referencias)

## Introducción

Un árbol binario es una estructura de datos jerárquica en la que cada nodo tiene a lo sumo dos hijos, referidos como hijo izquierdo e hijo derecho. Los árboles binarios son fundamentales en la informática y se utilizan en diversas aplicaciones, desde la representación de expresiones matemáticas hasta la implementación de estructuras de datos eficientes como montones y árboles de búsqueda binaria.

## Definición

Un árbol binario es una estructura de datos no lineal compuesta de nodos, donde cada nodo tiene:
- Un valor o dato.
- Un puntero al nodo hijo izquierdo.
- Un puntero al nodo hijo derecho.

## Tipos de Árboles Binarios

### Árbol Binario Completo

Un árbol binario es completo si todos los niveles, excepto posiblemente el último, están completamente llenos, y todos los nodos están lo más a la izquierda posible.

### Árbol Binario Lleno

Un árbol binario es lleno (o estrictamente binario) si cada nodo tiene 0 o 2 hijos. No puede haber nodos con un solo hijo.

### Árbol Binario Perfecto

Un árbol binario es perfecto si todos los niveles están completamente llenos. En otras palabras, es un árbol binario completo donde todos los nodos tienen dos hijos y todas las hojas están en el mismo nivel.

### Árbol Binario Balanceado

Un árbol binario es balanceado si la profundidad de los subárboles izquierdo y derecho de cada nodo difiere en no más de una unidad. Los árboles binarios balanceados garantizan una altura mínima, lo que mejora la eficiencia de las operaciones de búsqueda, inserción y eliminación.

## Operaciones en Árboles Binarios

### Inserción

La inserción en un árbol binario implica añadir un nuevo nodo en la posición correcta para mantener las propiedades del árbol. En un árbol binario de búsqueda, esto se hace comparando el valor a insertar con los valores de los nodos existentes y colocando el nuevo nodo en la posición apropiada.

### Eliminación

La eliminación en un árbol binario puede ser más complicada que la inserción, ya que puede implicar la reestructuración del árbol. Hay tres casos principales a considerar:
1. El nodo a eliminar es una hoja (sin hijos).
2. El nodo a eliminar tiene un solo hijo.
3. El nodo a eliminar tiene dos hijos.

### Búsqueda

La búsqueda en un árbol binario implica recorrer el árbol desde la raíz hasta encontrar el nodo con el valor deseado o llegar a una hoja sin encontrar el valor. En un árbol binario de búsqueda, esto se hace comparando el valor buscado con los valores de los nodos y siguiendo el subárbol izquierdo o derecho según corresponda.

### Recorridos

Hay varios tipos de recorridos en un árbol binario:
- **Recorrido Preorden (Pre-order)**: Visita la raíz, luego el subárbol izquierdo y finalmente el subárbol derecho.
- **Recorrido Inorden (In-order)**: Visita el subárbol izquierdo, luego la raíz y finalmente el subárbol derecho.
- **Recorrido Postorden (Post-order)**: Visita el subárbol izquierdo, luego el subárbol derecho y finalmente la raíz.
- **Recorrido por Niveles (Level-order)**: Visita los nodos nivel por nivel, de izquierda a derecha.

## Aplicaciones de los Árboles Binarios

Los árboles binarios se utilizan en una amplia variedad de aplicaciones, incluyendo:
- Implementación de expresiones algebraicas.
- Representación de estructuras jerárquicas.
- Implementación de árboles de búsqueda binaria (BST) para operaciones de búsqueda eficientes.
- Representación de montones (heaps) en algoritmos de ordenación.
- Compresión de datos mediante árboles de Huffman.

## Implementación en C

```c
#include <stdio.h>
#include <stdlib.h>

// Definición del nodo del árbol binario
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Función para crear un nuevo nodo
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Función para insertar un nuevo nodo en el árbol binario de búsqueda
struct Node* insertNode(struct Node* root, int data) {
    if (root == NULL) {
        return createNode(data);
    }

    if (data < root->data) {
        root->left = insertNode(root->left, data);
    } else {
        root->right = insertNode(root->right, data);
    }

    return root;
}

// Función para realizar un recorrido inorden del árbol
void inorderTraversal(struct Node* root) {
    if (root == NULL) {
        return;
    }

    inorderTraversal(root->left);
    printf("%d ", root->data);
    inorderTraversal(root->right);
}

// Función principal
int main() {
    struct Node* root = NULL;
    root = insertNode(root, 50);
    insertNode(root, 30);
    insertNode(root, 20);
    insertNode(root, 40);
    insertNode(root, 70);
    insertNode(root, 60);
    insertNode(root, 80);

    printf("Recorrido Inorden: ");
    inorderTraversal(root);
    printf("\n");

    return 0;
}

CONCLUSIÓN
Los árboles binarios son una estructura de datos fundamental en la informática, con aplicaciones que van desde la representación de datos jerárquicos hasta la implementación de algoritmos de búsqueda y ordenación eficientes. Comprender sus propiedades y operaciones básicas es esencial para cualquier programador o científico de datos.
