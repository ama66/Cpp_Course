#include<iostream>
#include<vector>
#include <algorithm>
using namespace std; 

int main(){
    vector<int> v; //static allocation
    vector<int> *vp = new vector<int>(); //dynamic allocation of vector
    // vectors are implemented using templates so one needs to specify the type
    //only use push_back function

    v.push_back(20);
    cout<<v[0]<<endl; 
    v.push_back(90);
    v.push_back(100);
    v[4]=98; //never use the assignment operator to add new elements to a vector
    cout<<v[0]<<" " <<v[1]<<"  " <<v[2]<< "  " <<v[3]<<" " <<v[4]<<"  "<<v[7] << endl;
   //v[] is not safe use at function
//   int x=v.at(10);
//    cout<<v.at(2)<< " non existing  " <<x<<endl; 
cout<<" Now printing Vector<int> "<<endl; 
for (int i=0; i<v.size();i++){
    cout<<v[i]<<endl; 
}
v.pop_back(); //delete last element on the stack! 
cout<<" Now printing Vector<int> after deleting last element in the stack "<<endl; 
cout << "V before sorting" ; 
for (int i=0; i<v.size();i++){
    cout<<v[i]<<endl; 
}


    for (int i=0; i<v.size();i++){
    cout<<v[i]<<endl; 
}
vector<int> v2(10, -2); //initialize size 10 vector filled with -2 
cout<< " Now printing v2"<<endl; 
for (int i=0; i<v2.size();i++)
{
cout<< v2[i]<<endl; 
}

cout<< " Now testing Dynamic Arrays";
for (int i=0; i<100; i++){
    cout<<vp->size() <<" " <<vp->capacity() <<endl ; 
        vp->push_back(i+1);
}

cout << "V before sorting\n" ; 
int t=v[0];
v[0]=v[1];
v[1]=t;

for (int i=0; i<v.size();i++){
    cout<<v[i]<<endl; 
}

cout << " \n v after sorting \n"; 

sort(v.begin(),v.end());
for (int i=0; i<v.size();i++){
    cout<<v[i]<<endl; 
}


return 0 ; 
}