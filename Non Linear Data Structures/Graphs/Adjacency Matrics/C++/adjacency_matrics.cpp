#include<iostream>
using namespace std;

int main () {
    int n = 5;
    int m = 6;
    // cin>> n >> m;
    
    int adjacencyMatrix[5+1][6+1];

    for(int i = 0; i < m; i++) {
        int u , v;
        cin>>u >> v;

        adjacencyMatrix[u][v] = 1;
        adjacencyMatrix[v][u] = 1;
        

    }

    return 0;
}