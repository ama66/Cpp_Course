#include<iostream>
#include<cstring>
using namespace std; 

class Student{
    int age; 
    char *name ;  //name is a pointer to the first index of the name array
    public:
    /*Student(int age , char *name){
        this->age=age;
        this->name=name;
    } */ // this is shallow copy

    Student(int age, char *name){ //Deep Copy 
    this->age=age;
    this->name = new char[strlen(name)+1]; // Create new char array to copy input parameter to.
    strcpy(this->name, name) ;  // this is Deep Copy
    }

    void display()const{
        cout << name << " " << age <<endl;
        
    }
};



int main(){
 char name[] ="abdul";
 Student s1(10, name);
 s1.display(); 
 name[4]='x'; 
Student s2(30,name);

s2.display();
s1.display(); 
    return 0; 
}