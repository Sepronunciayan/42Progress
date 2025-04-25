## Suject
```
Expected Files: rev_wstr.c
Allowed functions: write, malloc, free
--------------------------------------------------------------------------------
Escribe un programa que reciba una cadena como parámetro y muestre sus palabras en orden inverso.
Una "palabra" es una parte de la cadena delimitada por espacios y/o tabulaciones,
o por el inicio/final de la cadena.
Si el número de parámetros es distinto de 1, el programa debe mostrar un salto de línea ('\n').

En las pruebas que se harán, no habrá espacios adicionales:
— No habrá espacios al principio ni al final de la cadena.
— Las palabras estarán siempre separadas por exactamente un espacio.

Ejemplos:
$> ./rev_wstr "le temps du mepris precede celui de l'indifference" | cat -e
l'indifference de celui precede mepris du temps le$
$> ./rev_wstr "abcdefghijklm"
abcdefghijklm
$> ./rev_wstr "il contempla le mont" | cat -e
mont le contempla il$
$> ./rev_wstr | cat -e
$
$>
--------------------------------------------------------------------------------
```


## Suject
```
Expected Files: rev_wstr.c
Allowed functions: write, malloc, free
--------------------------------------------------------------------------------
Write a program that takes a string as a parameter, and prints its words in reverse order.
A "word" is a part of the string bounded by spaces and/or tabs, or the begin/end of the string.
If the number of parameters is different from 1, the program will display '\n'.
In the parameters that are going to be tested, there won't be any "additional" spaces
(meaning that there won't be additional spaces at the beginning or at he end of the string, and
words will always be separated by exactly one space).
Examples:
$> ./rev_wstr "le temps du mepris precede celui de l'indifference" | cat -e
l'indifference de celui precede mepris du temps le$
$> ./rev_wstr "abcdefghijklm"
abcdefghijklm
$> ./rev_wstr "il contempla le mont" | cat -e
mont le contempla il$
$> ./rev_wstr | cat -e
$
$>
--------------------------------------------------------------------------------
```
