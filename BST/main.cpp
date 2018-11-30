#include "combine.hpp"

int main(){
    BinarySearchTree b1;
    auto result = b1.insert(nullptr, "hi");
    b1.insert(result, "Hi");
    b1.insert(result, "Hello");
    b1.insert(result, "Hello");
    return 0;
}