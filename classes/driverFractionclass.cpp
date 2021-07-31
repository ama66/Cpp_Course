#include <iostream>
using namespace std;
#include "Fraction.cpp"

int main() {
    Fraction f1(10,5);
    Fraction f2(15,4);

     Fraction f3;
   // Fraction const f3 ; with this line, it errors out if you call setNumerator 

    cout<<f3.getNumerator()<<" "<<f3.getDenominator()<<"\n A77a \n";

    f3.setNumerator(10); 
    cout<<f3.getNumerator()<<endl; 
	return 0; 
}

