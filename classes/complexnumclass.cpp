#include<iostream>
using namespace std;

class ComplexNum {
private: 
 int real_part;
 int imag_part;
public: 
ComplexNum(int real_part, int imag_part ){
this->real_part = real_part; 
this->imag_part=imag_part; 
}
int Get_real()const {
    return real_part; 
}
void Set_real(int r ){
real_part=r ; 
}

int Get_imag()const {
    return imag_part; 
}
void Set_imag(int r ){
imag_part=r ; 
}

void print() const{
    cout << real_part << " + " << imag_part << "J"<<endl; 
}

void add( ComplexNum const &c2){
    real_part+=c2.real_part; 
    imag_part+=c2.imag_part; 
}
 
void multiply (ComplexNum const &c2 ){
 real_part = real_part * c2.real_part - imag_part*c2.imag_part;
 imag_part = imag_part*c2.real_part + real_part*c2.imag_part;
}
};