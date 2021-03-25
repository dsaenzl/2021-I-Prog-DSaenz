#include <iostream>
#include <cmath>
#include <cstdlib>

int factorial(int a);
double tay(double & x,int & N);
const double pi=M_PI;
int main(int argc,char *argv[]){
    double X =std::atof(argv[1]);
    int n=std::atoi(argv[2]);
    double m;
    //double m= 1./3.;
    //int n =10;
    X *=pi;
    m= tay(X,n);
    double c;
    std::cout << "El valor por la serie de Taylor es: "<< m << std::endl;
    c=((m-std::sin(X))/std::sin(X))*100;
    std::cout << "El error porcentual es: " << c << "\n";
    return 0;
}
double tay(double & x,int & N){
    int v =1;
    int e =0;
    double s=0;
    while(v<=N){
        s += ((std::pow(-1,e)*std::pow(x,v))/factorial(v));
        e++;
        v = 2*e +1;
    }
    return s;
}
int factorial(int a){
    if(a<0) return 0;
    else if(a>1) return  a*factorial(a-1);
    return 1;
}