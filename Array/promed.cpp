#include <iostream>

int main(int argc,char *argv[]){
    double valor[5];
    double promed=0;
    for(int ii=0;ii<5;ii++){
        std::cout << "Ingrese el valor " << ii+1 << ": ";
        std::cin >> valor[ii];
        promed+=valor[ii];
    }
    std::cout << "El promedio es: " << promed/5 << "\n";
    return 0;
}