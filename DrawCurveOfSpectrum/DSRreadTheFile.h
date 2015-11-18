#ifndef DSRREADTHEFILE_H
#define DSRREADTHEFILE_H

#include <vector>

using std;
using std::vector;

class DSReadTheFile
{
        std::vector<double> ivDSData;
        //for save the date in to a vector <double>
    public:
        void DSReadTheFile(){}
        void ~DSReadTheFile(){}
        void DSOpenThefile(){}
        std::vector<double>* DSGetTheVector(){}

};

#endif // DSRREADTHEFILE_H
