#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

float raiz(float a, float b, float c) {
    float mod = abs((b*b)-a);
    float frac = ((b*b)+a)/(2*b);
    
    if(mod <= c) {
        return b;
    }
    else {
        return raiz(a, frac, c);
    }
}

int main () {
    float x1, x2, e, result;
    
    cin >> x1 >> x2 >> e;
    
    result = raiz(x1, x2, e);
    cout << fixed << setprecision(4);
    cout << result;
    
    return 0;
    
}
