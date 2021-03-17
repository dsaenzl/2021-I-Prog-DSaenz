#include <iostream>
#include <cstdlib>

void seq(int a,int b,int c);
int main(int argc,char *argv[]){
    const int n =0;
    const int m =1;
    const int v= std::atoi(argv[1]);
    seq(n,m,v);
    return 0;
}
void seq(int a, int b,int c){
    int suma = 0;
    int ii=0;
    while(ii<c){
        ii=a+b;
        a=b;
        b=ii;
        if(ii%2==0){
            suma += ii;
        }
    }
    std::cout << "La suma de los numeros pares es: " << suma << "\n";
}