#include <iostream>
#include <cmath>

double f(double x);
double diffor(double x,double h);
double difcen(double x,double h);
double richfor(double x,double h);
double richcen(double x,double h);
const double pi =M_PI;

int main(int argc,char *argv[]){
    std::cout.precision(15);
    std::cout.scientific;
    double x=pi/3;
    double h=0.1;
    for(int c=1;c<=10;c++){
        std::cout << std::cos(x) <<
        "\t" << diffor(x,h) << 
        "\t" << difcen(x,h) <<
        "\t" << richfor(x,h) <<
        "\t" << richcen(x,h) << "\n";
        h /=10;
    }
    return 0;
}
double f(double x){
    return std::sin(x);
}
double diffor(double x,double h){
    return (f(x+h)-f(x))/h;
}
double difcen(double x,double h){
    return (f(x+h/2)-f(x-h/2))/h;
}
double richfor(double x,double h){
    return (4.0*diffor(x,h/2)-diffor(x,h))/3.0;
}
double richcen(double x,double h){
    return (4.0*difcen(x,h/2)-difcen(x,h))/3.0;
}