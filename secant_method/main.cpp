#include <iostream>
#include <math.h>

using namespace std;

//function
double function(double x){
    return 1/x-pow(2,x);
   // return pow(x, 3) + x - 1;
};

void secant(double a, double b, double tol){
    int iter;
    double xm1, xm2;
    if (function(a)*function(b)>=0)
        cout << "wrong a and b assumbtion"<<endl;
    else
    do {

    iter=++iter;
    // calculating the intermediate value
    xm1=(a*function(b)-b*function(a))/(function(b)-function(a));
    a=b;
    b=xm1;

    // check the root
        if (function(a)*function(xm1)==0)
            break;

    xm2=(a*function(b)-b*function(a))/(function(b)-function(a));

        } while (fabs(xm2-xm1)>=tol);
    cout << "Value of root : " << xm1<<endl;
    cout << "Total number of iterations : " << iter<<endl;
    }

int main() {
    // a and b are initial guess
    double a=0.01, b=1.0;
    double tol=5e-10;

    secant(a,b, tol);
    return 0;
    }