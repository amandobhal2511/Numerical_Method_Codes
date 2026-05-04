#include<bits/stdc++.h>
using namespace std;

double f( double x ){
    return (x*x*x) - (4*x) - 9;
}

double formula( double a , double b ){
    return ( ((a * f(b)) - (b * f(a))) / (f(b) - f(a)) );
}

int main(){
    double a = 2;
    double b = 3;
    double c;
    

    if( f(a) * f(b) >= 0 ){
        cout << "Enter correct values for a and b";
        return 0;
    }

    for( int i = 1 ; i <= 4 ; i++ ){
        c = formula( a , b );
        
        if( f(c) == 0 ){
            cout << "This is the perfect root: " << c << endl;
            return 0;
        }
        else if( f(c) < 0 ){
            if( a < 0 ) a = c;
            else b = c;
        }
        else{
            if( a > 0 ) a = c;
            else b = c;
        }
    }
    cout << "The root is: " << c << endl;
    return 0;
}