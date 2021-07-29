#include<iostream>
#include<cstring>
using namespace std; 

bool mystrcomp(char st1[], char st2[]){
    if (strlen(st1)!=strlen(st2)) {
        cout<< " \nMy implementation: Not Equal";
        return false; 
    }
    for (int i=0; st1[i]!='\0';i++)
    {
        if (st1[i]!=st2[i])
        {
            cout << "\n My Implementation: Not Equal "<< endl ;
        return false ;
        }
    }
    cout <<" My implementation: Strings are equal "; 
    return true ;
}

void mystrcpy(char str1[], char str2[]){
    for (int i=0; i<=strlen(str2);i++)
    {
        str1[i]=str2[i];
    }
}
void mystrncpy(char str1[], char str2[],int n ){
    for (int i=0; i<n;i++)
    {
        str1[i]=str2[i];
    }
}


void mystrcat(char str1[], char str2[]){
    int m=strlen(str2); 
    int n=strlen(str1);
    for (int i=0;i<=m;i++){
        str1[i+n]=str2[i]; 
    }
}
int main(){
    char name1[100] , name2[100];
    cin.getline(name1,20);
    cin.getline(name2,20);
  /*  if (strcmp(name1,name2)==0){
        cout<<" strings are equal ";
    }
    else{
        cout<<"Strings are not equal"; 
    }
   mystrcomp(name1,name2); */ 
    cout<<name1 << name2 <<endl ; 
   // strcpy(name1,name2);
//    mystrcpy(name1,name2);
    // cout<<name1 <<endl ;// << name2 ; 
   // strcat(name1,name2);
 //   mystrcat(name1,name2); 
    // strncpy(name1,name2, 4);
    // cout<<name1<<endl<<name2<<endl;
mystrncpy(name1,name2,4);
cout<<name1<<endl; 



    
    return 0 ;

}