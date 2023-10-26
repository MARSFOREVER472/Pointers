#include <iostream>
#include <string> // IMPORTANTE!!!!!!!

using namespace std; // IMPORTANTE!!!!!!!

int main()
{
    // COMENTAREMOS TODO POR EL MOMENTO...
    // Vamos a crear un puntero asociado a una variable entera, en cadena y en booleanos.

    // int* example_pointer; // Para una variable en "integer".
    // std::string* string_pointer; // Para una variable en "string".
    // bool* boolean_pointer;// Para una variable "booleana".

    // VAMOS A DESPLEGAR UN VALOR NUMÉRICO MEDIANTE PUNTEROS:

    int number = 3; // VARIABLE NUMÉRICA.
    int* pointer_number; // VARIABLE DEL PUNTERO DE UN VALOR NUMÉRICO.
    pointer_number = &number; // APUNTA A UN NÚMERO DESPLEGADO POR CONSOLA MEDIANTE UN TROZO DE DIRECCIÓN DE MEMORIA.

    cout << pointer_number << endl; // DESPLIEGA EL VALOR MENCIONADO ANTERIORMENTE JUNTO CON EL NÚMERO INGRESADO.
    cout << &number << endl; // DESPLIEGA ENTREGANDO TODO EL CONTENIDO DE DIRECCIÓN DE MEMORIA QUE APUNTA EN UNA VARIABLE.
    cout << *pointer_number << endl; // IMPRIME EL VALOR 3 HACIENDO SALTO DE LÍNEA.

    // AHORA SE DESPLEGARÁ UN VALOR ENTERO NUMÉRICO...

    *pointer_number = 4; // VALOR NUMÉRICO.

    cout << pointer_number << endl; // LA DIRECCIÓN DE MEMORIA VA A SEGUIR EXISTIENDO AL DESPLEGAR EN LA CONSOLA.

    cout << *pointer_number << endl; // IMPRIME EL VALOR NUMÉRICO (HACER SALTO DE LÍNEA E IMPRIME EL VALOR NÚMERO 4).

    cout << &number; // QUÉ PASARÍA SI IMPRIMIÉRAMOS ESTO?????...

    pointer_number = &number;
    *pointer_number = number;
}

