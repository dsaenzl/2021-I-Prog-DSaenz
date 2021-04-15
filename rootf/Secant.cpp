#include<iostream>
#include<cmath>

using alg =double(double);
const double M=60;
const double G=9.81;
const double T=10.0;
const double VT=40;
double f(double x);
double secant(double xo,double xi,double eps,alg fun,int &p);
int main(int argc,char *argv[]){
    std::cout.setf(std::ios::scientific);
    std::cout.precision(15);
    double XO=10;
    double XI=30;
    double EP=1e-4;
    int p=0;
    double root =secant(XO,XI,EP,f,p);
    std::cout << root << "\t" << p << "\n";
    return 0;
}
double f(double x){
    return G*M*(1-std::exp(-x*T/M))/x-VT;
}
double secant(double xo,double xi,double eps,alg fun,int &p){
    p=0;
    double xr=0;
    double xu=xi;
    double xl=xo;
    while(1){
        p++;
        xr=xu-(fun(xu)*(xl-xu))/(fun(xl)-fun(xu));
        if(std::abs(fun(xr))<eps){
            break;
        }
        else{
            xl=xu;
            xu=xr;
        }
    }
    return xr;
}