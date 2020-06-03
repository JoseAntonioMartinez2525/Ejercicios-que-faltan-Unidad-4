#include <iostream>
#include <time.h>
using namespace std;

int main()
{
   int i, j, impares=0, pares=0;
   int matriz[5][5];

cout<<"<==========MATRIZ===================>"<<endl;
   for (int i=0;i<5 ;i++ ){
        for (int j=0;j<5 ;j++ ){
        matriz[i][j]=rand()%9+1;
        cout<<" "<<"["<<matriz[i][j]<<"]";
        if (matriz[i][j]%2)
            { impares++;}else{pares++;}
        }cout<<endl;
   }cout<<endl;
  cout<<"<======Valores Pares===================>"<<endl;
  cout<<"Cantidad: "<<pares<<endl<<endl;
  cout<<"<======Valores Impares===================>"<<endl;
  cout<<"Cantidad: "<<impares<<endl<<endl;

    return 0;
}
