#include<iostream>
using namespace std;
#define MAX 10
class Graph{
    public: 
        int vertices;
        int adjacencyMatrics[MAX][MAX];

        Graph(int v) {
            vertices = v;
        }

        void add_edge(int u , int v) {

            adjacencyMatrics[u][v] = 1;
            adjacencyMatrics[v][u] = 1;
        }

        void display_matrics() {
            for(int i = 0; i < vertices; i++) {
                for(int j = 0; j < vertices; j++) {
                    cout<<adjacencyMatrics[i][j]<<"\t";
                }
                cout<<endl;
            }
        }
};

int main() {

    int vertices;
    int edges;

    cout<<"Enter number of vertices:- ";
    cin>>vertices;

    Graph G(vertices);

    cout<<"Enter number of edges:- ";
    cin>>edges;
    

    for(int i = 0; i < edges; i++) {
        int u , v;
        cin>>u >> v;

        G.add_edge(u , v);
    }

    G.display_matrics();


    return 0;
}