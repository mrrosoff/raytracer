//
// Created by Max Rosoff on 10/19/2019.
//

#include "Material.h"

using namespace std;

Material::Material(const string &name, const Vector<3> &albedo, const int materialType) :

name(name), albedo(albedo)

{
    if(materialType == 1)
    {
        isLight = true;
    }

    else if(materialType == 2)
    {
        isMirror = true;
    }

    else if(materialType == 3)
    {
        isGlass = true;
    }
}