#ifndef CUTVOXEL_H
#define CUTVOXEL_H
#include "FiguraGeometrica.h"

class CutVoxel : public FiguraGeometrica {
protected:
    int x,y,z; // Coordenadas no espaço tridimensional do voxel
public:
    CutVoxel(int x, int y, int z);
    void draw(Sculptor &t);
};

#endif // CUTVOXEL_H