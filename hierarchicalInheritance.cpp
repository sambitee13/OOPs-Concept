#include<iostream>
using namespace std;
// parent can have multiple child A have two children B and C
class A{
    public:
    void func1(){
        cout<<"Inside Function 1\n";
    }
};
class B: public A{
    public:
    void func2(){
        cout<<"Inside function 2\n";
    }
};
class C: public A{
    public:
    void func3(){
        cout<<"inside function 3\n";
    }
};
int main(){

    A obj1;
    obj1.func1();

    B obj2;
    obj2.func1();
    obj2.func2();

    C obj3;
    obj3.func1();
    obj3.func3();

return 0;
}