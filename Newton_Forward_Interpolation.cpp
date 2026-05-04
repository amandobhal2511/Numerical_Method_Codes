#include <iostream>
using namespace std;

int main() {
    int n = 4;
    double x[4] = {1, 2, 3, 4};
    double y[4][4] = {
        {1},
        {8},
        {27},
        {64}
    };

    // Forward difference table
    for(int j = 1; j < n; j++) {
        for(int i = 0; i < n - j; i++) {
            y[i][j] = y[i+1][j-1] - y[i][j-1];
        }
    }

    double value = 2.5;   // jis point pe value nikalni hai
    double h = x[1] - x[0];
    double u = (value - x[0]) / h;

    double result = y[0][0];
    double u_term = 1;
    int fact = 1;

    for(int i = 1; i < n; i++) {
        u_term = u_term * (u - (i - 1));
        fact = fact * i;
        result += (u_term * y[0][i]) / fact;
    }

    cout << "Value = " << result;

    return 0;
}