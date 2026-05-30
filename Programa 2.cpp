#include <iostream> // Librería estándar de entrada y salida
#include <vector>   // Librería para usar arrays dinámicos (vectores)

using namespace std; // Evita escribir 'std::' antes de cada comando

int main() { // Punto de inicio del programa
    int N; // Guarda la cantidad de primos solicitados

    cout << "Introduce la cantidad de numeros primos (N): "; // Pide el dato al usuario
    cin >> N; // Lee el número ingresado por teclado

    if (N <= 0) { // Validación: si el número es 0 o negativo...
        cout << "Por favor, introduce un numero mayor que 0." << endl; // Muestra error
        return 1; // Termina el programa indicando un fallo
    } // Fin de la validación

    vector<int> primos; // Array dinámico para almacenar los primos encontrados
    int numeroEvaluar = 2; // Primer número que evaluaremos (el 2)

    while (primos.size() < N) { // Se repite hasta tener los N primos deseados
        bool esPrimo = true; // Bandera: asumimos que el número actual es primo

        for (int i = 2; i * i <= numeroEvaluar; i++) { // Busca divisores hasta la raíz cuadrada del número
            if (numeroEvaluar % i == 0) { // Si el residuo es cero, encontramos un divisor exacto
                esPrimo = false; // Ya no es primo, cambiamos la bandera a falso
                break; // Rompe este bucle para no perder tiempo buscando más divisores
            } // Fin del chequeo de divisor
        } // Fin del bucle de comprobación

        if (esPrimo) { // Si la bandera siguió siendo verdadera...
            primos.push_back(numeroEvaluar); // Agrega el número al final de nuestro array
        } // Fin del guardado

        numeroEvaluar++; // Pasa al siguiente número entero para la próxima vuelta
    } // Fin del bucle de búsqueda

    cout << "Los primeros " << N << " numeros primos son: " << endl; // Mensaje de cabecera

    for (int primo : primos) { // Bucle que recorre cada elemento del array
        cout << primo << " "; // Imprime el primo actual en pantalla con un espacio
    } // Fin de la impresión del array

    cout << endl; // Añade un salto de línea limpio al final

    return 0; // Termina el programa con éxito
} // Fin de la función principal