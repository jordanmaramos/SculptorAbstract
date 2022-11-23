/**
 * @file	PutSphere.cpp
 * @brief	Implementação do construtor da classe PutSphere e do método draw.
 * @author	Jordan Marques
 * @author  Pedro Rêgo
 * @date	11/2022
 */

#include "PutSphere.h"

/**
 * @brief Classe PutSphere
 * @details	Construtor da classe.
 */
PutSphere::PutSphere(int xcenter, int ycenter, int zcenter, int radius, int dimx, int dimy, int dimz, int r, int g, int b, int a){
    this->xcenter = xcenter; this->ycenter = ycenter; this->zcenter = zcenter; 
    this->radius = radius; this->dimx = dimx; this->dimy = dimy; this->dimz = dimz;
    this->r = r; this->g = g; this->b = b; this->a = a;
}

/**
 * @details	Método draw que adiciona uma esfera.
 */
void PutSphere :: draw(Sculptor &t){
    if(t.cordValid(this->xcenter, this->ycenter, this->zcenter)){
        t.setColor(this->r, this->g, this->b, this->a);
        for(int i=0; i<this->dimz; i++){
            for(int j=0; j<this->dimx; j++){
                for(int k=0; k<this->dimy; k++){
                    if(t.isSphere(i, j, k, this->xcenter, this->ycenter, this->zcenter, this->radius)){
                        t.putVoxel(j,k,i);
                    }
                }
            }
        }
    }
}