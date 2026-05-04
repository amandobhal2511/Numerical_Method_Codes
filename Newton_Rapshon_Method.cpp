#include<bits/stdc++.h>
using namespace std;

double f( double x ){
    return (x*x*x) - (3*x) + 1;
}

double df( double x ){
    return (3*x*x) - 3;
}

int main(){
    double a = 0;
    double b = 1;
    
    double x0 = (a+b) / 2;

    double x1;

    for( int i = 1 ; i <= 5 ; i++ ){
        x1 = x0 - ( f(x0) / df(x0) );
        x0 = x1;
    }

    cout << "The root is: " << x1 << endl;
    return 0;
}