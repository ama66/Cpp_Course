#include<iostream>
using namespace std;
class Fraction {
	private :

		int numerator;
		int denominator;

	public :

		Fraction() {

		}

		Fraction(int numerator, int denominator) {
			this -> numerator = numerator;
			this -> denominator = denominator;
		}

		int getNumerator() const {  // this function will not alter the state of the object it acts on 
			return numerator;
		}

		int getDenominator() const {
			return denominator;
		}

		void setNumerator(int n) {
			numerator = n;
		}

		void setDenominator(int d) {
			denominator = d;
		}

		void print() const {
			cout << this -> numerator << " / " << denominator << endl;
		}

		void simplify() {
			int gcd = 1;  // greatest common divisor for numerator and denominator 
			int j = min(this -> numerator, this -> denominator); // for 4,6 iterate all the way to 4 
			for(int i = 1; i <= j; i++) {
				if(this -> numerator % i == 0 && this -> denominator % i == 0) {
					gcd = i;
				}
			}
			this -> numerator = this -> numerator / gcd;
			this -> denominator = this -> denominator / gcd;
		}
//constant reference means f2 references main.f2 but is not able to modify it
		void add(Fraction const &f2) {
			int lcm = denominator * f2.denominator;
			int x = lcm / denominator;
			int y = lcm / f2.denominator;

			int num = x * numerator + (y * f2.numerator);

			numerator = num;
			denominator = lcm;
			simplify();
		}

// operator overloading of the + operator 
	Fraction operator+(Fraction const &f2) const {
			int lcm = denominator * f2.denominator;
			int x = lcm / denominator;
			int y = lcm / f2.denominator;

			int num = x * numerator + (y * f2.numerator);

			//numerator = num;
			//denominator = lcm;
            Fraction fnew(num, lcm); 
            fnew.simplify();
            return fnew; 
		}


		void multiply(Fraction const &f2) {
			numerator = numerator * f2.numerator;
			denominator = denominator * f2.denominator;

			simplify();
		}

      	Fraction operator*(Fraction const &f2) const {
         Fraction fnew(numerator * f2.numerator, denominator * f2.denominator); 
            fnew.simplify();
            return fnew; 
		}

        bool operator==(Fraction const &f2) const{
            return (numerator==f2.numerator && denominator==f2.denominator) ; 
        }
};
