#ifndef READER_H
#define READER_H
#include "FiguraGeometrica.h"
#include <vector>
#include <string>

class Reader{
    int dimx, dimy, dimz;
    float r, g, b, a;
public:
    Reader();
    std::vector<FiguraGeometrica*> Read(std::string filename);
    int getDimx();
    int getDimy();
    int getDimz();
};

#endif // READER_H