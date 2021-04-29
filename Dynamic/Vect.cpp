#include <iostream>
#include <vector>
#include <cstdlib>

void inic(std::vector<double> &a,int m,int n);
double norma(const std::vector<double> &a);
int main(int argc,char *argv[]){
    std::cout.precision(15);
    std::cout.setf(std::ios::scientific);
    const int M=std::atoi(argv[1]);
    const int N=std::atoi(argv[2]);
    std::vector<double> matr;
    matr.resize(M*N);
    inic(matr,M,N);
    norma(matr);
    return 0;
}
void inic(std::vector<double> &a,int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            a[i*n+j]=1.0/(2*i+j+1);
        }
    }
}
double  norma(const std::vector<double> &a){
    double s=0.0;
    for(auto x : a){
        s+=std::abs(x);
    }
    std::cout << "La norma de la matriz es: " << s << std::endl;
    return s;
}