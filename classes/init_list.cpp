#include<iostream>
using namespace std; 

class Student{
    
    public: 
    int age;
    int const RollNo; // now you can only initialize this through initialization list
    // in a constructor otherwise you cannot pass different rollNo each time you create a new object
    int &x ;// reference to age, which you need to add to the initialization list
    Student( int r , int age ): RollNo(r) , age(age) , x(this->age)  // note there is no confusion in age(age)
    //because the outer age is expected by the compiler to be this->age always and the argument age can only by
    // the passed parameter 
    {
 
    }
   void display(){
        cout<< "Student Age "<<age<< " Student RollNo "<<RollNo; 
    }
};
int main(){
Student s1(11022, 32);
s1.display(); 
cout<<" age "  <<s1.x ;
int z=3;
int &y=z;
cout<<" Here dude "<< z <<" = " << y ;  
char *name =new char[5];
name="abdu";
cout<<endl<<name; 
char *title="broch";
cout<<endl<<title; 
}