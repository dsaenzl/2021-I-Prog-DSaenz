#include <iostream>
#include <cstdlib>

void sum(int a, int b);
int main(int argc,char *argv[]){
    int c = std::atoi(argv[1]);
    int d = std::atoi(argv[2]);
    sum(c,d);
    return 0;
}
void sum(int a, int b){
    int suma = 0;;
    for (int e = a; e < b; e++){
        if(e%3==0 || e%5==0){
            suma += e;
        }
    }
    std::cout << "La suma es: " << suma << std::endl;
}