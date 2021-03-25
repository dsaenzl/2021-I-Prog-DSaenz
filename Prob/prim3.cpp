#include <iostream>
#include <cstdlib>

void prim(const int & a);
int main(int argc,char *argv[]){
    int n = std::atoi(argv[1]);
    //int n = 6;
    prim(n);
    return 0;
}
void prim(const int & a){
    auto fmod=[](int b, int c){return b%c;};
    int pr[100000];
    int ii=2;
    int e=1;
    int k=1;
    while(a>=k){
        while(ii>=e){
            e++;
            if(fmod(ii,e)==0 || ii==e){
                break;
            }
        }
        if(fmod(ii,e)==0 && ii!=e){
            ++ii;
            e=1;
            continue;
        }
        else if(fmod(ii,e)==0 && ii==e){
            pr[k]=ii;
            k++;
            ii++;
            e=1;
        }
    }
    std::cout << pr[k-1] << " ";
}