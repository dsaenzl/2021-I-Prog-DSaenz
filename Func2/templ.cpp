#include <iostream>

template<class T> T getmx(T a,T b){
    T mx = a;
    if(b>a){
        mx=b;
    }
    return mx;
}
int main(void){
    std::cout << getmx(3,5) << std::endl;
    std::cout << getmx(-3.9,4.0) << std::endl;
    std::cout << getmx('a','b') << std::endl;
    return 0;
}