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

cout<<d.getElem(6)<<endl; 
cout<<"capacity "<<d.getCapacity()<<endl; 
d.print();
DynamicArray f(d); //copy constructor; shallow copy! ..to make it deep copy create your own constructor 
d.add(100,0);
DynamicArray d3; 
d3=d; //copy assignment operator (Shallow copy!) to make it a deep copy need to overwrite the = operator!
d.print(); 
f.print();
d3.print();
DynamicArray d4(103);
cout << " Now printing d3"; 
d3.print();
cout <<"Capacity of d4 "<< d4.getCapacity();
cout <<"element with index 2 " << d3.getElem(2);
// 

}