#include <iostream>
#include <time.h>
using namespace std;


int main()
{
srand(time(NULL));
int matriz[15][15] = {0};
int menor = 0;
int sumatoria = 0;
int cn = 0;

for (int i = 0; i < 15; ++i) {
for (int j = 0; j < 12; ++j) {
matriz[i][j] = rand()% 10 - 5;
}
}

for (int k = 0; k < 15; ++k) {
for (int i = 0; i < 12; ++i) {
cout << "[";
if(matriz[k][i]>=0){
cout << "0";
}
cout << matriz[k][i] << "]";

if(k==0 && i== 0){
menor = matriz[k][i];
}else{
if(matriz[k][i]< menor)
{
menor = matriz[k][i];
}
}

if(k < 5)
{
sumatoria += matriz[k][i];
}

if(i >=4 && i<=8)
{
if(matriz[k][i]<0){
cn++;
}
}
}
cout << endl;
}

cout << "<---------------------------------------->"<<endl;
cout <<"menor: "<< menor<<endl;
cout <<"sumatoria: "<< sumatoria<<endl;
cout << "negativos: "<< cn << endl;

return 0;
}
