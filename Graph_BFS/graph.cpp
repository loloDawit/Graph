//
//  graph.cpp
//  program3
//
//  Created by Dawit Abera on 4/27/17.
//  Copyright © 2017 Dawit Abera. All rights reserved.
//

#include "graph.h"
#include <sstream>
using namespace std;
// Default constructor
// sets the size to zero and initilize the private values
GraphM::GraphM(){
    
    size = 0;
    
    // loop through the nodes and set everything to a default value
    //
    for (int i = 0; i < MAXNODES; i++) {
        
        for (int j = 0; j < MAXNODES; j++) {
            
            T[i][j].visited = false;             //all the nodes are not visited
            T[i][j].dist = 0;
            T[i][j].path = 0;
            
            C[i][j] = 0;                        //cost is zero at [0][0]
            
        }
    }
}

/**
 Read the data from a text file.
 
 @param inputFile input data from the file
 */
void GraphM::buildGraph(istream &inputFile){
    
    string read;                            //to store one line from a text
    
    /*
     Extracts characters from the stream as unformatted input and stores them
     into s as a c-string, until either the extracted character is the delimiting
     character, or n characters have been written to s (including the terminating
     null character).
     */
    getline(inputFile, read);
    
    /*
     convert this strings to ints, using istringstream
     */
    istringstream(read) >> size;
    
    // now loop through the size and store the data to a NODEDATA object
    for (int i = 1; i <= size; i++) {
        
        getline(inputFile, read);                   //get the next line
        NodeData save(read);
        data[i] = save;                             // save to NodeData
        
    }
    //
    //
    //    for(;;){
    //        if(inputFile.eof())
    //            break;
    //    }
    /*
     now create the adjucent matrix, with row and column
     */
    
    int adjRow, adjColumn, adjValue, index = 0;
    
    
}
