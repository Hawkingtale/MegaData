//
//  Timer.hpp
//  MegaData
//
//  Created by Hachtel, Matthew on 3/9/17.
//  Copyright © 2017 Hachtel, Matthew. All rights reserved.
//

#ifndef Timer_hpp
#define Timer_hpp

#include <time.h>

class Timer
{
private:
    clock_t executionTime;
public:
    Timer();
    void startTimer();
    void stopTimer();
    void resetTimer();
    void displayTimerInformation();
    long getExecutionTimeInMicroseconds();
};


#endif /* Timer_hpp */
