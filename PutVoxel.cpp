/**
 * @file	PutVoxel.cpp
 * @brief	Implementação do construtor da classe PutVoxel e do método draw.
 * @author	Jordan Marques
 * @author  Pedro Rêgo
 * @date	11/2022
 */

#include "PutVoxel.h"

/**
 * @brief Classe PutVoxel
 * @details	Construtor da classe.
 */
PutVoxel :: PutVoxel(int x, int y, int z, int r, int g, int b, int a){
    this->x = x; this->y = y; this->y = y; this->z = z; this->r = r; this->g = g; this->b = b; this->a = a;
}

/**
 * @details	Método draw que adiciona um voxel.
 */
void PutVoxel :: draw(Sculptor &t){
    t.setColor(this->r, this->g, this->b, this->a);
    if(t.cordValid(this->x, this->y, this->z)){
        t.putVoxel(this->x, this->y, this->z);
    } 
}