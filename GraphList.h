#ifndef GRAPHLIST_H
#define GRAPHLIST_H

#include<iostream>
#include<string>

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
        if(vOne >= numVertex || vTwo >= numVertex){
            std::cout << "Index out of bounds...\n";
            return;
        }
        Node* node = adjList[vOne];
        while(node->next){
            node = node->next;
        }
        Node* newNode = new Node;
        newNode->value = vTwo;
        newNode->next = nullptr;
        node->next = newNode;
        numEdge++;
    }
    void print(){
        std::cout << "List\n";
        string arrow = "--->";
        for(int i=0; i<numVertex; i++){
            Node* node = adjList[i];
            std::cout << node->value << arrow;
            while(node->next){
                node = node->next;
                std::cout << node->value << arrow;
            }
            std::cout << "NULL\n";
        }
    }
};

#endif
