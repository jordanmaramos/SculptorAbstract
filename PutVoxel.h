#ifndef PUTVOXEL_H
#define PUTVOXEL_H
#include "FiguraGeometrica.h"

class PutVoxel : public FiguraGeometrica {
protected:
    int x,y,z; // Coordenadas no espaço tridimensional do voxel
public:
    PutVoxel(int x, int y, int z, int r, int g, int b, int a);
    void draw(Sculptor &t);
};

#endif // PUTVOXEL_H