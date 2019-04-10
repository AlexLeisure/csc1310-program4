#ifndef GRAPHLIST_H
#define GRAPHLIST_H

class GraphList{
private:
    struct Node{
        int value;
        Node* next;
    };
    Node** adjList;
    int numVertex;
    int numEdge;

public:
    GraphList(int numVertex){
        this->numVertex = numVertex;
        numEdge = 0;
        adjList = new Node*[numVertex];
        for(int i=0; i<numVertex; i++){
            adjList[i] = new Node;
            adjList[i]->value = i;
            adjList[i]->next = nullptr;
        }
    }
    ~GraphList(){

    }
    void addEdge(int vOne, int vTwo){

    }
    void print(){

    }
};

#endif
