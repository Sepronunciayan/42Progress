## Subject
```
Expected Files: expand_str.c
Allowed functions: write
--------------------------------------------------------------------------------
Escribe un programa que reciba una cadena y la muestre con exactamente tres espacios entre
cada palabra, sin espacios ni tabulaciones al principio o al final, seguido de un salto de línea.
Una palabra es una sección de la cadena delimitada por espacios/tabulaciones, o por
el inicio/final de la cadena.
Si el número de parámetros no es 1, o si no hay palabras, simplemente muestra un salto de línea.

Ejemplos:
$> ./expand_str "vous voyez c'est facile d'afficher la meme chose" | cat -e
vous   voyez   c'est   facile   d'afficher   la   meme   chose$
$> ./expand_str " seulement la c'est plus dur " | cat -e
seulement   la   c'est   plus   dur$
$> ./expand_str "comme c'est cocasse" "vous avez entendu, Mathilde ?" | cat -e
$
$> ./expand_str "" | cat -e
$
--------------------------------------------------------------------------------
```


## Subject
```
Expected Files: expand_str.c
Allowed functions: write
--------------------------------------------------------------------------------
Write a program that takes a string and displays it with exactly three spaces between each word, with
no spaces or tabs either at the beginning or the end, followed by a newline.
A word is a section of string delimited either by spaces/tabs, or by the start/end of the string.
If the number of parameters is not 1, or if there are no words, simply display a newline.

Examples:
$> ./expand_str "vous voyez c'est facile d'afficher la meme chose" | cat -e
vous   voyez   c'est   facile   d'afficher   la   meme   chose$
$> ./expand_str " seulement la c'est plus dur " | cat -e
seulement   la   c'est   plus   dur$
$> ./expand_str "comme c'est cocasse" "vous avez entendu, Mathilde ?" | cat -e
$
$> ./expand_str "" | cat -e
$
--------------------------------------------------------------------------------
```
