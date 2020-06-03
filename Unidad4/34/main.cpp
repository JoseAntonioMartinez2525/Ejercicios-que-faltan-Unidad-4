#include <iostream>
#include <time.h>
using namespace std;

int main()
{
int A[10], B[10], C[10];
int k=10, m=10;

cout<<"Lectura de Arreglo A."<<endl;
for(int i=0; i<10;i++)
{
A[i]= rand()% 10;
cout<<"["<<A[i]<<"],";


}
cout<<endl<<endl;

cout<<"Lectura de Arreglo B."<<endl;
for(int j=0; j<10;j++){
B[j]= rand()% 10;
cout<<"["<<B[j]<<"],"<<endl;
}cout<<endl<<endl;


    // Inicializamos Arreglo C.
    for(int i=0; i<k; ++i)
            C[i]= 0;

    // Generamos la Arreglo C.
    for(int i=0; i<k; ++i)
            for(int z=0; z<m; ++z)
                C[i]+= A[i]* B[z];


    cout<<"Arreglo C: ";
    for(int i=0; i<k; ++i)
    {

            cout<<"["<<C[i]<<"] ";

    }

return 0;
}
