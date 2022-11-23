#ifndef PUTSPHERE_H
#define PUTSPHERE_H
#include "FiguraGeometrica.h"

class PutSphere : public FiguraGeometrica{
protected:
    int xcenter, ycenter, zcenter, radius, dimx, dimy, dimz;
public:
    PutSphere(int xcenter, int ycenter, int zcenter, int radius, int dimx, int dimy, int dimz, int r, int g, int b, int a);
    void draw(Sculptor &t);
};

#endif // PUTSPHERE_H