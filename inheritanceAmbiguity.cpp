// INHERITANCE AMBIGUITY : 
// IT IS A SITUATION IN WHICH TWO CLASS HAVING A SAME FUNCTION AND 
// THIRD CLASS WILL INHERIT THE PROPERTY OF THAT BOTH THE CLASSES , 
// THEN THE INHERITANCE AMBIGUITY SITUATION WILL HAPPEN WHILE CREATING
//  AND CALLING WITH AN OBJECT.

// SOLVE THIS PROBLEM BY USING (scope resolution operator '::').


#include<iostream>
using namespace std;

class A{
  public:
    void x(){
      cout<<"Inside A"<<endl;
    }
};

class B{
  public:
    void x(){
      cout<<"Inside B"<<endl;
    }
};

class C: public A, public B{

};

int main(){
 
 C obj;
 obj.A::x();
 obj.B::x();

 return 0;

}