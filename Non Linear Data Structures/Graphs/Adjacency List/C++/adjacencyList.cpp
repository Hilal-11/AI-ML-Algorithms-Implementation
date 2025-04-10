#include<iostream>
#include<list>
#include<map>
using namespace std;


class Graph{
    public: 
        map<int , list<int>> adjscencyList;

        void addEdge(int u , int v , bool direction) {
            adjscencyList[u].push_back(v);
            if(direction == 0)
                adjscencyList[v].push_back(u);
        }

        void displayAdjacencyList() {
            for(auto i : adjscencyList) {
                cout<<i.first<<": ";
                for(auto j: i.second) {
                    cout<<j<<"\t";
                }
                cout<<endl;
            }
        }
};

int main() {
    int vertices;
    cout<<"Enter Vertices:- ";
    cin>>vertices;
    int edges;
    cout<<"Enter Edges:- ";
    cin>>edges;
    
    Graph G;

    for(int i = 0; i < edges; i++) {
        int u , v;
        cin>>u>>v;

        G.addEdge(u , v , 0);
    }

    G.displayAdjacencyList();

    
    return 0;
}
