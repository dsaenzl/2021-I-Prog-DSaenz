#include <iostream>
#include <vector>
#include <set>

void use(std::vector<int> &data);
int main(void){
    std::vector<int> element{10,30,-1,40,24,88,10,30};
    use(element);
    return 0;
}
void use(std::vector<int> &data){
    std::set<int> el;
    for(auto x : data){
        el.insert(x);
    }
    for(auto x : el){
        std::cout << x << " ";
    }
}
