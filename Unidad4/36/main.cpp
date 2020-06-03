#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
    int matriz[6][8] = {0};
    srand(time(NULL));

    //rellenar matriz
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 8; ++j) {
            matriz[i][j] = rand()% 10 -5;
        }
    }
cout<<"<===================MATRIZ==========================>\n"<<endl;
    //mostrar matriz
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 8; ++j) {
            cout << "[";
            if(matriz[i][j]>=0) cout << " ";
            cout << matriz[i][j]<<"]";
        }
        cout << endl;
    }cout<<endl;

    cout << "<==================NEGATIVOS===============>"<<endl;
    //mostrar números negativos y pos
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 8; ++j) {

            if(matriz[i][j]<0){
                cout << "\nCoordenadas: "<< i << "," << j << endl;
                cout << "Numero negativo: ["<<matriz[i][j]<<"]"<<endl;

            }

        }
        cout << endl;
    }

    return 0;
}
