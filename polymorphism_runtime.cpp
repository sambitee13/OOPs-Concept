#include<iostream>
using namespace std;
// runtime polymorphism
// rules
// 1. inheritance imp 
// 2. method name in parent and child class should be same 
// 3. method arguments types also same

class Animal{
    public:
    void speak(){
        cout<<"speaking\n";
    }
};

class Dog : public Animal{
    public:
    void speak(){
        cout<<"I barks\n";
    }
};


int main(){
    Dog d1;
    d1.speak();
return 0;
}