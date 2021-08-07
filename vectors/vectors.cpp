#include<iostream>
#include<vector>
using namespace std; 

int main(){
    vector<int> v; //static allocation
    vector<int> *vp = new vector<int>(); //dynamic allocation of vector
    // vectors are implemented using templates so one needs to specify the type
    //only use push_back function

    v.push_back(20);
    cout<<v[0]<<endl; 

}