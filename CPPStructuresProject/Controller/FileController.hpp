//
//  FileController.hpp
//  CPPStructuresProject
//
//  Created by Chambers, Eden on 2/5/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp

#include "../Resources/CrimeData.hpp"
#include "../Resources/Music.hpp"
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>
#include "../Model/Linear/Array.hpp"
#include "../Model/Linear/LinkedList.hpp"
//#include "../Model/NonLinear/BinarySearchTree.hpp"

class FileController
{
public:
    // Built in STL data Structures
    static vector<CrimeData> readCrimeDataToVector(string filename);
    static vector<Music> musicDataToVector(string filename);
    
    // OOP Array
    static vector<Music> musicDataToArray(string filename);
    
    // LinkedLists
    static LinkedList<CrimeData> readDataToList(string filename);
    static LinkedList<Music> musicDataToList(string filename);
    
    // BST
    //static BinarySearchTree<CrimeData> readDataToTree
    //static BinarySearchTree<Music> musicDataToTree(string filename);
    

};

#endif /* FileController_hpp */
