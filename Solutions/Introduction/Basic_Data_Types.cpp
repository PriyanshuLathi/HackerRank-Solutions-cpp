#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    
    int a{0};
    long b{0};
    char c{0};
    float d{0};
    double e{0};
    
    cin >> a >> b >> c >> d >> e;
    
    cout<< a << endl;
    cout<< b << endl;
    cout<< c << endl;
    cout<< fixed<< setprecision(3);
    cout<< d << endl;
    cout<< fixed<< setprecision(9);
    cout<< e << endl;
    
    return 0;
}
