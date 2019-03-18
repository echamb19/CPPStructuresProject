//
//  LinearTester.cpp
//  CPPStructuresProject
//
//  Created by Chambers, Eden on 2/13/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "LinearTester.hpp"

void LinearTester :: testVsSTL()
{
    Timer crimeTimerSTL, crimeTimerOOP, musicSTL, musicOOP;
    
    crimeTimerSTL.startTimer();
    vector<CrimeData> crimes = FileController :: readCrimeDataToVector("/Users/echa3557/Documents/C++ Projects/CPPStructuresProject/CPPStructuresProject/Resources/crime.csv");
    crimeTimerSTL.stopTimer();
    
    crimeTimerOOP.startTimer();
    LinkedList<CrimeData> moreCrimes = FileController :: readDataToList("/Users/echa3557/Documents/C++ Projects/CPPStructuresProject/CPPStructuresProject/Resources/crime.csv");
    crimeTimerOOP.stopTimer();
    
    cout << "This is the STL Read time: " << endl;
    crimeTimerSTL.displayInformation();
    cout << "This is the OOP Node Read time: " << endl;
    crimeTimerOOP.displayInformation();
    cout << "A difference of: " << crimeTimerOOP.getTimeInMicroseconds() - crimeTimerSTL.getTimeInMicroseconds() << " microseconds" << endl;
    
    musicSTL.startTimer();
    vector<Music> tunez = FileController :: musicDataToVector("/Users/echa3557/Documents/C++ Projects/CPPStructuresProject/CPPStructuresProject/Resources/music.csv");
    musicSTL.stopTimer();
    
    musicOOP.startTimer();
    LinkedList<Music> musicList = FileController :: musicDataToList("/Users/echa3557/Documents/C++ Projects/CPPStructuresProject/CPPStructuresProject/Resources/music.csv");
    musicOOP.stopTimer();
    
    cout << "This is the STL Read time: " << endl;
    musicSTL.displayInformation();
    cout << "This is the OOP Node Read time: " << endl;
    musicOOP.displayInformation();
    cout << "A difference of: " << musicOOP.getTimeInMicroseconds() - musicSTL.getTimeInMicroseconds() << " microseconds." << endl;
    
    crimeTimerOOP.resetTimer();
    crimeTimerSTL.resetTimer();
    musicOOP.resetTimer();
    musicSTL.resetTimer();
    
    // This Times getting a Random Index with our Method and the Standard Method 
    int randomIndex = rand() % moreCrimes.getSize();
    
    crimeTimerSTL.startTimer();
    crimes[randomIndex];
    crimeTimerSTL.stopTimer();
    
    crimeTimerOOP.startTimer();
    moreCrimes.getFromIndex(randomIndex);
    crimeTimerOOP.stopTimer();
    
    cout << "This is the STL random retrieval: " << endl;
    crimeTimerSTL.displayInformation();
    cout << "This is the OOP Node random retrieval: " << endl;
    crimeTimerOOP.displayInformation();
    cout << "A difference of: " << crimeTimerOOP.getTimeInMicroseconds() - crimeTimerSTL.getTimeInMicroseconds() << " microseconds." << endl;
    
    randomIndex = rand() % musicList.getSize();
    
    musicSTL.startTimer();
    tunez[randomIndex];
    musicSTL.stopTimer();
    
    musicOOP.startTimer();
    musicList.getFromIndex(randomIndex);
    musicOOP.stopTimer();
    
    cout << "'This is the STL random retrieval: " << endl;
    musicSTL.displayInformation();
    cout << "This is the OOP Node random retrieval: " << endl;
    musicOOP.displayInformation();
    cout << "A difference of: " << musicOOP.getTimeInMicroseconds() - musicSTL.getTimeInMicroseconds() << " microseconds." << endl;
    
    crimeTimerOOP.resetTimer();
    crimeTimerSTL.resetTimer();
    musicOOP.resetTimer();
    musicSTL.resetTimer();
}

void LinearTester :: testVsStack()
{
    vector<CrimeData> crimes = FileController :: readCrimeDataToVector("/Users/echa3557/Documents/C++ Projects/CPPStructuresProject/CPPStructuresProject/Resources/crime.csv");
    Stack<CrimeData> stackOfCrime;
    for(int n = 0; n < 10; n++)
    {
        stackOfCrime.push(crimes[n]);
    }
    
    while(stackOfCrime.getSize() > 0)
    {
        stackOfCrime.remove(0);

    }
}

void LinearTester :: testVsQueue()
{
    vector<CrimeData> crimes = FileController :: readCrimeDataToVector("/Users/echa3557/Documents/C++ Projects/CPPStructuresProject/CPPStructuresProject/Resources/crime.csv");
    Queue<CrimeData> queueOfCrime;
    for(int n = 0; n < 10; n++)
    {
        queueOfCrime.add(crimes[n]);
    }
    
    while(queueOfCrime.getSize() > 0)
    {
        queueOfCrime.dequeue();
    }
}

void LinearTester :: testVsDouble()
{
    vector<CrimeData> crimes = FileController :: readCrimeDataToVector("/Users/echa3557/Documents/C++ Projects/CPPStructuresProject/CPPStructuresProject/Resources/crime.csv");
    DoubleNode<CrimeData> doubleNodeOfCrime;
    for(int n = 0; n < 10; n++)
    {
       // doubleNodeOfCrime.setNext(crimes[n]);
    }
}
