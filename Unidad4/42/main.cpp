#include <iostream>
#include <string.h>

using namespace std;

int main(){
    int acum_v =0, acum_c = 0, acum_n =0;
    int c = 0;
    char palabra[45]={""};
    cout<<"Ingrese una palabra: \n";cin>>palabra;

    for(int i = 0; i <=strlen(palabra); i++){

        if(palabra[i] == 'a' || palabra[i] == 'A' || palabra[i] == 'e' || palabra[i] == 'E'
           || palabra[i] == 'i' || palabra[i] == 'I' || palabra[i] == 'o' || palabra[i] == 'O'
           || palabra[i] == 'u' || palabra[i] == 'U'){
            acum_v++;
           }
        else if(palabra[i] == 0 || palabra[i] == 1 || palabra[i] == 2 || palabra[i] == 3
                || palabra[i] == 4 || palabra[i] == 5 || palabra[i] == 6 || palabra[i] == 7 ||
                palabra[i] == 8 || palabra[i] == 9){
                    acum_n++;
                }
        else if(palabra[i] == 'q' || palabra[i] == 'w' || palabra[i] == 'r' || palabra[i] == 't'
           || palabra[i] == 'y'
           || palabra[i] == 'p' || palabra[i] == 's' || palabra[i] == 'd' || palabra[i] == 'f'
           || palabra[i] == 'g' || palabra[i] == 'h' || palabra[i] == 'j' || palabra[i] == 'k'
           || palabra[i] == 'l' || palabra[i] == 'ñ'
           || palabra[i] == 'z' || palabra[i] == 'x' || palabra[i] == 'c' || palabra[i] == 'v'
           || palabra[i] == 'b' || palabra[i] == 'n' || palabra[i] == 'm' || palabra[i] == 'Q'
           || palabra[i] == 'W' || palabra[i] == 'R' || palabra[i] == 'T' || palabra[i] == 'Y'
           || palabra[i] == 'P' || palabra[i] == 'S' || palabra[i] == 'D' || palabra[i] == 'F'
           || palabra[i] == 'G' || palabra[i] == 'H' || palabra[i] == 'J' || palabra[i] == 'K'
           || palabra[i] == 'L' || palabra[i] == 'Ñ'
           || palabra[i] == 'Z' || palabra[i] == 'X' || palabra[i] == 'C' || palabra[i] == 'V'
           || palabra[i] == 'B' || palabra[i] == 'N' || palabra[i] == 'M') {
            acum_c++;
           }
    }
    cout<<"Total: "<<acum_c+acum_v+acum_n<<endl;
    cout<<"catidad de vocales encontradas: "<<acum_v<<endl;
    cout<<"cantidad de consonantes encontradas: "<<acum_c<<endl;
    cout<<"cantidad de numeros encontrados: "<<acum_n<<endl;


    return 0;
}
