#include<iostream>
#include<algorithm>
#include <vector>
using namespace std; 

int main()
{
string s="abc";
cout<<s<<endl; 

string s2; 
s2="def";
cout << s2<<endl; 
// *sp is dereferenced point to a string
string *sp = new string ; 
*sp="Ammar";
cout<< sp<< "  this is memory address of the pointer sp \n"; 
cout<< *sp << "  this is what is in there! \n"; 
// to define a list of strings we do not wanna use arrays..it is better to use the vector
// class to we can have access to vector and string class functionalities 
vector<string> v; 
v.push_back(s) ;
v.push_back("hello"); 
for (int i=i ; i < v.size(); i++){
    cout << v[i] <<endl ; 
    sort(v[i].begin(),v[i].end());
    cout << v[i]<< endl; 
}

string s3; 
// getline(cin, s3); // this allows spaces/tabs...etc cin.getline requires size of string be known apriori
//cout<< s3 << endl; 
// cout<< s3[1]<<endl; 
s3 = "abcabc";
cout<<s3<<endl;

s3[0] = 'd';
cout<<s3<<endl;

string s4 = "";
   s4 += s3 + s2 + "hello coding";
   cout<<s2<<endl;
   cout<<s3<<endl;
   cout<<s4<<endl;
   cout<<s4.size()<<endl;
   cout<<s4.length()<<endl;
  cout<<s4.substr(3)<<endl;
  cout<< s4<<endl; 
   string s5 = s4.substr(3,5);
   cout<<s5<<endl;

   cout<<s4.find("abc")<<endl;


}
