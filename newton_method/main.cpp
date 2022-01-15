#include <iostream>
#include <math.h>

using namespace std;

//function
double Func(double x){
    return 1/x-pow(2,x);;
};

// derivation of function f(x)
double DeriveFunc(double x){
    return -1/(x*x) -pow(2,x)*log(2);
};

// Function to find the root
void NR_iter(double x, double tol){
    int iter;
    double h= Func(x)/ DeriveFunc(x); // h=f(x) / f'(x)

    while (abs(h)>=tol){
        iter=++iter;
        h= Func(x)/ DeriveFunc(x);
        // x(i+1) = x(i) - f(x) / f'(x)
        x=x-h;
    }
    cout << "Value of root : " << x<<endl;
    cout << "Total number of iterations : " << iter<<endl;
};

int main() {
    double x0=0.1;
    double tol=5e-10;
    NR_iter(x0, tol);
    return 0;
}
