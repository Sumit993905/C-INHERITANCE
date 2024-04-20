#include<iostream>
using namespace std;

class Animal1{
    public:
    void bark(){
        cout<<"Dog is Barking"<<endl;
    }
};

class Animal2{
    public:
    void walking(){
        cout<<"Dog is Walking"<<endl;
    }
};

class Dog: public Animal1, public Animal2{
  
  // Inherit the property of class Animal1 and Animal2;

};

int main(){

    Dog d;
    d.bark();
    d.walking();

    return 0;
}