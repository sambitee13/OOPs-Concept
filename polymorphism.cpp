#include<iostream>
using namespace std;
//for function overloading in polymorphism we have to give different input parameters
// of the function if we only change the return type it will not work
class A{
    public:

    //complie time polymorphism
    void sayHello(){
        cout<<"Hello Sambitee"<<endl;
    }
    void sayHello(string name){
        cout<<"hello "<<name<<endl;
    }
};
int main(){
    A obj;
    obj.sayHello();
    obj.sayHello("tanvi");

return 0;
}