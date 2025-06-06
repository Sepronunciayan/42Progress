## Subject
```
Assignment name  : sort_list
Expected files   : sort_list.c
Allowed functions:
--------------------------------------------------------------------------------

Escribe las siguientes funciones:

t_list *sort_list(t_list* lst, int (*cmp)(int, int));
Esta función debe ordenar la lista que se pasa como parámetro, usando el puntero a función
cmp para decidir el orden que se debe aplicar, y devolver un puntero al primer elemento
de la lista ya ordenada.

Las duplicaciones deben mantenerse.

Las entradas siempre serán coherentes.

Debes usar el tipo t_list descrito en el archivo list.h que se te proporciona. Debes incluir
ese archivo (#include "list.h"), pero no debes entregarlo. Usaremos nuestro propio archivo
para compilar tu entrega.

Las funciones que se pasen como cmp siempre devolverán un valor distinto de 0 si a y b están
en el orden correcto, y 0 en caso contrario.

Por ejemplo, la siguiente función usada como cmp ordenará la lista en orden ascendente:

int ascending(int a, int b)
{
	return (a <= b);
}
```

## Subject
```
Assignment name  : sort_list
Expected files   : sort_list.c
Allowed functions:
--------------------------------------------------------------------------------

Write the following functions:

t_list	*sort_list(t_list* lst, int (*cmp)(int, int));

This function must sort the list given as a parameter, using the function
pointer cmp to select the order to apply, and returns a pointer to the
first element of the sorted list.

Duplications must remain.

Inputs will always be consistent.

You must use the type t_list described in the file list.h
that is provided to you. You must include that file
(#include "list.h"), but you must not turn it in. We will use our own
to compile your assignment.

Functions passed as cmp will always return a value different from
0 if a and b are in the right order, 0 otherwise.

For example, the following function used as cmp will sort the list
in ascending order:

int ascending(int a, int b)
{
	return (a <= b);
}
```
