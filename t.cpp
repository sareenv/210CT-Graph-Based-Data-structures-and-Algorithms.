#include<iostream>
#include<cxxtest/TestSuite.h>

using namespace std;


class add{
    
    private:
    int a;
    int b;
    
    public:
    
    add(int a, int b){
        this->a = a;
        this->b = b;
    }
    
    add(){
        int a = 1;  
        int b = 12;
        this->a = a;
        this->b = b;
    }
    
    int sum(){
        int s = this->a + this->b;
        return s;
    }
    
};


int main(){
    add a;
    int result = a.sum();
    cout<<"The result is "<<result<<endl;
    return 0;
}