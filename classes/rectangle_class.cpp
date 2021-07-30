// classes example
#include <iostream>
using namespace std;

class Rectangle {
    int width, height;  //private members set through public function call 
  public:  // public members 
    void set_values (int,int);  // prototype 
    int area() {return width*height;} //
};
// need the resolution operator :: 
void Rectangle::set_values (int x, int y) {
  width = x;
  height = y;
}

int main () {
  Rectangle rect;
  rect.set_values (3,4);
  cout << "area: " << rect.area();
  return 0;
}