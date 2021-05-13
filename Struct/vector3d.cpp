#include <iostream>

struct vector3d{
    double x=0.0,y=0.0,z=0.0;
    void print(void);
    vector3d operator+(const vector3d &rhs);
    vector3d operator-(const vector3d &rhs);
    double operator*(const vector3d &rhs);
    vector3d operator^(const vector3d &rhs);
};
int main(void){
    vector3d a,b,c;
    a.x=3.4;
    b.y=5.8;
    a.print();
    b.print();
    c=a+b;
    c.print();
    c=a-b;
    c.print();
    std::cout << (a+b)*b << std::endl;
    c=a^b;
    c.print();
    c=b^a;
    c.print();
    return 0;
}
void vector3d::print(void){
    std::cout << "( " << x
            << ", " << y
            << ", " << z << " )\n";
}
vector3d vector3d::operator+(const vector3d &rhs){
    vector3d sum;
    sum.x=x+rhs.x;
    sum.y=y+rhs.y;
    sum.z=z+rhs.z;
    return sum;
}
vector3d vector3d::operator-(const vector3d &rhs){
    vector3d res;
    res.x=x-rhs.x;
    res.y=y-rhs.y;
    res.z=z-rhs.z;
    return res;
}
double vector3d::operator*(const vector3d &rhs){
    double pro;
    pro=x*rhs.x+y*rhs.y+z*rhs.z;
    return pro;
}
vector3d vector3d::operator^(const vector3d &rhs){
    vector3d vec;
    vec.x=y*rhs.z-z*rhs.y;
    vec.y=z*rhs.x-x*rhs.z;
    vec.z=x*rhs.y-y*rhs.x;
    return vec;
}