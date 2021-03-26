#include <iostream>
#include <cmath>
double numin_Simp(double a,double b,int n);
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
    double desvp = std::abs(inex-numin_Simp(a,b,n))/inex;
    std::cout << inex << "\t" << numin_Simp(a,b,n) <<"\t" << desvp;
    return 0;
}
double f(double x){
    return std::sin(x);
}
double numin_Simp(double a,double b,int n){
    double h=(b-a)/n;
    double s1=0.0;
    double s2=0.0;
    for(int ii=1;ii<=(n/2)-1;ii++){
        s1 +=f(a+2*ii*h);
    }
    for(int ii =1;ii<=n/2;ii++){
        s2 +=f(a+((2*ii-1)*h));
    }
    return (h/3)*(f(a)+2*s1+4*s2+f(b));
}