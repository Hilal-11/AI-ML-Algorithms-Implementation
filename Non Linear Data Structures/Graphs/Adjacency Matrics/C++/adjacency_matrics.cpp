#include<iostream>
using namespace std;

int main() {

    int n = 5;
    int m = 6; 
    
    int adjacencyMatrics[5+1][6+1];
    for(int i = 0; i < m; i++) {
        int u , v;
        cin>>u >> v;

        adjacencyMatrics[u][v] = 1;
        adjacencyMatrics[v][u] = 1; // For Undirected Graph
    }



    return 0;
}