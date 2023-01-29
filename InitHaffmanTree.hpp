using namespace std;

void InitHaffmanTree(vector<pair<int, char>> &appnumpair, vector<tuple<int, int, vector<int>, string>> &T){
    vector<int> tmp = {};
    for(int i=0; i<appnumpair.size(); i++) T[i] = make_tuple(i, appnumpair[i].first, tmp, "");
}