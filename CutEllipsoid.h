#ifndef CUTELLIPSOID_H
#define CUTELLIPSOID_H
#include "FiguraGeometrica.h"

class CutEllipsoid : public FiguraGeometrica{
protected:
    int xcenter, ycenter, zcenter, rx, ry, rz, dimx, dimy, dimz;
public:
    CutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz, int dimx, int dimy, int dimz);
    void draw(Sculptor &t);
};

#endif // CUTELLIPSOID_H