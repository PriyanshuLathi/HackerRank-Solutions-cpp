#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int size{};
    cin >> size;
    
    vector <int> vec;
    
    for(int i=0; i<size; i++) {
        int num;
        cin >> num;
        vec.push_back(num);
    }
    
    sort(vec.begin(), vec.end());
    
    for(auto &n: vec) {
        cout << n << " ";
    }
    
    return 0;
}
