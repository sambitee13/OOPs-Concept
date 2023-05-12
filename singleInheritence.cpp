#include<iostream>
using namespace std;
// single parent single child
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
int main(){
    Dog d1;
    d1.speak();
    cout<<endl;
return 0;
}