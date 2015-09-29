#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <sys/time.h>

typedef struct timeval timeval;

class slRandom {
    
    public:
        slRandom(){
            
            
        }
        
        float regular();
        int range(int st, int ed);
        int dice();
        timeval t;
    
};