#include <iostream>
#include <cstdlib>
#include <cmath>

void inic(int m,int n);
int main(int argc,char *argv[]){
    const int M=std::atoi(argv[1]);
    const int N=std::atoi(argv[2]);
    inic(M,N);
    return 0;
}
void inic(int m,int n){
    double *data=nullptr;
    data =new double [m*n];
    double s=0.0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            data[i*n+j]=1.0/(2*i+j+1);
            s+=std::abs(data[i*n+j]);
        }
    }
    std::cout << "La norma de la matriz es: " << s << std::endl;
    delete [] data;
    data=nullptr;
}
