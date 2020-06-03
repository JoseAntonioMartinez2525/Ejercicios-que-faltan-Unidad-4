#include <iostream>
#include <time.h>
using namespace std;

int main()
{
srand(time(NULL));
    int matriz1[12][12] = {0};
    int matriz2[12][12] = {0};
    int iguales = 1;

    for (int i = 0; i < 12; ++i) {
        for (int j = 0; j < 12; ++j) {
            matriz1[i][j] = ( i == j )? 1 : 0;
            matriz2[i][j] = (i == j) ? 1 : 0;
        }
    }

    cout << "<==============M1=============>"<<endl;
    for (int i = 0; i < 12; ++i) {
        for (int j = 0; j < 12; ++j) {
            cout << "[" << matriz1[i][j]  << "]";
        }
        cout << endl;
    }

    cout << "<==============M2=============>"<<endl;
    for (int i = 0; i < 12; ++i) {
        for (int j = 0; j < 12; ++j) {
            cout << "[" << matriz2[i][j]  << "]";
        }
        cout << endl;
    }

    //comprar
    for (int k = 0; k < 12; ++k) {
        for (int i = 0; i < 12; ++i) {
            if(k == i)
            {
                if(matriz1[k][i]!=matriz2[k][i]){
                    iguales = 0;
                }
            }
        }
    }

    if(iguales == 1)
    {
        cout << "Las diagonales principales son iguales "<<endl;
    }else{
        cout << "No son iguales "<< endl;
    }
    return 0;
}
