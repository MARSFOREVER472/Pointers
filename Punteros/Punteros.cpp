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

    // LO PROBAREMOS AHORA CON UNA VARIABLE EN DONDE UN PUNTERO APUNTA AL VECTOR FINAL DE TODA LA LISTA DE ARREGLOS...

    int* vector_num = new int[3];
    cout << vector_num[0];

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

    // int num;
    // cout << "ENTER A NUMBER: ";
    // cin >> num;

    // int* num_pointer = &num; // VARIABLE QUE APUNTA AL N�MERO INGRESADO.

    // int num_cuadrado = num * num; // SUPONGA EL VALOR 3 QUE DEBE SER IGUAL A: 3 * 3 = 9.

    // int cuadrado = *num_pointer * *num_pointer; // EL CUADRADO DE UN N�MERO SE SACA AHORA MEDIANTE PUNTEROS.

    // cout << cuadrado; // IMPRIME EL CUADRADO DE UN N�MERO INGRESADO.

    // 2.- DESARROLLE UN PROGRAMA QUE RECIBA UNA PALABRA POR CONSOLA.
    //     LUEGO, CREE UN VECTOR DE ESTE LARGO Y A CADA POSICI�N DEL VECTOR LE ASIGNE UNA LETRA, PERO EN ORDEN INVERTIDO.
    //     FINALMENTE, RECORRA EL VECTOR MEDIANTE UN PUNTERO Y QUE DESPLIEGUE LO QUE CONTIENE CADA POSICI�N DEL VECTOR.

    // DENTRO DE ESTE MAIN, HAREMOS EL �LTIMO EJERCICIO DE ESTA MANERA:

    // int* vector_num = new int[3]; // NUEVA VARIABLE DE ARREGLOS DE N�MEROS ENTEROS MEDIANTE PUNTERO QUE REDIRECCIONA A ESTA VARIABLE, ES DECIR: [XXX, XXX�, XXX�, ...].

    // vector_num = &vector_num[2]; // PUNTERO DE LA VARIABLE YA DECLARADA.

    // *(vector_num + 2); // EN ORDEN INVERSO.

    // SUPONGA QUE LOS VALORES RECORREN MEDIANTE VECTOR DE ARREGLOS:

    // [0] = 2;
    // [1] = 3;
    // [2] = 4;

    // Y SE MANTIENE AH�:

    // [1] = 4;
    // [1] = 4;

    // vector_num += 2; // LO MISMO QUE EL DE LA ANTERIOR, PERO DE OTRA FORMA.

    // vector_num[0]; // EL ARREGLO DE ESTE PUNTERO SE INICIALIZA EN 0.

    // VERSIONES DIFERENTE A LA HORA DE JUGAR CON EL PUNTERO DE UNA LISTA DE ARREGLOS DE UN VECTOR.

    // vector_num[1] = *(vector_num + 2); // VERSI�N 1.
    // vector_num[1] = vector_num[2]; // VERSI�N 2.

    // int* puntero_a = &vector_num[0]; // APUNTA A LA PRIMERA LETRA MEDIANTE UNA VARIABLE YA DECLARADA EN ESTE EJERCICIO.

}

