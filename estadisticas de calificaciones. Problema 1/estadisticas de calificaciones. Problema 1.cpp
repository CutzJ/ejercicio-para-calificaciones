#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int main()
{
	int n;
	cout << "Ingresa un número de estadudiantes: ";
	cin >> n;

	if (n <= 0)
	{
		cout << "El número de estudiantes debe ser mayor a 0."<< endl;
		return 1;
	}

	vector<int> calificaciones(n);
	int suma = 0;
	int maxcal = numeric_limits<int>::min();
	int mincal = numeric_limits<int>::max();
	int aprobados = 0;
	int reprobados = 0;

	cout << "Ingresa las calificaciones de los estudiantes: " << endl;
	for (int i = 0; i < n; ++i)
	{
		cout << "Calificacion del estudiante " << (i + 1) << ":";
		cin >> calificaciones[i];
		suma += calificaciones[i];
		if (calificaciones[i] > maxcal)
		{
			maxcal = calificaciones[i];
		}
		if (calificaciones[i] < mincal)
		{
			mincal = calificaciones[i];
		}
		if (calificaciones[i] >= 60)
		{
			++aprobados;
		}
		else
		{
			++aprobados;
		}
	}

	double promedio = static_cast<double>(suma) / n;

	cout << "La calificacion mas alta es: " << maxcal << endl;
	cout << "La calificacion mas baja es: " << mincal << endl;
	cout << "El promedio de las calificaciones es: " << promedio << endl;
	cout << "Numero de estudiantes que aprobaron: " << aprobados << endl;
	cout << "Numero de estudiantes que reprobaron: " << reprobados << endl;

	return 0;
}
