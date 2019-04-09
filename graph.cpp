#include <iostream>
#include <fstream>
#include <string>
//#include "GraphList.h"
#include "GraphMatrix.h"

using namespace std;

int main(){
    const int numVertex = 4;
    GraphMatrix* graph = new GraphMatrix(numVertex);
    graph->addEdge(0, 1);
    graph->addEdge(1, 2);
    graph->addEdge(2, 3);
    graph->addEdge(0, 3);

    graph->print();

    cout << (graph->hasEdge(0, 1)) ? "There is an edge 0->1\n" : "There is not an edge 0->1\n";
    cout << (graph->hasEdge(2, 1)) ? "There is an edge 2->1\n" : "There is not an edge 2->1\n";

    delete graph;
    return 0;
}
