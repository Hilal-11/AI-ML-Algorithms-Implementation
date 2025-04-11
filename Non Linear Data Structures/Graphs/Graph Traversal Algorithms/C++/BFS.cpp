#include<iostream>
#include<map>
#include<list>
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
};
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
    G.displayGraph();

    return 0;
}