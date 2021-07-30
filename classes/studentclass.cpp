#include<iostream>
using namespace std; 

class Student
{

int age; 
int Rollno; 

public: 
//default constuctor overwrite..nonparametrize constructor 
Student(){
cout << " \n Constructor being called now \n" ; 
}

Student(int a ){
    age=a; 
}

Student( int a , int Rollno ){
    age=a;
   this->Rollno=Rollno;
}
void Setage(int a){
    age=a; 
}
void SetRollno(int r){
    Rollno=r; 
}

int Getage(){
    return age; 
}
int GetRollno(){
    return Rollno; 
}
void display(){
    cout<<" age " << age <<endl; 
    cout<<"roll no "<< Rollno<<endl; 
}

};