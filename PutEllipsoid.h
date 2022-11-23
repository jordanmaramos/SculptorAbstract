#ifndef PUTELLIPSOID_H
#define PUTELLIPSOID_H
#include "FiguraGeometrica.h"

class PutEllipsoid : public FiguraGeometrica{
protected:
    int xcenter, ycenter, zcenter, rx, ry, rz, dimx, dimy, dimz;
public:
    PutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry,int rz, int dimx, int dimy, int dimz, int r, int g, int b, int a);
    void draw(Sculptor &t);
};

#endif // PUTELLIPSOID_H