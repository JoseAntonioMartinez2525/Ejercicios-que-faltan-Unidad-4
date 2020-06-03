#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
using namespace std;

int main(){
    srand(time(NULL));
   string nombres[5];
   int tablero[5][7] = {0};
   int grand_total = 0;
   int empleado_lunes = 0;
   int empleado = 0, lun;

   //rellenando de valores
    for (int i = 0; i < 5; ++i) {

        cout << "Ingrese el nombre del empleado"<<endl;
        cin >> nombres[i];

        for (int j = 0; j < 6; ++j) {
            tablero[i][j] = rand()%8 +1;
            cout << "Ingrese la cantidad de horas del día "<< j+1 <<" : ("<<tablero[i][j] <<")"<<endl;
                    if(tablero[0][j]>empleado_lunes)
        {
            empleado_lunes = tablero[0][j];


        }
        }

        cout << "Ingrese el sueldo por hora"<<endl;
        cin >> tablero[i][6];

    }

    //mostrar los valores
    cout << "<=================================>"<<endl;
    for (int k = 0; k < 5; ++k) {
        cout << "["<<nombres[k]<<"]";

        for (int i = 0; i <7 ; ++i) {
            cout << "["<< tablero[k][i]<<"]";
        }
        cout << endl;
    }

    empleado_lunes = tablero[0][0];
    //mostrar las estadisticas
    for (int k = 0; k < 5; ++k) {
        cout << "["<<nombres[k]<<"]"<<endl;

        int total = 0;
        for (int i = 0; i <6 ; ++i) {
            total += tablero[k][i];

        }

        cout << "Horas trabajadas: "<< total << endl;
        cout << "Sueldo semanal: "<< (total*tablero[k][6])<<endl;
        grand_total +=(total*tablero[k][6]);
    }
    cout << "Total a pagar de la empresa: "<<grand_total<<endl;
    cout << "Empleado: "<< nombres[empleado]<<endl;
    cout << "Horas trabajadas: "<<empleado_lunes;
    return 0;
}
