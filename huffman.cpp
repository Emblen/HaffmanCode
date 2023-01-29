#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <string>
#include <algorithm>
#include <set>
#include <fstream>
#include <tuple>

#include "ApperanceNum.hpp"
#include "InitHaffmanTree.hpp"
using namespace std;

string input;
map<char, int> AppNum;
vector<pair<int, char>> AppNumpair;
vector<tuple<int, int, vector<int>, string>> T; //ノード番号、出現回数の合計、子ノード番号の配列、割り当てる符号


void InputString()
{
    ifstream InputFile("input.txt");
    InputFile >> input;
    // cout << input << endl;
    InputFile.close();
}



int main(){
    InputString();
    ApperanceNum(input, AppNum, AppNumpair);
    InitHaffmanTree(AppNumpair, T);
}