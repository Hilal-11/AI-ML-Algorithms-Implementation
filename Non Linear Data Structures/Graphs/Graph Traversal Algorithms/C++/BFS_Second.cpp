#include<iostream>
#include<queue>
#include<map>
#include<list>
using namespace std;

class Graph{
    public: 
    map<int , list<int>> adjacencyList;
    void addEdge(int u , int v , bool direction) {
        adjacencyList[u].push_back(v);
        if(direction == 0)
            adjacencyList[v].push_back(u);
    }
    void displayGraph() {
        for(auto i : adjacencyList){
            cout<<i.first<<": ";
            for(auto j : i.second){
                cout<<j<<"\t";
            }
            cout<<endl;
        }
    }
};


void BFS_Traversal(int start , map<int , list<int>> adjacencyList) {
    map<int , bool> visited;
    queue<int> q;
    
    q.push(start);
    visited[start] = true;

    while(!q.empty()){
        int node = q.front();
        q.pop();

        cout<<node<<"\t";

        for(int neighbours: adjacencyList[node]){
            if(!visited[neighbours]){
                q.push(neighbours);
                visited[neighbours] = true;
            }
        }
    }   

}   

int main() {


    int vertices;
    cout<<"Enter vertices:- ";
    cin>>vertices;
    int edges;
    cout<<"Enter edges:- ";
    cin>>edges;

    Graph G;

    for(int i = 0; i < edges; i++){
        int u , v;
        cin>>u>>v;

        G.addEdge(u , v , 0);
    }
    cout<<endl;
    G.displayGraph();
    cout<<endl;

    return 0;
}