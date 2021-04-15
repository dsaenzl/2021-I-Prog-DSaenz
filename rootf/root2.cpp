#include <iostream>
#include <cmath>
#include <cstdlib>

using algr= double(double,int);
double f(double x,int m);
double g(double x,int m);
double simple(double xi,double eps,int m,algr fun,int &p);
const double G =9.81;
const double T=10.0;
const double vt=40.0;
int p=0;
int main(int argc,char *argv[]){
    std::cout.setf(std::ios::scientific);
    std::cout.precision(15);
    double EP = std::atof(argv[1]);
    for(int M=60;M<=110;M+=5){
        double root=simple(10,EP,M,g,p);
        std::cout << M << "\t" << root << "\t" << p << "\n";
    }
    return 0;
}
double g(double x,int m){
    return (G*m)*(1-std::exp(-x*T/m))/vt;
}
double simple(double xi,double eps,int m,algr fun,int &p){
    p=0;
    double xr=xi;
    while(1){
        p++;
        if(std::abs(fun(xr,m)-xr)<eps){
            break;
        }
        else{
            xr=fun(xr,m);
        }
    }
    return xr;
}
