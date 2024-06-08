#include<vecgfx/VecGFX.hpp>

using namespace VecGFX;

class CelestialObject{
    public:
        CelestialObject(Vec4 startingPos, float radius): pos(startingPos), radius(radius){}
        CelestialObject(float startingX, float startingY, float radius): pos(Vec4(startingX, startingY, 0, 1)), radius(radius){}
        Vec4* getPoints();
        Vec4 getPos();
        void setPos();
        float getRadius();
        void setRadius();
    private:
        Vec4 pos;
        float radius;

};