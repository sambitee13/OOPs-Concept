#include<iostream>
using namespace std;

class Animal{
    public:
    int age;
    int weight;

    public:
    void bark(){
        cout<<"barking "<<endl;
    }
};
class Human{
    public:
    string color;

    public:
    void speak(){
        cout<<"speaking "<<endl;
    }

};
class hybrid: public Animal, public Human{

};
int main(){
    //obj1 inherits the properties of Human as well as Animal
    //hybrid have two parents human and animal
    hybrid obj1;
    obj1.speak();
    obj1.bark();
return 0;
}