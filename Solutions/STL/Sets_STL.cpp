#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    
    set<int> s;
    int Q;
    cin >> Q;
    
    for (int i=0; i<Q; i++) {
        int query;
        cin >> query;
        int num;
        cin >> num;        
        switch(query) {
            case (1):
                s.insert(num);
                break;
            case (2):
                s.erase(num);
                break;
            case (3):
                auto it = s.find(num);
                if(it != s.end())
                    cout << "Yes" << endl;
                else
                    cout << "No" << endl;    
                break;
        }
    }
    return 0;
}



