#include<iostream>
#include<fstream>

#define MAX_NUMBER_OF_NODES 100

std::ifstream INPUT_FILE("file.in");

int nodes,startNode;
bool matrix[MAX_NUMBER_OF_NODES][MAX_NUMBER_OF_NODES],visited[MAX_NUMBER_OF_NODES];

void read(){
    INPUT_FILE>>nodes>>startNode;
    for(int row=1;row<=nodes;row++){
        for(int col=1;col<=nodes;col++) INPUT_FILE>>matrix[row][col];
    }
}

void DFS(int node){
    visited[node]=1;
    std::cout<<node<<" ";
    for(int i=1;i<=nodes;i++){
        if((matrix[node][i]) && !(visited[i])) DFS(i);
    }
}

int main()
{
    read();
    DFS(startNode);
    return 0;
}
