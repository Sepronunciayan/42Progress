## Subject
```
Expected Files: repeat_alpha.c
Allowed functions: write
--------------------------------------------------------------------------------
Escribe un programa llamado repeat_alpha que reciba una cadena y la muestre repitiendo cada carácter
alfabético tantas veces como su índice alfabético, seguido de un salto de línea.
'a' se convierte en 'a', 'b' se convierte en 'bb', 'e' se convierte en 'eeeee', etc...
El caso de las letras se mantiene sin cambios.
Si el número de argumentos no es 1, simplemente muestra un salto de línea.

Ejemplos:
$>./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha 'abacadaba 42!' | cat -e
abbacccaddddabba 42!$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
$
$>
--------------------------------------------------------------------------------
```


## Subject
```
Expected Files: repeat_alpha.c
Allowed functions: write
--------------------------------------------------------------------------------
Write a program called repeat_alpha that takes a string and display it repeating each alphabetical
character as many times as its alphabetical index, followed by a newline.
'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...
Case remains unchanged. If the number of arguments is not 1, just display a newline.

Examples:
$>./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha 'abacadaba 42!' | cat -e
abbacccaddddabba 42!$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
$
$>
--------------------------------------------------------------------------------
```
