#include<iostream>
using namespace std;

class Animal{
    public:

    void Bark(){
        cout<<"Dog is Barking"<<endl;
    }
};

class Dog:public Animal{
      
};

int main()
{
    Dog d;
    d.Bark();
    return 0;

}
