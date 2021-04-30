#include <iostream>
#include <vector>

const double G=9.81;
const double dt =0.01;
struct particle{
    float mass=0.0;
    double y=0.0;
    double vy=0.0;
    double fy=0.0;
};
void fuer(std::vector<particle> &a);
void posv(std::vector<particle> &a);
int main(void){
    std::vector<particle> point;
    point.reserve(10);
    point.resize(1);
    point[0].y=20;
    point[0].vy=0.0;
    point[0].mass=10.0;
    for(int ii=0;ii<100;ii++){
        fuer(point);
        posv(point);
        std::cout << ii*dt << "\t" 
        << point[0].y << "\t" << point[0].vy << std::endl;
    }
    return 0;
}
void fuer(std::vector<particle> &a){
    for(auto &x : a){
        x.fy=0.0;
    }
    for(auto &x : a){
        x.fy-=x.mass*G;
    }
}
void posv(std::vector<particle> &a){
    for(auto &x :a){
        x.y= x.y +x.vy*dt;
        x.vy= x.vy + dt*(x.fy/x.mass);
    }
}