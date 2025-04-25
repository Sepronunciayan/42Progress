## Subject
```
Expected Files: ft_list_remove_if.c
Allowed functions: free
--------------------------------------------------------------------------------
Escribe una función llamada ft_list_remove_if que elimine de la lista pasada cualquier
elemento cuya información (data) sea "igual" a la información de referencia.
Debe declararse así:

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());

begin_list es un puntero al primer elemento de la lista.
data_ref es la información que se va a usar como referencia para comparar.
cmp es una función que recibe dos void* y devuelve 0 cuando ambos son iguales.
Tienes que usar el archivo ft_list.h, que contiene:

$>cat ft_list.h
typedef struct s_list
{
	struct s_list *next;
	void *data;
} t_list;
$>
--------------------------------------------------------------------------------
```


## Subject
```
Expected Files: ft_list_remove_if.c
Allowed functions: free
--------------------------------------------------------------------------------
Write a function called ft_list_remove_if that removes from the passed list any element
the data of which is "equal" to the reference data. It will
be declared as follows :
void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());
cmp takes two void* and returns 0 when both parameters are equal. You have to use
the ft_list.h file, which will contain:
$>cat ft_list.h
typedef struct s_list
{
struct s_list *next;
void *data;
} t_list;
$>
--------------------------------------------------------------------------------
```
