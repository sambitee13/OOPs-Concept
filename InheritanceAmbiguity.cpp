#include<iostream>
using namespace std;
class A{
    public:
    void func(){
        cout<<"I m A\n";
    }
};
class B{
    public:
    void func(){
        cout<<"I am B\n";
    }
};
class C: public A,public B{

};
int main(){
// both classes A and B have method func()
// so to use that method from C we use scope resolution operator ::
    C obj;
    obj.A::func();
    obj.B::func();

return 0;
}