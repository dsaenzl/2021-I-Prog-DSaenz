#include <iostream>
#include <cmath>
#include <cstdlib>

const double g=9.81;
const double vt=40;
const int T=10;
using fun =double(double,int);
double f(double c,int m);
double Bisection(double xl,double xu,double eps,fun alg,int &m,int &p);
double Regula(double xl,double xu,double eps,fun alg,int &m,int &p);
int main(int argc,char *argv[]){
    std::cout.precision(15);
    std::cout.setf(std::ios::scientific);
    double XL =10;
    double XU =30;
    double EP = 1e-4;
    int p =0;
    int p2=0;
    for(int m=60;m<=110;m+=5){
        double raiz=Bisection(XL,XU,EP,f,m,p);
        double raiz2 = Regula(XL,XU,EP,f,m,p2);
        std::cout << m << "\t" << raiz << "\t" << p << "\t" << raiz2 << "\t" << p2 <<"\n";
    }
    return 0;
}
double f(double c,int m){
    return g*m*(1-std::exp(-c*T/m))/c-vt;
}
double Bisection(double xl,double xu,double eps,fun alg,int &m,int &p){
    p=0;
    double xr;
    xr=0.5*(xl+xu);
    while(1){
        p++;
        xr=0.5*(xl+xu);
        if(std::abs(alg(xr,m))<eps){
            break;
        }
        else if(alg(xl,m)*alg(xr,m)<0){
            xu =xr;
        }
        else{
            xl= xr;
        }
    }
    return xr;
}
double Regula(double xl,double xu,double eps,fun alg,int &m,int &p){
    p=0;
    double xr;
    xr = xu -(f(xu,m)*(xl-xu)/(f(xl,m)-f(xu,m)));
    while(1){
        p++;
        xr = xu -(f(xu,m)*(xl-xu)/(f(xl,m)-f(xu,m)));
        if(std::abs(alg(xr,m))<eps){
            break;
        }
        else if(alg(xl,m)*alg(xr,m)<0){
            xu =xr;
        }
        else{
            xl= xr;
        }
    }
    return xr;
}