//
// Created by Max Rosoff on 10/19/2019.
//

#ifndef GRAPHICS_MATERIAL_H
#define GRAPHICS_MATERIAL_H

#include <string>
#include <iostream>

#include "../Matrix/Vector.h"

class Material {

public:

    Material() = default;
    Material(const Material &) = default;
    Material &operator=(const Material &) = default;
    ~Material() = default;

    explicit Material(const std::string &, const Vector &, int);

    std::string name;
    Vector albedo;

    // Constructor Parameter to Determine Material Property as an Integer

    // 0 -> Lambertian
    // 1 -> Light
    // 2 -> Mirror
    // 3 -> Glass

    bool isLight = false;
    bool isMirror = false;
    bool isGlass = false;
};

std::ostream &operator<<(std::ostream &, const Material &);


#endif //GRAPHICS_MATERIAL_H
