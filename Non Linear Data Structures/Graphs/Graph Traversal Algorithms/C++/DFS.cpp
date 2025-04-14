#include<iostream>
#include<list>
#include<map>
#include<queue>
using namespace std;


template <class T>
class Graph{
    public: 
    map<T , list<T>> adjacencyList;
    void addEdge(T u , T v , bool direction) {
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

    void DFS() {

    }
};

void DFS(int node , map<int , list<int>> adjList , map<int , bool> visited , list<int>&ls) {

    visited[node] = true;
    ls.push_back(node);
    cout<<node<<"\t";
    for(auto neighbours: adjList[node]) {
        if(!visited[neighbours]){
            DFS(neighbours ,adjList , visited , ls);
            visited[neighbours] = true;
        }   
    }
}

void DFS_Traversal(int start , map<int, list<int>>adjacencyList) {
    map<int , bool> visited;
    list<int> ls;
    DFS(start , adjacencyList , visited , ls);
}


int main() {

    int vertices;
    cout<<"Enter vertices:- ";
    cin>>vertices;
    int edges;
    cout<<"Enter edges:- ";
    cin>>edges;

    Graph<int> G;

    for(int i = 0; i < edges; i++){
        int u , v;
        cin>>u>>v;

        G.addEdge(u , v , 0);
    }
    cout<<endl;
    G.displayGraph();
    cout<<endl;

    DFS_Traversal(0 , G.adjacencyList);

    return 0;
}