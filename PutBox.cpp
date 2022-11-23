/**
 * @file	PutBox.cpp
 * @brief	Implementação do construtor da classe PutBox e do método draw.
 * @author	Jordan Marques
 * @author  Pedro Rêgo
 * @date	11/2022
 */

#include "PutBox.h"
#include "Sculptor.h"

/**
 * @brief Classe PutBox
 * @details	Construtor da classe.
 */
PutBox::PutBox(int x0, int x1, int y0, int y1, int z0, int z1, int r, int g, int b, int a){
    this->x0 = x0-1; this->x1 = x1-1; this->y0 = y0-1; this->y1 = y1-1; this->z0 = z0-1; this->z1 = z1-1;
    this->r = r; this->g = g; this->b = b; this->a = a;
}

/**
 * @details	Método draw que adiciona uma caixa.
 */
void PutBox::draw(Sculptor &t){
    t.setColor(this->r, this->g, this->b, this->a);
    if(x1 >= x0 && y1 >= y0 && z1 >= z0){
        for(int i=z0; i<=z1; i++){
            for(int j=x0; j<=x1; j++){
                for(int k=y0; k<=y1; k++){
                    if(t.cordValid(j,k,i)){
                        t.putVoxel(j,k,i);
                    }
                }
            }
        }
    }
}