#include <iostream>
#include <cstdlib>

int prm_fact(int a);
int main(int arcg,char *argv[]){
    unsigned long n = std::atoi(argv[1]);
    prm_fact(n);
    return 0;
}
int prm_fact(int a){
    int ii =1;
    int v = 0;
    while(ii<a){
        ++ii;
        if (a%ii==0)
        {
            std::cout << ii << " ";
            a /=ii;
        }
        
    }
    return v;
}