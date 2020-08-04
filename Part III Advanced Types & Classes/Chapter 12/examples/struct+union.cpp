#include <iostream>

using namespace std;

struct circle {
    int radius; // Radius of the circle in
};

struct rectangle {
    int height, width; // Size of the rectangle in
};

struct triangle {
    int base; // Length of the triangle's
    int height; // Height of the triangle in
};

const int SHAPE_CIRCLE = 0; // Shape is a circl
const int SHAPE_RECTANGLE = 1; // Shape is a recta
const int SHAPE_TRIANGLE = 2; // Shape is a triangle

//due to union, a shape can only be one kind at the time

struct shape {
    int kind; // What kind of shape is
    union shape_union { // Union to hold shape in
        struct circle circle_data; // Data for circle
        struct rectangle rectangle_data; // Data for rectangle
        struct triangle triangle_data; // Data for triangle
    } data;
};

int main(){

    struct shape a_shape;

    a_shape.kind = SHAPE_CIRCLE;
    a_shape.data.circle_data.radius = 50;


    return (0);
}