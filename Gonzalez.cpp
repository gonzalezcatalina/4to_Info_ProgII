#include <iostream>
using namespace std;

int main() {

    int numero;

    do {
        cout << "Ingrese un numero entero mayor o igual a dos: ";
        cin >> numero;
    } while (numero < 2 || numero > 15);

    int matriz[15][2];
    int vector_resultante[15];

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < 2; j++) {
            cin >> matriz[i][j];
        }

        vector_resultante[i] = matriz[i][0] + matriz[i][1]; 
    }

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

    return 0;
}
