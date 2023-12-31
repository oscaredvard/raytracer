#ifndef RAY_H
#define RAY_H

#include "vec3.h"

class ray {
    public:
        // Contructors
        ray() {}

        ray(const point3& origin, const vec3& direction) : orig(origin), dir(direction) {}

        // Getters
        point3 origin() const { return orig; }
        vec3 direction() const { return dir; }

        // Get position 
        point3 at(double t) const {
            return orig + t*dir;
        }

    private:
        // Attributes
        point3 orig;
        vec3 dir;
}; 

#endif
