#include <iostream>
#include <cstdlib>

void prim(int a,int b);
int main(int argc,char *argv[]){
    int n=1;
    int m=std::atoi(argv[1]);
    prim(m,n);
    return 0;
}
void prim(int a,int b){
    while(a>=b){
        ++b;
        if(a%b==0 && b!=a){
            break;
        }
    }
    if(a%b==0 && b!=a){
        std::cout << a << " no es primo.\n";
    }
    else{
        std::cout << a << " es primo.\n";
    }
}