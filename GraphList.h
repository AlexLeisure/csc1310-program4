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

    }
    ~GraphList(){

    }
    void addEdge(int vOne, int vTwo){

    }
    void print(){

    }
};

#endif
