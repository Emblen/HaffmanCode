using namespace std;

//DFSでノードに符号を割り当てる
void AssignCode(vector<tuple<int, int, vector<int>, string>> &T, int v){
    vector<int> tmp = get<2>(T[v]);
    if(tmp.size()!=0){
        for(int i=0; i<2; i++){
            int nv = get<2>(T[v])[i];
            T[nv] = make_tuple(get<0>(T[nv]), get<1>(T[nv]), get<2>(T[nv]), get<3>(T[v])+to_string(1-i));

            AssignCode(T, nv);
        }
    }
}