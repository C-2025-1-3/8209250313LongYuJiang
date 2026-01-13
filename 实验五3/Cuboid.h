#ifndef CUBOID_H
#define CUBOID_H

class Cuboid {
public:
    Cuboid();
    Cuboid(double l, double w, double h);

    void inputDimensions();
    double calculateVolume();
    void displayVolume();
    void displayAllInfo();

private:
    double length;
    double width;
    double height;
    double volume;
};
#endif 
