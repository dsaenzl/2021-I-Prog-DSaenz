#include <iostream>

int main(void){
    int da[10]={1,2,3,4};
    int * poi=nullptr;
    poi=da;
    std::cout << poi << std::endl;
    std::cout << da << std::endl;
    std::cout << poi[0] << std::endl;
    std::cout << da[0] << std::endl;
    poi = &da[1];
    std::cout << poi[1] << std::endl;
    std::cout << poi << std::endl;
    std::cout << da[1] << std::endl;
    return 0;
}