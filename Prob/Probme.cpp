#include <iostream>

void sumacua(int a, int b);
int main(int argc,char *argv[]){
    int n = 1;
    int m = 100;
    sumacua(n,m);
    return 0;
}
void sumacua(int a, int b){
    int ii;
    int c;
    int suma=0;
    int suma2 =0;
    for(ii =a; ii<=b;ii++){
        c = ii*ii;
        suma += ii;
        suma2 += c;
    }
    int cua;
    cua = suma*suma;
    std::cout << cua-suma2;
}