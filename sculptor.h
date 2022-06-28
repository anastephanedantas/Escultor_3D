#ifndef SCULTOR_H
#define SCULTOR_H
#include "voxel.hpp"
class Sculptor
{
private:
    Voxel ***v; // Matrix 3D
    int nx,ny,nz; // Dimens�es
    float r,g,b,a; // Propriedades do Voxel
    float fix;

public:
    Sculptor(int nx1, int ny1, int nz1);
    ~Sculptor();
    void setColor(float r1, float g1, float b1, float alpha);
    void putVoxel(int x, int y, int z);
    void cutVoxel(int x, int y, int z);
    void putBox(int x0, int x1, int y0, int y1, int z0, int z1);
    void cutBox(int x0, int x1, int y0, int y1, int z0, int z1);
    void putSphere(int xcenter, int ycenter, int zcenter, int radius);
    void cutSphere(int xcenter, int ycenter, int zcenter, int radius);
    void putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
    void cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
    void writeOFF(char *filename);

};
#endif // SCULTOR_H