#include <iostream>
#include <cmath>

using fprt =double(double);
double f(double x);
double de(double x);
double d(double x);
double newton(double x1,fprt fu,int &p,double eps);
double newton2(double x1,fprt fu,int &p,double eps);
const double G=9.81;
const double T=10.0;
const double VT=40;
const double M=60;
int main(int argc,char *argv[]){
    std::cout.setf(std::ios::scientific);
    std::cout.precision(15);
    int p1=0;
    int p2=0;
    double Ep=1e-4;
    double r1=newton(10,f,p1,Ep);
    double r2=newton2(10,f,p2,Ep);
    std::cout << r1 << "\t" << p1 << "\t" << r2 << "\t" << p2 <<"\n";
    return 0;
}
double f(double x){
    return G*M*(1-std::exp(-x*T/M))/x-VT;
}
double de(double x){
    double h=1e-4;
    return (f(x+h/2)-f(x-h/2))/h;
}
double d(double x){
    return (G*T*std::exp(-x*T/M)-G*M*(1-std::exp(-x*T/M)))/(x*x);
}
double newton(double x1,fprt fu,int &p,double eps){
    double xr=x1;
    p=0;
    while(1){
        p++;
        double dev1=d(xr);
        if(std::abs(fu(xr))<eps){
            break;
        }
        else{
            xr=xr-(fu(xr)/dev1);
        }
    }
    return xr;
}
double newton2(double x1,fprt fu,int &p,double eps){
    double xr=x1;
    p=0;
    while(1){
        p++;
        double dev1=de(xr);
        if(std::abs(fu(xr))<eps){
            break;
        }
        else{
            xr=xr-(fu(xr)/dev1);
        }
    }
    return xr;
}