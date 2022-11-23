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

const char* TesteEscultor = "teste.OFF";
int main(){
    Sculptor *sculptor;
    Reader reader;

    //Desenha
    std::vector<FiguraGeometrica*> figure = reader.Read("C:/Users/Jordan Marques/OneDrive/Documentos/teste.txt");
    sculptor = new Sculptor(reader.getDimx(), reader.getDimy(), reader.getDimz());
    for(double i = 0; i < figure.size(); i++){
        figure[i]->draw(*sculptor);
    }
    
    //Armazena
    sculptor->writeOFF(TesteEscultor);
    
    //Delete figure
    for(double i = 0; i < figure.size();i++){
        delete figure[i];
    }

    //Delete sculptor
    delete sculptor;
    return 0;
}