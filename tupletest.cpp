#include <iostream>
#include <vector>
#include <tuple>

using namespace std;

int main(){
    vector<tuple<int, vector<int>, string>> T;
    vector<int> tmp = {};
    for(int i=0; i<5; i++){
        T[i] = make_tuple(i, tmp, "");
    }
    for(int i=0; i<5; i++){
        auto [a,b,c] = T[i];
        cout << a << endl;
    }

}