## Subject
```
Assignment name  : lcm
Expected files   : lcm.c
Allowed functions:
--------------------------------------------------------------------------------

Escribe una función que reciba dos unsigned int como parámetros y devuelva el MCM
(Mínimo Común Múltiplo) de esos parámetros.

El MCM de dos enteros no nulos es el entero positivo más pequeño divisible por ambos enteros.

Un MCM se puede calcular de dos maneras:

Puedes calcular todos los múltiplos de cada entero hasta que tengas un múltiplo común distinto de 0.

Puedes usar el MCD (Máximo Común Divisor) de estos dos enteros y calcularlo de la siguiente manera:

	LCM(x, y) = | x * y | / HCF(x, y)

  | x * y | means "Absolute value of the product of x by y"

Si al menos uno de los enteros es nulo, el MCM es igual a 0.

Tu función debe ser prototipada de la siguiente manera:

unsigned int    lcm(unsigned int a, unsigned int b);
--------------------------------------------------------------------------------
```


## Subject
```
Assignment name  : lcm
Expected files   : lcm.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function who takes two unsigned int as parameters and returns the
computed LCM of those parameters.

LCM (Lowest Common Multiple) of two non-zero integers is the smallest postive
integer divisible by the both integers.

A LCM can be calculated in two ways:

- You can calculate every multiples of each integers until you have a common
multiple other than 0

- You can use the HCF (Highest Common Factor) of these two integers and
calculate as follows:

	LCM(x, y) = | x * y | / HCF(x, y)

  | x * y | means "Absolute value of the product of x by y"

If at least one integer is null, LCM is equal to 0.

Your function must be prototyped as follows:

unsigned int    lcm(unsigned int a, unsigned int b);
--------------------------------------------------------------------------------
```
