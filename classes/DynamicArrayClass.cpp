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
    DynamicArray(DynamicArray const &d)
    {
        this->nextIndex=d.nextIndex; 
        this->capacity=d.capacity; 
        this->data= new int[d.capacity];
        for (int i=0; i<d.nextIndex;i++){
            this->data[i]=d.data[i];
        }

    }
    //parameterized constructor passing capacity c
     DynamicArray(int c){
         data=new int[c]; 
         nextIndex=0; 
         capacity=c;
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
    int getElem(int i){
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
   void operator=(DynamicArray const &d){
        this->nextIndex=d.nextIndex; 
        this->capacity=d.capacity; 
        this->data= new int[d.capacity];
        for (int i=0; i<d.nextIndex;i++){
            this->data[i]=d.data[i];
        }
   }

}; 
