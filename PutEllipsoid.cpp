/**
 * @file	PutEllipsoid.cpp
 * @brief	Implementação do construtor da classe PutEllipsoid e do método draw.
 * @author	Jordan Marques
 * @author  Pedro Rêgo
 * @date	11/2022
 */

#include "PutEllipsoid.h"

/**
 * @brief Classe PutEllipsoid
 * @details	Construtor da classe.
 */
PutEllipsoid :: PutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry,int rz, int dimx, int dimy, int dimz, int r, int g, int b, int a){
    this->xcenter = xcenter; this->ycenter = ycenter; this->zcenter = zcenter; 
    this->rx = rx; this->ry = ry; this->rz = rz; 
    this->dimx = dimx; this->dimy = dimy; this->dimz = dimz;
    this->r = r; this->g = g; this->b = b; this->a = a;  
}

/**
 * @details	Método draw que adiciona um elipse.
 */
void PutEllipsoid :: draw(Sculptor &t){
    if(t.cordValid(this->xcenter, this->ycenter, this->zcenter)){
        t.setColor(this->r, this->g, this->b, this->a);
        for(int i=0; i<this->dimz; i++){
            for(int j=0; j<this->dimx; j++){
                for(int k=0; k<this->dimy; k++){
                    if(t.isEllipse(i, j, k, this->xcenter, this->ycenter, this->zcenter, this->rx, this->ry, this->rz)){
                        t.putVoxel(j,k,i);
                    }
                }
            }
        }
    }
}