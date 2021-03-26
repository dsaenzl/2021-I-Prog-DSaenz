#include <iostream>
#include <cmath>

using fun =double (double ,double ,int);
double f(double x);
double Trape(double a,double b,int n);
double simp(double a,double b,int n);
double Richardson(double a,double b, int n,fun alg,int alp);
const double pi = M_PI;
int main(int argc,char *argv[]){
    double a,b;
    a=0;
    b=pi;
    double exac=std::cos(a)-std::cos(b);
    double errtr,errsim,Trim,SimpR;
    for(int n=1;n<=1e+7;n*=10){
        errtr=std::abs(Trape(a,b,n)-exac)/exac;
        errsim=std::abs(simp(a,b,n)-exac)/exac;
        Trim=std::abs(Richardson(a,b,n,Trape,2)-exac)/exac;
        SimpR=std::abs(Richardson(a,b,n,simp,4)-exac)/exac;
        std::cout << n << "\t" << errtr << "\t" <<
        errsim << "\t" << Trim << "\t" << SimpR << "\n";
    }
    return 0;
}
double f(double x){
    return std::sin(x);
}
double Trape(double a,double b,int n){
    double h=(b-a)/n;
    double s=0.0;
    for(int ii=1;ii<n;ii++){
        s +=f(a+ii*h);
    }
    s +=0.5*(f(a)+f(b));
    s *=h;
    return s;
}
double simp(double a,double b,int n){
    double h=(b-a)/n;
    double s1=0.0;
    double s2=0.0;
    for(int ii=1;ii<=n/2-1;++ii){
        s1 +=f(a+(2*ii*h));
    }
    for(int ii=1;ii<=n/2;++ii){
        s2 +=f(a+(h*(2*ii-1)));
    }
    return (h/3)*(f(a)+f(b)+2*s1+4*s2);
}
double Richardson(double a,double b, int n,fun alg,int alp){
    double u=alg(a,b,n);
    double v=alg(a,b,n*2);
    double integ= v+(v-u)/(std::pow(2,alp)-1);
    return integ;
}