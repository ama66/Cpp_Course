#include "complexnumclass.cpp"

int main(){

ComplexNum c1(10,12);
c1.print();
ComplexNum c2(20,24);
c1.add(c2);
c1.print();
ComplexNum c3(2,1);
c1.multiply(c3);
c1.print();

}