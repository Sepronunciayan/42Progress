#Subject
```
Expected Files: *.c, *.h
Allowed functions: atoi, printf, write
--------------------------------------------------------------------------------

Escribe un programa que reciba tres cadenas:

- La primera y la tercera son representaciones de enteros con signo en base-10 que caben en un int.

- La segunda cadena es un operador aritmético elegido de entre: +, -, *, /, %.

El programa debe mostrar el resultado de la operación aritmética solicitada, seguido de un salto de línea.
Si el número de parámetros no es 3, el programa solo mostrará un salto de línea.
Puedes suponer que las cadenas no contienen errores ni caracteres extraños.
Los números negativos, ya sea en la entrada o salida, tendrán únicamente un signo negativo al principio.
El resultado de la operación cabrá dentro de un int.

Ejemplos:
$> ./do_op "123" "*" 456 | cat -e
56088$
$> ./do_op "9828" "/" 234 | cat -e
42$
$> ./do_op "1" "+" "-43" | cat -e
-42$
$> ./do_op | cat -e
$
--------------------------------------------------------------------------------
```


#Subject
```
Expected Files: *.c, *.h
Allowed functions: atoi, printf, write
--------------------------------------------------------------------------------
Write a program that takes three strings:

- The first and the third one are representations of base-10 signed integers that fit in an int.

- The second one is an arithmetic operator chosen from: + - * / %.

The program must display the result of the requested arithmetic operation, followed by a newline.
If the number of parameters is not 3, the program just displays a newline.
You can assume the string have no mistakes or extraneous characters.
Negative numbers, in input or output, will have one and only one leading '-'.
The result of the operation fits in an int.

Examples:
$> ./do_op "123" "*" 456 | cat -e
56088$
$> ./do_op "9828" "/" 234 | cat -e
42$
$> ./do_op "1" "+" "-43" | cat -e
-42$
$> ./do_op | cat -e
$
--------------------------------------------------------------------------------
```
