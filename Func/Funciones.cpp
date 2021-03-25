#include <iostream>
#include <cstdlib>

void sum(const int & a,const int & b);
int main(int argc,char *argv[]){
    int c = std::atoi(argv[1]);
    int d = std::atoi(argv[2]);
    sum(c,d);
    return 0;
}
void sum(const int & a,const int & b){
    //Función tipo lambda
    auto lmod= [](int a, int b){return a%b;}; 
    int suma = 0;;
    for (int e = a; e < b; e++){
        if(lmod(e,3)==0 || lmod(e,5)==0){
            suma += e;
        }
    }
    std::cout << "La suma es: " << suma << std::endl;
}