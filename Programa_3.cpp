#include <iostream> // Librería necesaria para utilizar cin y cout
using namespace std; // Evita escribir std:: antes de cada instrucción

// Inicio del programa
int main() {

    // Vector donde se almacenarán las ventas de los 7 días
    float ventasSemana[7];

    // Variable para acumular todas las ventas
    float sumaVentas = 0;

    // Variable para guardar la venta más alta encontrada
    float ventaMaxima = 0;

    // Variable que almacenará el día con mayor venta
    int mejorDia = 0;

    // Variable lógica para verificar si existió un día sin ventas
    bool existeDiaSinVenta = false;

    // Ciclo que se ejecuta 7 veces, una por cada día
    for (int i = 0; i < 7; i++) {

        // Solicita ingresar la venta correspondiente al día actual
        cout << "Ingrese la venta del dia " << i + 1 << ": ";
        cin >> ventasSemana[i];

        // Se acumula la venta ingresada
        sumaVentas = sumaVentas + ventasSemana[i];

        // Comprueba si es el primer dato o si la venta actual supera la mayor
        if (i == 0 || ventasSemana[i] > ventaMaxima) {

            // Actualiza el valor de la venta máxima
            ventaMaxima = ventasSemana[i];

            // Guarda el número del día con la venta más alta
            mejorDia = i + 1;
        }

        // Verifica si el valor ingresado es igual a cero
        if (ventasSemana[i] == 0) {

            // Cambia el valor lógico a verdadero
            existeDiaSinVenta = true;
        }
    }

    // Muestra la suma total de las ventas semanales
    cout << "\nEl total vendido en la semana es: Q" << sumaVentas << endl;

    // Muestra cuál fue el día con la venta más alta
    cout << "El dia con mayor venta fue el dia "
        << mejorDia
        << " con un total de Q"
        << ventaMaxima
        << endl;

    // Evalúa si existió algún día sin ventas
    if (existeDiaSinVenta) {

        // Mensaje cuando sí hubo un día sin ventas
        cout << "Hubo al menos un dia sin ventas." << endl;
    }
    else {

        // Mensaje cuando todos los días tuvieron ventas
        cout << "Todos los dias registraron ventas." << endl;
    }

    // Indica que el programa terminó correctamente
    return 0;
}
