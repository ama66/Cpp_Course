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
// Now use copy constructor to create copies of existing objects
cout<<" Here is s7 :  \n ";
s7.display();
Student s8(s7);
cout<<" Here is s8 :  \n ";
s8.display(); 

Student *s9= new Student(s8) ; 
cout<<" Here is s9 :  \n ";
s9->display();
cout<<" Here is s10 :  \n ";

Student *s10 = new Student(*s9);

Student s11(31,3022);
cout<<" Here is s11 :  \n ";
s11.display(); 
cout<<" Now use copy assignment operator for objects \n  and now this is s10";
*s10=s11; 
s10->display(); 
// Dynamically allocated objects are not automatically deleted so one needs to delete them explicitly which triggers
// a call to our custom destructor 
delete s4, s9, s10; 
    return 0; 
}
