#include <iostream>
using namespace std;
#include "Fraction.cpp"

int main() {
    Fraction f1(10,5);
    Fraction f2(1,5);

     Fraction f3;
   // Fraction const f3 ; with this line, it errors out if you call setNumerator 

    cout<<f3.getNumerator()<<" "<<f3.getDenominator()<<"\n A77a \n";

    f3.setNumerator(10); 
    cout<<f3.getNumerator()<<endl; 

    Fraction const f4; 
    cout<<" f4 " << f4.getNumerator(); 
     cout <<"\n Now trying operator overloading\n" ; 
     Fraction f5=f1+f2; 
      f1.print();
      f2.print();
      f5.print();
    Fraction f7=f1*f2; 
    f7.print();
    if (f7==f1*f2){
        cout<<"fractions are equal";
    }
    else{
        cout<<" Fractions are not equal "; 
    }
	return 0; 
}

