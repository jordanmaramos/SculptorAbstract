/**
 * @file	Reader.cpp
 * @brief	Implementação da classe que fará a leitura do arquivo txt com a escultura a ser desenhada.
 * @author	Jordan Marques
 * @author  Pedro Rêgo
 * @date	11/2022
 */

#include "Reader.h"
#include "FiguraGeometrica.h"
#include "Sculptor.h"
#include "PutVoxel.h"
#include "CutVoxel.h"
#include "PutBox.h"
#include "CutBox.h"
#include "PutEllipsoid.h"
#include "CutEllipsoid.h"
#include "PutSphere.h"
#include "CutSphere.h"

#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

/**
 * @brief Classe Reader
 * @details	Construtor da classe.
 */
Reader::Reader(){}

/**
 * @details	Método draw que retorna a dimensão de X.
 */
int Reader::getDimx(){
    return this->dimx;
}
/**
 * @details	Método draw que retorna a dimensão de Y.
 */
int Reader::getDimy(){
    return this->dimy;
}
/**
 * @details	Método draw que retorna a dimensão de Z.
 */
int Reader::getDimz(){
    return this->dimz;
}

/**
 * @details	Método Read que faz a leitura do arquivo e retorna um vetor de figuras.
 */
std::vector<FiguraGeometrica *> Reader::Read(std::string filename){
    std::vector<FiguraGeometrica*> figure;
    std::string s, token;
    std::stringstream ss;
    std::ifstream file;
    
    //Abre arquivo
    file.open(filename.c_str());

    //Se abriu corretamente
    if(!file.is_open()){
        exit(1);
    }

    //Se não há erros
    while (file.good()) {
        getline(file, s);
        if(file.good()){
            ss.clear();
            ss.str(s);
            ss >> token;
            
            if(token.compare("dim") ==0){
                ss >> dimx >> dimy >> dimz;
            }

            else if (token.compare("putvoxel")==0){
                int x,y,z;
                ss >> x >> y >> z >> r >> g >> b >> a;
                figure.push_back(new PutVoxel(x, y, z, r, g, b, a));
            }

            else if(token.compare("putbox")==0){
                int x0,xi,y0,yi,z0,zi;
                ss >> x0 >> xi >> y0 >> yi >> z0 >> zi >> r >> g >> b >> a;
                figure.push_back(new PutBox(x0,xi,y0,yi,z0,zi,r,g,b,a));
            }

            else if(token.compare("cutvoxel")==0){
                int x,y,z;
                ss >> x >> y >> z;
                figure.push_back(new CutVoxel(x,y,z));
            }

            else if(token.compare("cutbox") == 0){
                int x0, x1, y0, y1, z0, z1;
                ss >> x0 >> x1 >> y0 >> y1 >> z0 >> z1;
                figure.push_back(new CutBox(x0, x1, y0, y1, z0, z1));
            }

            else if(token.compare("putellipsoid") == 0){
                int xc, yc, zc, rx, ry, rz;
                ss >> xc >> yc >> zc >> rx >> ry >> rz;
                figure.push_back(new PutEllipsoid(xc, yc, zc, rx, ry, rz, dimx, dimy, dimz, r, g, b, a));
            }

            else if(token.compare("putellipsoid") == 0){
                int xc, yc, zc, rx, ry, rz;
                ss >> xc >> yc >> zc >> rx >> ry >> rz;
                figure.push_back(new CutEllipsoid(xc, yc, zc, rx, ry, rz, dimx, dimy, dimz));
            }

            else if(token.compare("putsphere") == 0){
                int xc, yc, zc, r;
                ss >> xc >> yc >> zc >> r;
                figure.push_back(new PutSphere(xc, yc, zc, r, dimx, dimy, dimz, r, g, b, a));
            }
            
            else if(token.compare("cutsphere") == 0){
                int xc, yc, zc, r;
                ss >> xc >> yc >> zc >> r;
                figure.push_back(new CutSphere(xc, yc, zc, r, dimx, dimy, dimz));
            }
        }
    }
    return figure;
}

