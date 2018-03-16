//
// Created by thill on 3/16/18.
//

#ifndef LEARN_OPEN_GL_TRIANGLE_H
#define LEARN_OPEN_GL_TRIANGLE_H

#include "vector"
#include "line.h"

class triangle {

private:
    bool isMovingForward;
    void moveForward();
    void moveBackward();
    void compute_center();
    float center_x;
    float center_y;

public:
    triangle();
    void move();
    void rotate();
    float vertices[1024];
    unsigned int indices[1024];
    void render(unsigned int VAO, unsigned int VBO, int shaderProgram);
    void inverse_direction();
    line gen_line_1();


};


#endif //LEARN_OPEN_GL_TRIANGLE_H
