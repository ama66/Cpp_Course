#include<iostream>
using namespace std; 
class DynamicArray{
    int *data  ; //pointer to the first index of the array 
    int nextIndex;
    int capacity; 
    // those are all private variables that cannot be accessed directly
    // Now build our own constructor 
    public: 
    DynamicArray(){
        data = new int[5];  
        nextIndex=0; 
        capacity=5;
    } 

    void add(int element){
        if (nextIndex==capacity){
            int *newdata= new int[capacity*2]; 
            for (int i=0; i<capacity;i++){
                newdata[i]=data[i];
            }
            delete []data; 
            data=newdata; 
            capacity=capacity*2; 

        }
        data[nextIndex]=element;
        nextIndex++ ; 
    }

    void add(int element, int idx){
        if (idx < nextIndex){
            data[idx]=element;
        }
        else if (idx==nextIndex){
            add(element);
        }
        else{
            return; 
        }
    }
    int getCapacity(){return capacity; }
    int get(int i){
        if (i>=0 && i <nextIndex){
            return data[i];
        }else{
        return -1 ;
        }
   }
   void print(){
       for (int i=0;i<nextIndex;i++){
           cout <<data[i]<<" ";
       }
       cout<<endl; 
   }
}; 
