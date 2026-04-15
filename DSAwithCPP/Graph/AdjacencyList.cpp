#include<iostream>
#include<vector>
#include<unordered_map>
#include<list>
using namespace std;
class graph{
    public:
    unordered_map<int, list<int>>adj;
    void addEde(int u,int v,bool direction){
        //direction=0->undirected graph
        //direction=1->directed graph

        //create an edge from u to v
        adj[u].push_back(v);
        if(direction == 0)
        {
            adj[v].push_back(u);
        }
    }
    void printAdjList(){
        for(auto i:adj){
            cout<<i.first<<"->";
            for(auto j:i.second){
                cout<<j<<"";
            }
            cout<<endl;
        }
    }
};
int main(){
    int n;
    cout<<"Enter the number of nodes in the graph: ";
    cin>>n; 
    int m;
    cout<<"Enter the number of edges in the graph: ";       
    cin>>m;
    graph g;
    for(int i=0;i<m;i++){
        int u,v;
        cout<<"Enter the edge (u v): ";
        cin>>u>>v;
        g.addEde(u,v,0); // Assuming undirected graph
    }
    g.printAdjList();
    return 0;
}