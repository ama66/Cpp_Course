#include<iostream>
#include<cstring>
using namespace std; 

void printAllprefixes(char input[]){
    for (int e=0; e<strlen(input);e++){
        for (int s=0; s<=e;s++){
            cout<<input[s];
        }
        cout<<endl; 
    }
}
int main(){

char inputstr[100]; 
cin.getline(inputstr,20);
cout<<"input string: \n"<<inputstr<<endl;
printAllprefixes(inputstr);
string  newword;
// getline(cin, newword);
// cout<<newword <<endl;
char word[100] , word2[100];
cin.getline(word,20);
cout<<" char array "<<word<<endl; 
cin.getline(word2,20);

if (strcmp(word,word2)==0)
{
cout<<"strings are equal";
}
else
{
cout<< " strings not equal";
}


return 0 ; 
}