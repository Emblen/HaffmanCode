using namespace std;

void ApperanceNum(string input, map<char, int> &appnum, vector<pair<int ,char>> &appnumpair)
{
    for(int i=0; i<input.length(); i++){
        appnum[input[i]]++;
    }
    for(auto v:appnum){
        // cout << v.first << " " << v.second << endl;
        appnumpair.push_back({v.second, v.first});
    }
    sort(appnumpair.begin(), appnumpair.end());
    // for(auto v:appnumpair){
    //     cout << v.first << " " << v.second << endl;
    // }
}