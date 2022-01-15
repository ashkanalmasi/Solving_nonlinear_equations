#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

double function(double x){
    double value;
    value= 1/x-pow(2,x);
    return value;
}

void bisection(double a, double b, double tol){

if (a >b || function(a)*function(b)>=0){
std::cout << "wrong a and b assumbtion"<<endl;
}

double midpoint=a;
    int iter;

while ((b-a)>=tol){

    iter=++iter;

    // Find middle point
    midpoint=(a+b)/2;
     // Check if middle point is root
     if (function(midpoint)==0.0)
         break;
    // Decide the side to repeat the steps
     else if (function(midpoint)*function(a)<0)

       b=midpoint;
     else
       a=midpoint;

}
cout << "Value of root : " << midpoint<<endl;
cout << "Total number of iterations : " << iter<<endl;
}


int main() {
    double a=.01, b=1.0;
    double tol=5e-10;
  bisection(a,b,tol);
    return 0;
}
