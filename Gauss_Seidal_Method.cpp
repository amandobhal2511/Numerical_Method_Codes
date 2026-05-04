#include<bits/stdc++.h>
using namespace std;
int main(){
    double x = 0 , y = 0 , z = 0;
    double x1 , y1 , z1;

    for( int i = 1 ; i <= 10 ; i++ ){
        x1 = (12 - y - z) / 10;
        x = x1;
        y1 = (13 - 2*x - z) / 10;
        y = y1;
        z1 = (14 - 2*x - 2*y) / 10;
        z = z1;
    }

    cout << "x = " << x << endl;
    return 0;
}