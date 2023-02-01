#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include "StrChecker.hpp"
using namespace std;

int main(){
    ifstream CodeFile("code.txt");
    string tmp;
    map<string, char> Code;
    while(getline(CodeFile, tmp)){
        string code01 = tmp.substr(2);
        char c = tmp[0];
        Code[code01] = c;
    }
    CodeFile.close();

    string receive;
    ifstream ReceiveFile("receive.txt");
    ReceiveFile >> receive;
    ReceiveFile.close();

    string decodeStr;
    tmp = "";
    for(int i=0; i<receive.length(); i++){
        tmp += receive[i];
        auto key = Code.find(tmp);
        if(key != Code.end()){
            cout << key->second;
            decodeStr += key->second;
            tmp = "";
        }
    }
    cout << endl;

    ifstream InputFile("input.txt");
    string input;
    InputFile >> input;
    InputFile.close();

    StrChecker(input, decodeStr);


    return 0;
    //コードが存在しない場合の処理は？
}