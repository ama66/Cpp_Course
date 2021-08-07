#include<iostream>
#include "studentclass.cpp"
using namespace std; 


int main(){
Student s1; 
s1.age=30; 
// s1.Rollno=203232; 
Student s2;
Student s3,s4,s5; 
cout<< " These are new instances of the student class\n"; 

Student *s6 = new Student;

(*s6).age=50; 

cout << " Student 6 age is " <<  *s6).age ; 

s6->age=50; 

cout << " Student 6 age is " <<  *s6).age ; 


return 0 ; 
}
