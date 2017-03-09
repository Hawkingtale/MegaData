//
//  Timer.cpp
//  MegaData
//
//  Created by Hachtel, Matthew on 3/9/17.
//  Copyright © 2017 Hachtel, Matthew. All rights reserved.
//

#include "Timer.hpp"
#include <iostream>

using namespace std;

Timer :: Timer()
{
    executionTime = 0;
}

void Timer :: resetTimer()
{
    executionTime = 0;
}

void Timer :: startTimer()
{
    executionTime = clock();
}

void Timer :: stopTimer()
{
    executionTime = clock() - executionTime;
}

long Timer :: getExecutionTimeInMicroseconds()
{
    return executionTime;
}

void Timer :: displayTimerInformation()
{
    cout << "It took this long to execute: " << executionTime << " microseconds." << endl;
    cout << "That is this many seconds: " << executionTime/CLOCKS_PER_SEC << endl;
}
