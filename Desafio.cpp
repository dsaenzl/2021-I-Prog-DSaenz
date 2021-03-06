#include <iostream>

void Escr(int n);

int main(void){
    int v;
    std::cout << "Ingrese el numero:\n";
    std::cin >> v;
    Escr(v);
    return 0;
}
void Escr(int n){
    int c[10];
    int i=0;
    while(n>0){
        c[i] = n%10;
        n /=10;
        i +=1;
    }
    int m;
    for (m=i-1;m>=0; m-=1)
    {
        std::cout << " " <<c[m];
    }
    
}