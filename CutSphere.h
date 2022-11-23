#ifndef CUTSPHERE_H
#define CUTSPHERE_H
#include "FiguraGeometrica.h"

class CutSphere : public FiguraGeometrica{
protected:
    int xcenter, ycenter, zcenter, radius, dimx, dimy, dimz;
public:
    CutSphere(int xcenter, int ycenter, int zcenter, int radius, int dimx, int dimy, int dimz);
    void draw(Sculptor &t);
};

#endif // CUTSPHERE_H