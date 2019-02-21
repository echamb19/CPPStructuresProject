//
//  Controller.cpp
//  CPPStructuresProject
//
//  Created by Chambers, Eden on 1/28/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "Controller.hpp"
#include "FileController.hpp"

void Controller :: start()
{
    cout << "Welcome to the Data Structures App." << endl;
//    usingNodes();
//    testLinear();
    testFiles();
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
    vector<CrimeData> crimes = FileController :: readCrimeDataToVector("/Users/echa3557/Documents/C++ Projects/CPPStructuresProject/CPPStructuresProject/Resources/crime.csv");
    
    for (int index = 234; index < 256; index++)
    {
        cout << index << ": contents are: " << crimes[index] << endl;
    }
        
}

void Controller :: testLinear()
{
    LinearTester lookieHere;
    lookieHere.testVsSTL();
}
