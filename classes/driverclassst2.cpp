#include "studentclass.cpp"

int main(){
Student s1,s2,s3; 

Student *s4 = new Student; 

s4->Setage(30);
s4->SetRollno(12323);
s4->display();
s1.SetRollno(2020202);
s1.display();
s2.display(); // this should show some garbage
cout<< "s4 age is "<< s4->Getage(); 

Student s5; 
Student s6(45);
s5.display();
s6.display();
Student s7(20,122123);
s7.display();

    return 0; 
}
