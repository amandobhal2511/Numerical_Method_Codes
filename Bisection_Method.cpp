#include<bits/stdc++.h>
using namespace std;

double f( double x ){
    return x*x*x - x - 2;
}

int main(){
    double a, b , c;

    cout << "Enter values for a and b :";
    cin >> a >> b;

    if( f(a) * f(b) >= 0 ){
        cout << "Please enter correct values for a and b";
        return 0;
    }

    for( int i = 1 ; i <= 20 ; i++ ){
        c = ( a + b ) / 2;

        if( f(c) == 0 ){
            cout << "This is the Perfect root " << c << endl;
            return 0;
        }

        else if( f(a) * f(c) < 0 ) b = c;

        else a = c;

    }
    cout << "Root = " << c;
    return 0;
}