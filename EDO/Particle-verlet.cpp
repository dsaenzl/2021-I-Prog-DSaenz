#include <iostream>
#include <vector>

const double G=9.81;
const double dt =0.01;
const double K=101.9;
const double B=2.98;

struct particle{
    float mass=0.0;
    double yold=0.0;
    double y=0.0;
    double vy=0.0;
    double fy=0.0;
    double rad=0.0;
    double delta=0.0;
};
void fuer(std::vector<particle> &a);
void start(std::vector<particle> &a);
void posv(std::vector<particle> &a);
int main(void){
    std::vector<particle> point;
    point.resize(1);
    //Inicializar
    point[0].y=2.36;
    point[0].vy=0.0;
    point[0].mass=1.98;
    point[0].rad=0.17;
    fuer(point);
    start(point);
    for(int ii=0;ii<500;ii++){
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
        x.delta=x.rad-x.y;
    }
    for(int ii=0;ii<a.size();ii++){
        if(a[ii].delta<0){
            for(auto &x : a){
                x.fy-=x.mass*G;
            }
        }
        else{
            for(auto &x : a){
                x.fy+=a[ii].delta*K;-B*x.mass*x.vy;
            }
        }
    }
}
void start(std::vector<particle> &a){
    for(auto &x : a){
        x.yold=x.y-dt*x.vy+dt*dt*x.fy/(2*x.mass);
    }
}
void posv(std::vector<particle> &a){
    for(auto &x :a){
        double mnt=x.y;
        x.y= -x.yold +2*x.y +dt*dt*x.fy/(x.mass);
        x.vy= (x.y-x.yold)/(2*dt);
        x.yold=mnt;
    }
}