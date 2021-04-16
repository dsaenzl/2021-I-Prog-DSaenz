#include <iostream>

int main(int argc,char *argv[]){
    int valores[10]={1,0,485,-50,385,-399,-8465,839,90,-10};
    int menor =0;
    for(int ii=0;ii<=9;ii++){
        if(valores[menor]>valores[ii]){
            menor=ii;
        }
    }
    std::cout << "El menor valor es: " << valores[menor] << "\nLa posicion es: " << menor << "\n";
    return 0;
}