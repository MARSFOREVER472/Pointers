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

    // VAMOS A DESPLEGAR UN VALOR NUM�RICO MEDIANTE PUNTEROS:

    // int number = 3; // VARIABLE NUM�RICA.
    // int* pointer_number; // VARIABLE DEL PUNTERO DE UN VALOR NUM�RICO.
    // pointer_number = &number; // APUNTA A UN N�MERO DESPLEGADO POR CONSOLA MEDIANTE UN TROZO DE DIRECCI�N DE MEMORIA.

    // cout << pointer_number << endl; // DESPLIEGA EL VALOR MENCIONADO ANTERIORMENTE JUNTO CON EL N�MERO INGRESADO.
    // cout << &number << endl; // DESPLIEGA ENTREGANDO TODO EL CONTENIDO DE DIRECCI�N DE MEMORIA QUE APUNTA EN UNA VARIABLE.
    // cout << *pointer_number << endl; // IMPRIME EL VALOR 3 HACIENDO SALTO DE L�NEA.

    // AHORA SE DESPLEGAR� UN VALOR ENTERO NUM�RICO...

    // *pointer_number = 4; // VALOR NUM�RICO.

    // cout << pointer_number << endl; // LA DIRECCI�N DE MEMORIA VA A SEGUIR EXISTIENDO AL DESPLEGAR EN LA CONSOLA.

    // cout << *pointer_number << endl; // IMPRIME EL VALOR NUM�RICO (HACER SALTO DE L�NEA E IMPRIME EL VALOR N�MERO 4).

    // cout << &number; // QU� PASAR�A SI IMPRIMI�RAMOS ESTO?????...

    // pointer_number = &number;
    // *pointer_number = number;

    // AHORA PROCEDEREMOS EN INSTANTES RESOLVER ALGUNOS EJERCICIOS DE APLICACI�N VISTOS EN ESTA MATERIA.

    // 1.- DESARROLLE UN PROGRAMA QUE PIDA UN S�LO N�MERO ENTERO POR CONSOLA, LO ASIGNE EN UNA VARIABLE Y QUE �STA SEA GUARDADA EN UN PUNTERO,
    // LUEGO DE ELLO, DESPLIEGUE EL CUADRADO DE UN N�MERO UTILIZANDO EL PUNTERO (NO ES V�LIDA OCUPAR LA VARIABLE, SINO QUE DEBE SER MEDIANTE 
    // OPERACIONES DEL PUNTERO) Y LA DIRECCI�N DE MEMORIA DE UNA VARIABLE.

    int num;
    cout << "ENTER A NUMBER: ";
    cin >> num;

    int* num_pointer = &num; // VARIABLE QUE APUNTA AL N�MERO INGRESADO.

    int num_cuadrado = num * num; // SUPONGA EL VALOR 3 QUE DEBE SER IGUAL A: 3 * 3 = 9.

    int cuadrado = *num_pointer * *num_pointer; // EL CUADRADO DE UN N�MERO SE SACA AHORA MEDIANTE PUNTEROS.

    cout << cuadrado; // IMPRIME EL CUADRADO DE UN N�MERO INGRESADO.
}

