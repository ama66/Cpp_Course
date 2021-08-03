#include<iostream>
using namespace std; 
#include "DynamicArrayClass.cpp"

int  main(){
DynamicArray d ; 
d.add(10);
d.add(20);
d.add(30);
d.add(40);
d.add(50);
d.add(60);
d.add(70);

d.add(343,2); 

cout<<d.get(6)<<endl; 
cout<<"capacity "<<d.getCapacity()<<endl; 
d.print();

// 

}