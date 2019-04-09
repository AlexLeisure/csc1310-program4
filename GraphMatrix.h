#ifndef GRAPHMATRIX_H
#define GRAPHMATRIX_H

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
    }
    bool hasEdge(int vOne, int vTwo){
        //TODO: test if matrix[vOne][vTwo] is 1
    }

    void print(){
        
    }

};

#endif
