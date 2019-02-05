//
//  FileController.cpp
//  CPPStructuresProject
//
//  Created by Chambers, Eden on 2/5/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "FileController.hpp"

vector<CrimeData> FileController :: readCrimeDataToVector(string filename)
{
    std :: vector<CrimeData> crimeVector;
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(filename);
    
    // If the file exists at that path
    if (dataFile.is_open())
    {
        // Keep reading until you are at the end of the file.
        while (!dataFile.eof())
        {
            // Grab each line from the CSV separated by the carriage return character
            getline(dataFile, currrentCSVLine, '\r');
            // Exclude header row
            if (rowCount != 0)
            {
                //Create a CrimeData instance from the line. Exclude a blank line (usually if opened separately)
                if (currentCSVLine.length() != 0)
                {
                    CrimeData row(currentCSVLine);
                    crimeVector.push_back(row);
                }
            }
            rowCount++;
        }
        datafile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    
    return crimeVector;
}

vector<Music> FileController :: musicDataToVector(string filename)
{
    vector<Music> musicVector;
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(filename)
    
    // Exists?
    if (dataFile. is_open())
    {
        // Keep going until at end
        while (!dataFile.eof())
        {
            // Grab each line
            getline(dataFile, currentCSVLine, '\r');
            // Exclude header row
            if (rowCount = 0)
            {
                //Createa Music instance from line. Exclude a blank line
                if(currentCSVLine.length() != 0)
                {
                    Music row(CurrentCSVLine);
                    musicVector.push_back(row);
                }
            }
            rowCount++;
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    
    return musicVector;
}
