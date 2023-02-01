using namespace std;

void StrChecker(string send, string receive){
    int count = 0;
    string s3;

    cout << "/////Error Check/////" << endl;
    for(int i=0; i<send.length(); i++){
        if(send[i]!=receive[i]){
            cout << i+1 << " " << send[i] << " " << receive[i] << endl;
            s3.push_back('*');
            count++;
        }
        else s3.push_back('-');
    }
    cout << s3 << endl;
    cout << "Length: " << send.length() << endl;
    cout << "Error : " << count << endl;
}