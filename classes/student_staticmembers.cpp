#include<iostream>
using namespace std; 

class Student{
static int TotalStudents; 

public: 
int age; 
int RollNo;
// static int TotalStudents; 
static int GetTotalStudents(){
    return Student::TotalStudents; 
}
Student(){
    TotalStudents++; 
}
};
int Student::TotalStudents=0;  //initialize static member outside the class is a must

int main(){

Student s1; 
s1.age=10;
s1.RollNo=20220; 
/*cout<<s1.TotalStudents<<endl;
// s1.TotalStudents=30; */ 
Student s2;
//cout<<s1.TotalStudents<<endl;
//cout<<s2.TotalStudents<<endl;
Student s3;
// cout<<s3.TotalStudents<<endl;  
cout<<s1.GetTotalStudents()<<" This is the proper way " <<Student::GetTotalStudents();



    return 0 ; 
}