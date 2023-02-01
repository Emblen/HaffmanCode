using namespace std;

void AssignCodeBFS(vector<tuple<int, int, vector<int>, string>> &T, queue<int> &que, int sv){
    que.push(sv);
    while(!que.empty()){
        int v = que.front();
        que.pop();

        if(get<2>(T[v]).size()!=0){
            for(int i=0; i<2; i++){
                int nv = get<2>(T[v])[i];
                que.push(nv);
                T[nv] = make_tuple(get<0>(T[nv]), get<1>(T[nv]), get<2>(T[nv]), get<3>(T[v])+to_string(1-i));
            }
        }
    }
}