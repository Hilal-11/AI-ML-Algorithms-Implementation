#include<iostream>
using namespace std;

class Graph{
    public:
        int vertices;
        int** adjacencyMatrics;

    Graph(int v){
        vertices = v;

        adjacencyMatrics = new int*[vertices];
        for (int i = 0; i < vertices; i++) {
            adjacencyMatrics[i] = new int[vertices];
            
            // Initialize matrix with 0s
            for (int j = 0; j < vertices; j++) {
                adjacencyMatrics[i][j] = 0;
            }
        }

    }
    void add_edge(int v , int u){
        if(isWeighted) {
            adjacencyMatrics[u][v] = 1;
            adjacencyMatrics[v][u] = 0;
        }
        adjacencyMatrics[u][v] = 1;
        adjacencyMatrics[v][u] = 1;
    }

    void display_adjacency_matrics() {
        for(int i = 0; i < vertices; i++){
            for(int j = 0; j < vertices; j++){
                cout<<adjacencyMatrics[i][j]<<"\t";
            }
            cout<<endl;
        }
    }
};  

int main() {

    Graph G(5);
    G.add_edge(1 , 3);
    G.add_edge(1 , 2);
    G.add_edge(2 , 4);
    G.add_edge(3 , 5);
    G.add_edge(4 , 5);

    G.display_adjacency_matrics();


    return 0;
}