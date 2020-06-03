#include <iostream>
#include <time.h>
using namespace std;

int main()
{
srand(time(NULL));
    int matriz1[12][19] = {0};
    //int matriz2[12][12] = {0};
    int iguales = 1;

    for (int i = 0; i < 12; ++i) {
        for (int j = 0; j < 20; ++j) {
            matriz1[i][j] =rand()%10-5;
            //matriz2[i][j] = (i == j) ? 1 : 0;
        }
    }

    cout << "<==============M1=============>"<<endl;
    for (int i = 0; i < 12; ++i) {
        for (int j = 0; j < 20; ++j) {
            cout << "[" << matriz1[i][j]  << "]";
        }
        cout << endl;
    }

    for (int k = 0; k < 12; ++k) {
        for (int i = 0; i < 20; ++i) {
           if (matriz1[k][i]<0)
           {
               matriz1[k][i]=0;
           }

        }
    }
    cout << "<==============M1=============>"<<endl;
    for (int i = 0; i < 12; ++i) {
        for (int j = 0; j < 20; ++j) {
            cout << "[" << matriz1[i][j]  << "]";
        }
        cout << endl;
    }


    return 0;
}
