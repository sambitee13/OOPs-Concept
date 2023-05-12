#include<iostream>
using namespace std;
class Student{
    private:
    string name;
    int age;
    int height;

    public:
    void setName(string name){
        this->name=name;
    }
    string getName(){
        return name;
    }
    void setAge(int age){
        this->age=age;
    }
    int getAge(){
        return age;
    }
};
int main(){
    Student s1;
    s1.setName("Dhvanish");
    s1.setAge(21);
    cout<<"Student name "<<s1.getName()<<endl;
    cout<<"Student's age: "<<s1.getAge()<<endl;
    cout<<"sab sahi chal ra hai" <<endl;
return 0;
}