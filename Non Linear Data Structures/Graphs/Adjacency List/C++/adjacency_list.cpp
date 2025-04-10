#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;

template <class T>
class Graph{
    public: 
        unordered_map<T, list<T>> adjacencyList;
    void addEdge(T u , T v , bool direction) {
        adjacencyList[u].push_back(v);

        if(direction == 0)
            adjacencyList[v].push_back(u);
    }
    void displayAjacencyList() {
        for(auto i : adjacencyList){
            cout<<i.first<<" ";
            for(auto j: i.second){
                cout<<j<<"\t";
            }
            cout<<endl;
        }
    }
};
int main() {

    int vertices;
    cout<<"Enter number of vertices:- "<<endl;
    cin>>vertices;

    int edges;
    cout<<"Enter number of edges:- "<<endl;
    cin>>edges;
    Graph<string> G;
    
    for(int i = 0; i < edges; i++){
        string u , v;
        cin>>u>>v;
        G.addEdge(u , v , 0);
    }

    G.displayAjacencyList();
    
    return 0;
}