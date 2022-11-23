#ifndef CUTBOX_H
#define CUTBOX_H
#include "FiguraGeometrica.h"

class CutBox : public FiguraGeometrica {
protected:
    int x0, x1, y0, y1, z0, z1; // Coordenadas no espaço tridimensional do voxel
public:
    CutBox(int x, int x1, int y0, int y1, int z0, int z1);
    void draw(Sculptor &t);
};

#endif // CUTBOX_H