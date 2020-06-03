#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int numero[10];
    string nombre[10];
    int mayor=0;

     for(int i=0;i<10;i++){
        cout<<"\nAlumno: #"<<i<<endl;
        cout<<"nombre: ";cin >> nombre[i];
        cout <<"n\edad: ";cin >> numero[i];
         }

for(int i=0;i<9;i++){
    for(int j=i+1;j<10;j++){
		if(numero[i]>mayor){
			mayor = numero[i];
		}
    string temp = nombre[i];
		nombre[i] = nombre[j];
		nombre[j] = temp;
	}
}cout<<endl;

cout<<"Alumno con mayor edad: "<<nombre<<endl;cout<<"edad: "<<mayor;
    return 0;
}
