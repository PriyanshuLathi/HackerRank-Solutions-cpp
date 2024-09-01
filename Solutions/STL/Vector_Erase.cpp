#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    
    int size_of_vec;
    cin >> size_of_vec;
    
    vector <int> vec;
    
    for(auto i=0; i<size_of_vec; i++) {
        int num;
        cin >> num;
        vec.push_back(num);
    }
    
    int position, range_start, range_end;
    
    cin >> position;
    cin >> range_start >> range_end;
    
    vec.erase(vec.begin()+position-1);
    vec.erase(vec.begin()+range_start-1, vec.begin()+range_end-1);
    
    cout << vec.size() << endl;
    
    for (auto &n:vec) {
        cout << n << " ";
    }
    
    return 0;
}
