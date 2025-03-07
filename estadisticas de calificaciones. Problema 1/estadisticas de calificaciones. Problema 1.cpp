#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int main()
{
    // Declaramos una variable para el número de estudiantes
    int n;
    cout << "Ingresa un número de estudiantes: ";  // Solicita al usuario que ingrese la cantidad de estudiantes
    cin >> n;  // Lee el número de estudiantes desde la entrada

    // Validamos que el número de estudiantes sea mayor que 0
    if (n <= 0)
    {
        cout << "El número de estudiantes debe ser mayor a 0." << endl;
        return 1;  // Salimos del programa si el número de estudiantes no es válido
    }

    // Inicializamos un vector para almacenar las calificaciones de los estudiantes
    vector<int> calificaciones(n);
    int suma = 0;  // Variable para almacenar la suma total de las calificaciones
    int maxcal = numeric_limits<int>::min();  // Inicializamos la calificación más alta con el valor más pequeño posible
    int mincal = numeric_limits<int>::max();  // Inicializamos la calificación más baja con el valor más grande posible
    int aprobados = 0;  // Contador de estudiantes aprobados
    int reprobados = 0;  // Contador de estudiantes reprobados

    cout << "Ingresa las calificaciones de los estudiantes: " << endl;

    // Bucle para ingresar las calificaciones de todos los estudiantes
    for (int i = 0; i < n; ++i)
    {
        cout << "Calificación del estudiante " << (i + 1) << ":";  // Muestra el número del estudiante para ingresar su calificación
        cin >> calificaciones[i];  // Lee la calificación de un estudiante
        suma += calificaciones[i];  // Suma la calificación al total

        // Comprobamos si la calificación actual es la mayor hasta ahora
        if (calificaciones[i] > maxcal)
        {
            maxcal = calificaciones[i];  // Actualizamos la calificación más alta
        }

        // Comprobamos si la calificación actual es la menor hasta ahora
        if (calificaciones[i] < mincal)
        {
            mincal = calificaciones[i];  // Actualizamos la calificación más baja
        }

        // Verificamos si el estudiante aprobó o reprobó
        if (calificaciones[i] >= 60)
        {
            ++aprobados;  // Si la calificación es 60 o más, incrementamos los aprobados
        }
        else
        {
            ++reprobados;  // Si la calificación es menor a 60, incrementamos los reprobados
        }
    }

    // Calculamos el promedio de las calificaciones
    double promedio = static_cast<double>(suma) / n;

    // Mostramos los resultados
    cout << "La calificación más alta es: " << maxcal << endl;
    cout << "La calificación más baja es: " << mincal << endl;
    cout << "El promedio de las calificaciones es: " << promedio << endl;
    cout << "Número de estudiantes que aprobaron: " << aprobados << endl;
    cout << "Número de estudiantes que reprobaron: " << reprobados << endl;

    return 0;  // Fin del programa
}
