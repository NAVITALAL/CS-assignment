    #include <iostream>
    using namespace std;
     
    int main() {
    	// your code goes here
     
      	// Creating four variables ;
         float r,diameter,circumference,area;
     
         cout << "Enter the radius" ;
         cin >> r ;
     
         diameter=2*r;
         circumference=2*3.14*r;
         area=3.14*r*r;
     
         cout << "The diameter of the circle is " << diameter << endl ;
         cout << "The circumference of the circle is " << circumference << endl;
         cout << "The area of the circle is " << area << endl;
     
     
    	return 0;
    }
