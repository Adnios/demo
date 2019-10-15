//
// Created by adnois on 19-4-24.
//
#include <iostream>
#include <stdlib.h>
using namespace std;
const int DefaultVertices=100;
const int maxWeight=1000;
typedef int E;
typedef char T;
class Graphmtx{
private:
    T *VerticesList;
    E **Edge;
    int numVertices;
    int maxVertices;
    int numEdge;
public:
    Graphmtx(int sz=DefaultVertices);
    ~Graphmtx(){
        delete []VerticesList;
        delete []Edge;
    }
    T getValue(int i){
        if(i>=0&&i<numVertices){
            return VerticesList[i];
        }
        else{
            cout<<"error"<<endl;
            exit(1);
        }
    }
    int getNumVertices(){
        return numVertices;
    }
    int getVertexPos(T vertex){
        for(int i=0;i<numVertices;i++){
            if(VerticesList[i]==vertex)
                return i;
        }
        return -1;
    }
    E getWeight(int v1,int v2){
        return (v1>-1&&v2>-1)?Edge[v1][v2]:0;
    }
    int getFirstNeighbor(int v);
    int getNextNeighbor(int v,int w);
    bool insertVertex(const T vertex);
    bool removeVertex(int v);
    bool insertEdge(int v1,int v2,E cost);
    bool removeEdge(int v1,int v2);
    void show();
};
Graphmtx::Graphmtx(int sz){
    maxVertices=sz;
    numVertices=0;
    numEdge=0;
    int i,j;
    VerticesList=new T[maxVertices];
    Edge=new E*[maxVertices];
    for(i=0;i<maxVertices;i++){
        Edge[i]=new E[maxVertices];
    }
    for(i=0;i<maxVertices;i++){
        for(j=0;j<maxVertices;j++){
            Edge[i][j]=((i==j)?0:maxWeight);
        }
    }
}
int Graphmtx::getFirstNeighbor(int v){
    if(v>-1){
        for(int col=0;col<numVertices;col++){
            if(Edge[v][col]&&Edge[v][col]<maxWeight)
                return col;
        }
    }
    return -1;
}
int Graphmtx::getNextNeighbor(int v,int w){
    if(v>-1&&w>-1){
        for(int col=w+1;col<numVertices;col++)
            if(Edge[v][col]&&Edge[v][col]<maxWeight)
                return col;
    }
    return -1;
}
bool Graphmtx::insertVertex(const T vertex){
    if(numVertices==maxVertices)
        return false;
    VerticesList[numVertices++]=vertex;
    return true;
}
bool Graphmtx::removeVertex(int v){
    if(v<0||v>=numVertices){
        cout<<"error"<<endl;
        return false;
    }
    if(numVertices==1)
        return false;
    int i,j;
    VerticesList[v]=VerticesList[numVertices-1];
    for(i=0;i<numVertices;i++){
        Edge[i][v]=Edge[i][numVertices-1];
    }
    numVertices--;
    for(j=0;i<numVertices;j++)
        Edge[v][i]=Edge[numVertices][j];
    return true;
}
bool Graphmtx::insertEdge(int v1,int v2,E cost){
    if(v1<0||v1>=numVertices||v2<0||v2>=numVertices){
        cout<<"error"<<endl;
        return false;
    }
    Edge[v1][v2]=cost;
    Edge[v2][v1]=cost;
    return true;
}
bool Graphmtx::removeEdge(int v1,int v2){
    if(v1<0||v1>=numVertices||v2<0||v2>=numVertices){
        cout<<"error"<<endl;
        return false;
    }
    Edge[v1][v2]=maxWeight;
    Edge[v2][v1]=maxWeight;
    numEdge--;
    return true;
}
void Graphmtx::show(){
    for(int i=0;i<numVertices;i++){
        for(int j=i;j<numVertices;j++){
            if(Edge[i][j]>0&&Edge[i][j]<maxWeight)
                cout<<VerticesList[i]<<"-"<<VerticesList[j]<<":"<<Edge[i][j]<<endl;
        }
    }
    cout<<endl;
}
class SeqQueue {
protected:
    int rear, fron;
    int*elements;
    int maxSize;
public:
    SeqQueue(int sz = 20){
        fron=0; rear=0; maxSize=sz;
        elements = new int[maxSize];
    }
    int push(int x){
        elements[rear] = x;
        rear = (rear+1) % maxSize;
        return 1;
    }
    int pop(int& x){
        if (IsEmpty()) return 0;
        x = elements[fron];
        fron = (fron+1) % maxSize;
        return 1;
    }
    int IsEmpty() const { return fron == rear;}
};
void DFS (Graphmtx& G, int v, bool *visited) {
    cout << G.getValue(v) << ' ';
    visited[v] = true;
    int w = G.getFirstNeighbor (v);
    while (w != -1) {
        if ( !visited[w] ) DFS(G, w, visited);
        w = G.getNextNeighbor (v, w);
    }
}
void DFS (Graphmtx& G, const T& v) {
    int i, loc, n = G.getNumVertices();
    bool *visited = new bool[n];
    for (i = 0; i < n; i++) visited [i] = false;
    loc = G.getVertexPos(v);
    DFS(G,loc,visited);
    delete [] visited;
}
void BFS (Graphmtx& G, const T& v) {
    int i, w, n = G.getNumVertices();
    bool *visited = new bool[n];
    for (i = 0; i < n; i++) visited[i] = false;
    int loc = G.getVertexPos (v);
    cout<<G.getValue(loc)<<' ';
    visited[loc]=true;
    SeqQueue Q;Q.push (loc);
    while (!Q.IsEmpty() ) {
        Q.pop (loc);
        w = G.getFirstNeighbor (loc);
        while (w != -1) {
            if (visited[w]==false){
                cout<<G.getValue(w)<<' ';
                visited[w]=true;
                Q.push (w);
            }
            w = G.getNextNeighbor (loc, w);
        }
    }
    delete [] visited;
}

int main(){
    Graphmtx g;
    int n1,n2;
    cin>>n1;
    char ch;
    cin>>ch;
    g.insertVertex(ch);
    for(int i=1;i<n1;i++){
        char ch;
        cin>>ch;
        g.insertVertex(ch);
    }
    cin>>n2;
    for(int i=0;i<n2;i++){
        int v1,v2,cost;
        cin>>v1>>v2>>cost;
        g.insertEdge(v1,v2,cost);
    }
    cout<<"DFS:";
    DFS(g,ch);
    cout<<endl;
    cout<<"BFS:";
    BFS(g,ch);cout<<endl;
    cout<<"edges are:"<<endl;
    g.show();
    return 0;
}
