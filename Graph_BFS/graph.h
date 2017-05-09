//
//  graph.hpp
//  program3
//
//  Created by Dawit Abera on 4/27/17.
//  Copyright © 2017 Dawit Abera. All rights reserved.
//

#ifndef graph_h
#define graph_h

#include <stdio.h>
#include <iostream>
#include "nodedata.h"

using namespace std;

const int MAXNODES = 100;
class GraphM{
    
    
public:
    
    GraphM();
    
    void buildGraph(istream &inputFile);
    int insertEdge(int edge, int vertex1, int vertex2);
    void removeEdge(int vertex1, int vertex2);
    void findShortestPath();
    void displayAll(int source, int destination);
    
    
private:
    
    struct TableType{
        
        bool visited;
        int dist;
        int path;
        
    };
    
    NodeData data [MAXNODES];
    int C[MAXNODES][MAXNODES];
    int size;
    TableType T[MAXNODES][MAXNODES];
};

#endif /* graph_h */
