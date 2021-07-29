#include<iostream>
using namespace std; 
int length(char input[]){
    int len=0; 
    for (int i=0; input[i]!='\0';i++)
    {
    len++; 
    }
    return len;
}

int main()
{

char name[100]; 
cin>>name; 
cout<<"you entered \n"<<name ; 
cout<<"\n the length of the character is  \n" <<length(name); 


cout<<" Input your name buddy! \n"; 
cin.ignore();
cin.getline(name,20);
cout<<"here is your name dude\n"<<name;
cout<<"length= "<<length(name);
return 0; 

}
