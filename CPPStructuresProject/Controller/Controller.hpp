//
//  Controller.hpp
//  CPPStructuresProject
//
//  Created by Chambers, Eden on 1/28/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include <iostream>
#include "../Model/Nodes/Node.hpp"
#include "../Model/Nodes/LinearNode.hpp"
#include "../Controller/FileController.hpp"
#include "../Testers/LinearTester.hpp"
#include "../Model/Linear/CircularList.hpp"
#include "../Testers/GraphTester.hpp"

using namespace std;

//void testFiles();
//int testVsSTL();

class Controller
{
private:
    void usingNodes();
    void testLinear();
    void testFiles();
    void usingLinkedLists();
    void testGraphs();
    long simpleHash(string word);
public:
    void start();
};

#endif /* Controller_hpp */
