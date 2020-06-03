
#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[100][100],filas,columnas;
	char band='F';

	cout<<"Digite el numero de filas: "; cin>>filas;
	cout<<"Digite el numero de columnas: "; cin>>columnas;

	//Rellenando matriz
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>numeros[i][j];
		}

	}

	//Comprobemos si es simetrica
	if(filas==columnas){
		for(int i=0;i<filas;i++){
			for(int j=0;j<columnas;j++){
				if(numeros[i][j] == numeros[j][i]){
					band='V';

				}
			cout<<"["<<numeros[i][j]<<"] ";
			}
		}
	}

	if(band=='V'){
		cout<<"\nEs una matriz simetrica";
	}
	else{
		cout<<"\nNo es una matriz simetrica";
	}


	getch();
	return 0;
}
