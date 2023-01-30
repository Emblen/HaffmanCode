using namespace std;

void MakeHuffmanTree(priority_queue<pair<int,int>, vector<pair<int,int>>, 
greater<pair<int, int>>> pque, vector<tuple<int, int, vector<int>, string>> &T, int initnodenum){
    
    for(int i=0; i<initnodenum; i++) pque.push({get<1>(T[i]), i}); //初期ノードについて、pair<出現回数, ノード番号>をキューに追加する
    
    //ハフマン木をつくる。新たにノードをinitnodenum-1個つくり、2分木にする。
    for(int i=initnodenum; i<2*initnodenum-1; i++){
        pair<int, int> node1 = pque.top();
        pque.pop();
        pair<int, int> node2 = pque.top();
        pque.pop();
        vector<int> tmp = {node1.second, node2.second};
        T[i] = make_tuple(i, node1.first+node2.first, tmp, "");
        pque.push({node1.first+node2.first, i}); 
    }
}