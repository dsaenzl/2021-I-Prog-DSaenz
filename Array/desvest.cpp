#include<iostream>
#include <cmath>

double desvest(double data[],int size,double x);
double media(double data[],int size);
int main(int argc,char *argv[]){
    const int N = 5;
    double vlor[N]={5,6,3,6,8};
    double m=media(vlor,N);
    std::cout << media(vlor,N) << "\t" << desvest(vlor,N,m) << std::endl;
    return 0;
}
double desvest(double data[],int size,double x){
    double s=0;
    for(int ii=0;ii<size;ii++){
        s+=std::pow(data[ii]-x,2);
    }
    return std::sqrt(s/size);
}
double media(double data[],int size){
    double s=0;
    for(int ii=0;ii<size;ii++){
        s+=data[ii];
    }
    return s/size;
}