//
// Created by Michael Snowden on 4/17/16.
//

#ifndef COLLADAVIEWER_FILEIO_H
#define COLLADAVIEWER_FILEIO_H

#include "CGL/CGL.h"
#include "rply.h"

using namespace CGL;
using namespace std;

class Parser {
public:
    Parser();
    int parsePly(char *ifile, vector<Vector3D> &vertices, vector<Vector3D> &normals);
    int writeTxt(char *ofile, vector<Vector3D> &vertices, vector<Vector3D> &normals);
private:

};

#endif //COLLADAVIEWER_FILEIO_H
