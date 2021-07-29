#include<iostream>
using namespace std; 

int main(){
int n ;
cin>> n; 

cout<<"here is n "<< n << endl ; 

cout<<"please input array "; 
int a[n]; 

for (int i=0;i<n ; i++){
    cin>>a[i];
}

cout<<"Here is your input array"; 

for (int i=0;i<n;i++)
{
    cout<<a[i]<<" ";
}
int start=0; 
int end =n-1; 

while(start < end)
{
    swap(a[start],a[end]);
    start++;
    end--;
}


cout<<"\n Here is your reversed input array\n"; 

for (int i=0;i<n;i++)
{
    cout<<a[i]<<" ";
}

  return 0; 
}