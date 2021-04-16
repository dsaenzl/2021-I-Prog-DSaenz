#include <iostream>
#include <cstdlib>
#include <cmath>

void smpr(int b);

int main(int argc,char *argv[]){
    //int m = std::atoi(argv[1]);
    int m = 10;
    smpr(m);
    return 0;
}

void smpr(int b){
    int ii =2;
    int a =0;
    int c=1;
    while(b>=ii){
        float sq=std::sqrt(ii);
        while(c<=sq){
            c++;
            if(ii%c==0){
                break;
            }
        }
        if(ii%c==0 && ii!=c){
            ++ii;
            c=1;
            continue;
        }
        else{
            a +=ii;
            ++ii;
            c=1;
        }
    }
    std::cout << "La suma es: " << a << std::endl;
}
