#include<iostream>
using namespace std;
#define MAX 10
int main() {

    int vertices;
    int edges;
    
    cout<<"Enter the number of vertices:- ";
    cin>>vertices;
    
    int adjacencyMatrics[MAX][MAX] = {0};

    cout<<"Enter the number of edges:- ";
    cin>>edges;

    for(int i = 0; i < edges; i++) {
        int u , v;
        cin>>u >> v;

        adjacencyMatrics[u][v] = 1;
        adjacencyMatrics[v][u] = 1; // For Undirected Graph
    }

    // Display the adjacency matrics
    cout<<"Adjacency Matrics Repesentation of Graph \n";
    for(int i = 0; i < vertices; i++){
        for(int j = 0; j < vertices; j++){
            cout<<adjacencyMatrics[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}