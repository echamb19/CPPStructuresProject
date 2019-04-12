//
//  Controller.cpp
//  CPPStructuresProject
//
//  Created by Chambers, Eden on 1/28/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "Controller.hpp"
#include "FileController.hpp"
#include "../Model/Linear/LinkedList.hpp"
#include "../Testers/GraphTester.hpp"
#include "../Model/Nodes/BinaryTreeNode.hpp"

void Controller :: start()
{
    cout << "Welcome to the Data Structures App." << endl;
//    usingNodes();
//    testLinear();
//    testFiles();
//    GraphTester() = test;
//    test.testGraphs();
    testGraphs();
}

void Controller :: usingNodes()
{
    LinearNode<int> mine(5);
    LinearNode<string> wordHolder("Words can be stored too!");
    cout << mine.getData() << endl;
    cout << wordHolder.getData() << endl;
    wordHolder.setData("replaced text");
    cout << wordHolder.getData() << endl;
}

void Controller :: testFiles()
{
    vector<Music> musica = FileController :: musicDataToVector("/Users/echa3557/Documents/C++ Projects/CPPStructuresProject/CPPStructuresProject/Resources/music.csv");
    
    for (int index = 234; index < 256; index++)
    {
        cout << index << ": contents are: " << musica[index] << endl;
    }
}

void Controller :: testLinear()
{
    LinearTester lookieHere;
    lookieHere.testVsSTL();
}

void Controller :: usingLinkedLists()
{
    
    
}

void Controller :: testGraphs()
{
    GraphTester puzzle;
    puzzle.testGraphs();
}
