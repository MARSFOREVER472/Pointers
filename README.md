# Pointers

## ¿Qué son los punteros en C++?

**_Los punteros en C++ (o apuntadores) son quizás uno de los temas que más confusión causan al momento de aprender a programar en C++, sin embargo verás que algo no es para tanto y que todo depende de 2 elementos: el signo & (ampersand) y el * (asterisco) que los explicaré en breve. 
En este artículo verás entonces que no es para nada difícil hacer y usar punteros y que además son de gran ayuda al momento de necesitar valores y estructuras dinámicas, por ejemplo, para crear un array dinámico, con dicho arreglo me refiero a que su tamaño puede ser establecido en tiempo de ejecución y lo mismo se puede hacer con las matrices (que en realidad son un array multidimensional)._**

**Ejemplo:**

```
int variable; // Creamos un entero.

int * apuntador = &variable; // Creamos una apuntador a la posición en memoria de "variable".

*apuntador = 20; // Le asignamos un valor a esa posición de memoria.

delete [] apuntador; // Después de operar con punteros es necesario liberar la memoria.

puntero = NULL;
```

## Detalles al crear y usar punteros en C++:

- **_El tipo de dato del apuntador debe coincidir con el de la variable cuya posición en memoria apuntan. En el ejemplo vemos que tanto variable como apuntador son enteros._**

- **_Siempre que queremos usar el apuntador debemos anteponer el asterisco (*) para indicar que usaremos el valor en la posición de memoria apuntada._**

- **_De no usar el asterisco el comportamiento sería impredecible. Estaremos haciendo uso de la dirección de memoria más no del valor almacenado en ésta._**

- **_Después de usar un puntero, especialmente si trabajamos con arreglos o matrices, es MUY recomendable liberar la memoria utilizada con la función delete (**tal como se ha visto en el ejemplo anterior**)._**

- **_Un puntero puede ser de cualquier tipo de dato, inclusive los podemos usar con tipos complejos._**
