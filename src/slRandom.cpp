#include "slRandom.h"

using namespace std;

float slRandom::regular(){

    gettimeofday(&t, NULL);
    srand((unsigned)t.tv_usec);
    return ( (float) (double)rand()/(double)RAND_MAX );
    
}

int slRandom::range(int st, int ed){

    gettimeofday(&t, NULL);
    srand((unsigned)t.tv_usec);
    float range = (float) ( (ed+1) - st);

    return (int)(regular()*range)+st;

    
}

int slRandom::dice(){

    gettimeofday(&t, NULL);
    srand((unsigned)t.tv_usec);
    return rand()%6+1;
    
}
