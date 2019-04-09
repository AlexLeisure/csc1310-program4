#ifndef GRAPHMATRIX_H
#define GRAPHMATRIX_H

#include <iostream>

class GraphMatrix{
private:
    int** matrix;
    int numVertex;
    int numEdge;

public:

    GraphMatrix(int numVertex){

    }
    ~GraphMatrix(){

    }

    /**
     * Changes the adjacency matrix so that matrix[vOne] points to matrix[vTwo]
     * @param vOne [Vertex that points. Value is an index for matrix.]
     * @param vTwo [Vertex that is pointed to. Value is an index for matrix.]
     */
    void addEdge(int vOne, int vTwo){
        //TODO: add edge
        if(vOne >= numVertex || vTwo >= numVertex){
            std::cout << "Out of bounds error\n";
            return;
        }
    }
    bool hasEdge(int vOne, int vTwo){
        //TODO: test if matrix[vOne][vTwo] is 1
        if(vOne >= numVertex || vTwo >= numVertex){
            std::cout << "Out of bounds error\n";
            return;
        }

    }

    void print(){

    }

};

#endif
