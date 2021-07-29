#include<iostream>
using namespace std; 

int length(char input[]){
   int len=0;
    for (int i=0; input[i]!='\0';i++) 
    {
    len++ ; 
    }
   return len;
}

void reverse(char input[]){
int s=0 , e=length(input)-1 ; 
while (s<=e){
    swap(input[s],input[e]);
    s++;
    e--;
}
}

int main(){
    char name[100];
    cout << "Enter name \n";
    cin.getline(name,20) ;
    cout <<" \n You entered \n"<< name; 
    cout << " Length of name is "<< length(name);
    reverse(name); 
    cout << " Reversed Name is \n"<<name;
    cout << " Length of name is "<< length(name);

    return 0 ;

}