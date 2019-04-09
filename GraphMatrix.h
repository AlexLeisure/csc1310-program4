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
        this->numVertex = numVertex;
        matrix = new int[numVertex][numVertex];
        numEdge = 0;
    }
    ~GraphMatrix(){
        for(int i=0; i<numVertex; i++){
            delete [] matrix[i];
        }
        delete [] matrix;
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
        matrix[vOne][vTwo] = 1;
    }
    bool hasEdge(int vOne, int vTwo){
        //TODO: test if matrix[vOne][vTwo] is 1
        if(vOne >= numVertex || vTwo >= numVertex){
            std::cout << "Out of bounds error\n";
            return;
        }
        //returns true if matrix[vOne][vTwo] is 1
        return matrix[vOne][vTwo] == 1;
    }

    void print(){

    }

};

#endif
