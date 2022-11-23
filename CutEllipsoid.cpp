/**
 * @file	CutEllipsoid.cpp
 * @brief	Implementação do construtor da classe CutEllipsoid e do método draw.
 * @author	Jordan Marques
 * @author  Pedro Rêgo
 * @date	11/2022
 */

#include "CutEllipsoid.h"

/**
 * @brief Classe CutEllipsoid
 * @details	Construtor da classe.
 */
CutEllipsoid::CutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz, int dimx, int dimy, int dimz){
    this->xcenter = xcenter; this->ycenter = ycenter; this->zcenter = zcenter;
    this->rx = rx; this->ry = ry; this->rz = rz;
    this->dimx = dimx; this->dimy = dimy; this->dimz = dimz;
}

/**
 * @details	Método draw que apaga em formato de elipse.
 */
void CutEllipsoid::draw(Sculptor &t){
    if(t.cordValid(this->xcenter, this->ycenter, this->zcenter)){
        t.setColor(this->r, this->g, this->b, this->a);
        for(int i=0; i<this->dimz; i++){
            for(int j=0; j<this->dimx; j++){
                for(int k=0; k<this->dimy; k++){
                    if(t.isEllipse(i, j, k, this->xcenter, this->ycenter, this->zcenter, this->rx, this->ry, this->rz)){
                        t.cutVoxel(j,k,i);
                    }
                }
            }
        }
    }
}