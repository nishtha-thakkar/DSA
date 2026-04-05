# include <iostream>
using namespace std;
# include <vector>

// the graph is 2D array so we can take 2 vector or 2 array
// undirected graph - pairing - it is connected each other 2 or more 
// directed graph - one time  pe ek hi se connect hota hai
class Graph {
    int vartics;
    vector <vector <int>> arr;

    public:
    Graph(int x){
        vartics = x;
        arr.resize (vartics);

    }

    void addUndirected(int a , int b){
        arr[a].push_back(b);
        arr[b].push_back(a);

    }

    void addDirected(int a , int b){
        arr[a].push_back(b);
    }

    void dfsRec(int node , vector<bool> & visited){
        visited[node] = true;
        cout << " node : " << node << endl;

        for(int nei : arr[node]){
            if(!visited[nei]){
                dfsRec(nei ,visited);

            }
        }

    }

    void dfs(int start){
        vector<bool>  visited (vartics , false);
        cout << " start : " << start << endl;
        dfsRec(start ,visited);
        cout << endl;



    }

    void display(){
        for(int i = 0 ; i<vartics ; i++){
            cout << i << " -> ";
            for(int nei : arr[i]){
                cout << nei << " ";
            }
            cout << endl;
        }
    }

};

int main(){
     Graph ud (5);
    
     cout << " undirected graph :" << endl;
     ud.addUndirected(0 , 1);
     ud.addUndirected(0 , 2);
     ud.addUndirected(1 , 2);
     ud.addUndirected(2 , 3);
     ud.addUndirected(3 , 2);
     ud.addUndirected(3 , 1);
     ud.addUndirected(4 , 1);
     ud.display();

     ud.dfs(3);
      
    //  Graph dg(5);

    //  cout << " directed graph :" << endl;
    //  dg.addDirected(0 , 2);
    //  dg.addDirected(2 , 1);
    //  dg.addDirected(1,  3);
    //  dg.addDirected(3 , 4);
    //  dg.addDirected(4 , 1);
     
   
    //  dg.display();

     
     



}






