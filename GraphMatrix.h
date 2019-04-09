#ifndef GRAPHMATRIX_H
#define GRAPHMATRIX_H

#include <iostream>

class GraphMatrix{
private:
    int** matrix;
    int numVertex;
    int numEdge;

public:

    GraphMatrix(const int numVertex){
        this->numVertex = numVertex;
        int** matrix = new int*[numVertex];
        for(int i = 0; i < numVertex; i++)
            matrix[i] = new int[numVertex];
        numEdge = 0;
        //set all values in matrix to 0
        for(int i=0; i<numVertex; i++){
            for(int x=0; x<numVertex; x++){
                matrix[i][x] = 0;
            }
        }
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
        numEdge++;
    }
    bool hasEdge(int vOne, int vTwo){
        //TODO: test if matrix[vOne][vTwo] is 1
        if(vOne >= numVertex || vTwo >= numVertex){
            std::cout << "Out of bounds error\n";
            return false;
        }
        //returns true if matrix[vOne][vTwo] is 1
        return matrix[vOne][vTwo] == 1;
    }

    void print(){
        std::cout << "Matrix\n";
        for(int i=0; i<numVertex; i++){
            for(int x=0; x<numVertex; x++){
                std::cout << matrix[i][x] << " ";
            }
            std::cout << "\n";
        }
        std::cout << "\n";
    }

};

#endif
