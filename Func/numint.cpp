#include <iostream>
#include <cmath>
double numin_Trape(double a,double b,int n);
double f(double x);
const double pi=M_PI;
int main(int argc,char *argv[]){
    std::cout.precision(15);
    std::cout.scientific;
    double a, b;
    a=std::atof(argv[1])*pi;
    b=std::atof(argv[2])*pi;
    int n = std::atoi(argv[3]);
    double inex = std::cos(a)-std::cos(b);
    double desvp = std::abs(inex-numin_Trape(a,b,n))/inex;
    std::cout << inex << "\t" << numin_Trape(a,b,n) <<"\t" << desvp;
    return 0;
}
double f(double x){
    return std::sin(x);
}
double numin_Trape(double a,double b,int n){
    double h=(b-a)/n;
    double s=0.0;
    for(int ii=1;ii<n;ii++){
        s +=f(a+ii*h);
    }
    return h*(0.5*(f(a)+f(b))+s);
}