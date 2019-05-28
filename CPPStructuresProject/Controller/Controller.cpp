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
#include "../Testers/BinaryTreeTester.hpp"

void Controller :: start()
{
    cout << "Welcome to the Data Structures App." << endl;
//    usingNodes();
//    testLinear();
//    testFiles();
//    GraphTester() = test;
//    test.testGraphs();
//    testGraphs();
        cout << "Bears -> " << simpleHash("Bears") << endl;
        int size = 101;
        int position = simpleHash("cat")%size;
        int position1 = simpleHash("Eden")%size;
        int position2 = simpleHash("Henrichsen")%size;
        int position3 = simpleHash("The quick brown fox jumped over the lazy dog!")%size;
    cout << "cat -> " << position << endl;
    cout << "Eden -> " << position1 << endl;
        cout << "Henrichsen -> " << position2 << endl;
        cout << "The quick brown fox jumped over the lazy dog! -> " << position3 << endl;
//    BinaryTreeTester myTester;
//    myTester.doTreeStuff();
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

long Controller :: simpleHash(string word)
{
    long hash = 0;
    for (int index = 0; index < word.length(); index++)
    {
        hash += (int)(word[index]);
    }
    return hash;
}
