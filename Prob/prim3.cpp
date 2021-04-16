#include <iostream>
#include <cstdlib>
#include <cmath>

void prim(const int & a);
int main(int argc,char *argv[]){
    int n = std::atoi(argv[1]);
    //int n = 6;
    prim(n);
    return 0;
}
void prim(const int & a){
    auto fmod=[](int b, int c){return b%c;};
    int pr=0;
    int ii=2;
    int e=1;
    int k=1;
    while(a>=k){
        double sq=std::sqrt(ii);
        while(sq>=e){
            e++;
            if(fmod(ii,e)==0){
                break;
            }
        }
        if(fmod(ii,e)==0 && ii!=e){
            ++ii;
            e=1;
            continue;
        }
        else{
            pr=ii;
            k++;
            ii++;
            e=1;
        }
    }
    std::cout << pr << " ";
}