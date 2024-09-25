
#include <iostream>
#include <cmath>  

using namespace std;

int main() {
    double result = 0.0;

   
    int n = 1;
    while (n <= 25) {
        double inner_product = 1.0;
        int k = 1;
        while (k <= n) {
            inner_product *= sqrt(pow(cos(k + n), 2));
            k++;
        }
        result += cos(n) + inner_product;
        n++;
    }
    cout << "1) n = " << result << endl;

    
    result = 0.0;
    n = 1;
    do {
        double inner_product = 1.0;
        int k = 1;
        do {
            inner_product *= sqrt(pow(cos(k + n), 2));
            k++;
        } while (k <= n);
        result += cos(n) + inner_product;
        n++;
    } while (n <= 25);
    cout << "2) n =" << result << endl;

    
    result = 0.0;
    for (n = 1; n <= 25; n++) {
        double inner_product = 1.0;
        for (int k = 1; k <= n; k++) {
            inner_product *= sqrt(pow(cos(k + n), 2));
        }
        result += cos(n) + inner_product;
    }
    cout << "3) n =" << result << endl;

    
    result = 0.0;
    for (n = 25; n >= 1; n--) {
        double inner_product = 1.0;
        for (int k = n; k >= 1; k--) {
            inner_product *= sqrt(pow(cos(k + n), 2));
        }
        result += cos(n) + inner_product;
    }
    cout << "4) n= " << result << endl;

    return 0;
}

