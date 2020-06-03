#include<iostream>
#include<time.h>
#include <stdlib.h>
#include <conio.h>


using namespace std;

int main()
{
    int n[100]={0};
    int temp,Alum, sum=0;
    float promedio;
    for (int i=1;i<=100 ;i++ ){
    n[i]=rand()%90+10;
    cout<<"Alumno: #"<<i<<" calificacion: "<<n[i]<<endl;
    /*/n[i]=Alum;
    temp+=Alum;
    /*/
    sum+=n[i];


    }cout<<endl<<endl;
    promedio=sum/100;
    cout<<"<Resultados...............................>:"<<endl;
    cout<<"Promedio del grupo: "<<promedio<<endl;
    cout<<"Estudiantes arriba del promedio:"<<endl;
    cout<<"<......................................>:"<<endl<<endl;
    for (int i=0;i<=100 ;i++ ){
    if(n[i]>promedio){
        cout<<"Alumno: "<<i<<endl;
    }

    }
    getch();


}
