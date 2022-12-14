/**
 * @file	Sculptor.h
 * @brief	Definição da classe Sculptor, com atributos e métodos.
 * @author	Jordan Marques
 * @author  Pedro Rêgo
 * @date	11/2022
 */

#ifndef SCULPTOR_H
#define SCULPTOR_H
#include <string>

/**
 * @struct Voxel
 * @details Estrutura com as propriedades do voxel: cor, sua transparência, e estado de inclusão.
 */
struct Voxel {
  float r,g,b; // Colors
  float a;     // Transparency
  bool isOn;   // Included or not
};

/**
 * @class   Sculptor 
 * @brief   Classe que representa o escultor.
 * @details  Atributos do escultor, tais como: a matriz 3D de voxels, dimensões da matriz e cores. 
 * */
class Sculptor {
private:
  Voxel ***v;     // 3D matrix
  int nx,ny,nz;   // Dimensions
  float r,g,b,a;  // Current drawing color
public:
  Sculptor(int _nx, int _ny, int _nz);
  ~Sculptor();
  bool cordValid(int x, int y, int z);
  bool isSphere(int z, int x, int y, int xc, int yc, int zc, int radius);
  bool isEllipse(int z, int x, int y, int xc, int yc, int zc, int rx, int ry, int rz);
  void setColor(float r, float g, float b, float a);
  void putVoxel(int x, int y, int z);
  void cutVoxel(int x, int y, int z);
  void putBox(int x0, int x1, int y0, int y1, int z0, int z1);
  void cutBox(int x0, int x1, int y0, int y1, int z0, int z1);
  void putSphere(int xcenter, int ycenter, int zcenter, int radius);
  void cutSphere(int xcenter, int ycenter, int zcenter, int radius);
  void putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
  void cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
  void writeOFF(const char* filename);
};

#endif // SCULPTOR_H
