#include <iostream>
using namespace std;

int main() {

    int numero;
// Se valida que numero este entre 2 y 15.
    do {
        cout << "Ingrese un numero entero mayor o igual a dos: ";
        cin >> numero;
    } while (numero < 2 || numero > 15);

    int matriz[15][2];
    int vector_resultante[15];

    for (int i = 0; i < n; i++) {    
        for (int j = 0; j < 2; j++) {
            cout << "Ingrese un numero: " << endl;
            cin >> matriz[i][j];
        }
//Se suman los dos valores de cada fila.
        vector_resultante[i] = matriz[i][0] + matriz[i][1]; 
    }

   char repetir;
// Se repire el analisis mientras el usuario ingrese s.
do {
    if (n == 2) {
        if (vector_resultante[1] > 0)
            cout << "El numero sub 1 pertenece al cuadrante de los positivos" << endl;
        else
            cout << "El numero sub 1 pertenece al cuadrante de los negativos" << endl;

        if (vector_resultante[0] > 0)
            cout << "El numero sub 0 pertenece al cuadrante de los positivos" << endl;
        else
            cout << "El numero sub 0 pertenece al cuadrante de los negativos" << endl;
    }

    cout << "Desea repetir el analisis? (s/n): ";
    cin >> repetir;

} while (repetir == 's' || repetir == 'S');

    return 0;
}
