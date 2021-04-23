#include <iostream>
#include <vector>
#include <numeric>
#include <cstdlib>

double prom(std::vector<double> &a);
void print(const std::vector<double> &a);
int main(int argc,char *argv[]){
    int N =std::atoi(argv[1]);
    std::vector<double> d;
    d.resize(N);
    int ii=0;
    for(auto & x : d){
        ii++;
        x=ii;
    }
    print(d);
    prom(d);
    return 0;
}
void print(const std::vector<double> &a){
    for(auto x : a){
        std::cout << x << " ";
    }
    std::cout << std::endl;
}
double prom(std::vector<double> &a){
    double s=0.0;
    for(auto x : a){
        s+=x;
    }
    std::cout << s/a.size() << std::endl;
    return s;
}