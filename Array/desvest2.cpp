#include <iostream>
#include <vector>
#include <cmath>
#include <numeric>

void inic(std::vector<double> &a);
void print(const std::vector<double> &a);
double media(std::vector<double> &a);
void desvest(const std::vector<double> &a,double m);
int main(void){
    const int N=10;
    std::vector<double> data(N);
    inic(data);
    print(data);
    double m= media(data);
    desvest(data,m);
    return 0;
}
void inic(std::vector<double> &a){
    for(int ii=0;ii<a.size();ii++){
        a[ii]=2*ii+1;
    }
}
void print(const std::vector<double> &a){
    for(auto x: a){
        std::cout << x << " ";
    }
    std::cout << std::endl;
}
double media(std::vector<double> &a){
    double sum =std::accumulate(a.begin(),a.end(),0.0);
    return sum/a.size();
}
void desvest(const std::vector<double> &a,double m){
    double s=0.0;
    for(auto x : a){
        s+=std::pow(x-m,2);
    }
    std::cout << "La desviacion estandar es: "<< std::sqrt(s/a.size()) << std::endl;
}