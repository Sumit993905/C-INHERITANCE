#include<iostream>
using namespace std;

class Human{
    public:

    void speak(){
        cout<<" HUMAN IS SPEAKING"<<endl;

    }
};

class Male:public Human{
    public:
    void walking(){
        cout<<"Son is walking"<<endl;
    }
};

class Son: public Male{
 
};

int main()
{
    Son s;
        s.walking();
    Male m;
        m.speak();

    return 0;
}