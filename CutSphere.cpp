/**
 * @file	CutSphere.cpp
 * @brief	Implementação do construtor da classe CutSphere e do método draw.
 * @author	Jordan Marques
 * @author  Pedro Rêgo
 * @date	11/2022
 */

#include "CutSphere.h"

/**
 * @brief Classe CutSphere
 * @details	Construtor da classe.
 */
CutSphere::CutSphere(int xcenter, int ycenter, int zcenter, int radius, int dimx, int dimy, int dimz){
    this->xcenter = xcenter; this->ycenter = ycenter; this->zcenter = zcenter; 
    this->radius = radius; this->dimx = dimx; this->dimy = dimy; this->dimz = dimz;
}

/**
 * @details	Método draw que apaga uma esfera.
 */
void CutSphere :: draw(Sculptor &t){
    if(t.cordValid(this->xcenter, this->ycenter, this->zcenter)){
        for(int i=0; i<this->dimz; i++){
            for(int j=0; j<this->dimx; j++){
                for(int k=0; k<this->dimy; k++){
                    if(t.isSphere(i, j, k, this->xcenter, this->ycenter, this->zcenter, this->radius)){
                        t.cutVoxel(j,k,i);
                    }
                }
            }
        }
    }
}