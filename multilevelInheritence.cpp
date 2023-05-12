#include<iostream>
using namespace std;

class Animal{
    public:
    int age;
    int weight;

    public:
    void speak(){
        cout<<"speaking "<<endl;
    }
};
class Dog: public Animal{

};
class GermanShepher: public Dog{

};
int main(){
    //g1 inherits the properties of Dog as well as Animal
    GermanShepher g1;
    g1.speak();
return 0;
}