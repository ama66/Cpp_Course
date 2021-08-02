#include<iostream>
#include<cstring>
using namespace std; 

class Student{
    int age; 
    
    public:
    char *name ;  //name is a pointer to the first index of the name array
    /*Student(int age , char *name){
        this->age=age;
        this->name=name;
    } */ // this is shallow copy
    
    Student(Student const &s)  //cannot pass s by value because that will involve calling the copy constructor which
    // we are trying to override
    {
        age=s.age;
        // name=s.name; // shallow copy
        this->name= new char[strlen(s.name)+1];
        strcpy(this->name, s.name);
    }
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
// Student s2(30,name);
Student s2(s1); // copy constructor makes shallow copy! so it is referencing s1 that has changed already ! 
s2.name[strlen(s2.name)-1]='x';
s2.display();
s1.display();
// s2.display();
// s1.display(); 

    return 0; 
}