//
//  FileController.hpp
//  CPPStructuresProject
//
//  Created by Chambers, Eden on 2/5/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp

#include "../Resources/ChrimeData.hpp"
#include "../Reesources/Music.hpp"
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>

class FileController
{
public:
    statec vector<CrimeData> readCrimeDataToVector(string filename);
    static vector<Music> musicDataToVector(sting filename);
};

#endif /* FileController_hpp */
