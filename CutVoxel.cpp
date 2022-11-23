/**
 * @file	CutVoxel.cpp
 * @brief	Implementação do construtor da classe CutVoxel e do método draw.
 * @author	Jordan Marques
 * @author  Pedro Rêgo
 * @date	11/2022
 */

#include "CutVoxel.h"
#include "Sculptor.h"

/**
 * @brief Classe CutVoxel
 * @details	Construtor da classe.
 */
CutVoxel :: CutVoxel(int x, int y, int z){
    this->x = x; this->y = y; this->y = y; this->z = z; 
}

/**
 * @details	Método draw que apaga um voxel.
 */
void CutVoxel :: draw(Sculptor &t){
    if(t.cordValid(this->x, this->y, this->z)){
        t.cutVoxel(this->x, this->y, this->z);
    } 
}