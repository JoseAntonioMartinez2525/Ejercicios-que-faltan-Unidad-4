#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
    srand(time(NULL));
    int r,c;
cout<<"Renglones de la matriz: ";cin>>r;
cout<<"Columnas de la matriz: "; cin>>c;


    int matriz[r][c];
    int rows[r];
    int cols[c];

    //relleno
    cout << "<==============MATRIZ=========================>"<<endl;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            matriz[i][j] = rand()%10;
            cout << "["<< matriz[i][j]<<"]";
        }
        cout << endl;
    }

    cout << "<==============SUMA DE RENGLONES==============>"<<endl;
    for (int k = 0; k < r; ++k) {
        int a = 0;
        for (int i = 0; i < c; ++i) {
            a += matriz[k][i];
        }
        rows[k] = a;
        cout << "["<< rows[k]<<"]";
    }
    cout << endl;

    cout << "<=============SUMA DE COLUMNAS==============>"<<endl;
    for (int k = 0; k < c; ++k) {
        int a = 0;
        for (int i = 0; i < r; ++i) {
            a += matriz[i][k];
        }
        cols[k] = a;
        cout << "["<< cols[k]<<"]";
    }
    cout << endl;

    return 0;
}
