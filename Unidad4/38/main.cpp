#include <iostream>
#include <time.h>
using namespace std;

int main()
{
   int i, j, multDP;
   int matriz[5][5];


    cout<<endl;


   for (int i=0;i<5 ;i++ ){
        for (int j=0;j<5 ;j++ ){
        matriz[i][j]=rand()%8+1;
        cout<<" "<<"["<<matriz[i][j]<<"]";
        }cout<<endl;
   }cout<<endl;

    cout<<"los valores de la diagonal principal: "<<endl;

    for (int i=0;i<5 ;i++ ){
        for (int j=0;j<5 ;j++ ){
                if(i=j){
                    cout<<" "<<"["<<matriz[i][j]<<"]";
                    multDP*=matriz[i][j];
                }
        }
   }
   cout<<"\n\nLa multiplicacion de la diagonal principal es: "<<multDP;

    return 0;
}
