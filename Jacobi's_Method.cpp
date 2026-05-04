#include<bits/stdc++.h>
using namespace std;
int main(){
    // Example System:
    // 10x + y + z = 12
    // 2x + 10y + z = 13
    // 2x + 2y + 10z = 14
    double x = 0 , y = 0 , z = 0; // Initial values
    double x1 , y1 , z1;

    for( int i = 1 ; i <= 10 ; i++ ){
        x1 = (12 - y - z) / 10;
        y1 = (13 - 2*x - z) / 10;
        z1 = (2*x + 2*y + 10*z) / 10 ;

        x = x1;
        y = y1;
        z = z1;
    }
    
    cout << "x = " << x << endl;

    return 0;
}

