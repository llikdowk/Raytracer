#include "Scene.h"
#include "Raytracer.h"

int main() {
    Scene scene;
    scene.addObject(new Sphere(0, 0, -2, 1))
         .addObject(new Sphere(0, 1, -2, 0.5f, Material(Color::blue)));

    Raytracer raytracer(scene, 1366, 768, 90);
    raytracer.run();
    return 0;
}