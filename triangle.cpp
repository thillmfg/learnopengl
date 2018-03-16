//
// Created by thill on 3/16/18.
//

#include <glad/glad.h>
#include <iostream>
#include <vector>
#include "triangle.h"

triangle::triangle() {

    vertices[0] = 0.5f;
    vertices[1] = 0.5f;
    vertices[2] = 0.0f;


    vertices[3] = 0.5f;
    vertices[4] = -0.5f;
    vertices[5] = 0.0f;

    vertices[6] = -0.5f;
    vertices[7] = -0.5f;
    vertices[8] = 0.0f;

    vertices[9] = -0.5f;
    vertices[10] = 0.5f;
    vertices[11] = 0.0f;

    isMovingForward = true;
    indices[0] = 0;
    indices[1] = 1;
    indices[2] = 3;
    indices[3] = 1;
    indices[4] = 2;
    indices[5] = 3;

    compute_center();
}

void triangle::moveForward() {
    vertices[0] += 0.005;
    vertices[1] += 0.005;
    if(vertices[1] == 0.75 && vertices[0] == 0.75) {
        vertices[0] -= 0.005;
        vertices[1] -= 0.005;
        inverse_direction();
    }
}

void triangle::moveBackward() {
    vertices[0] -= 0.005;
    vertices[1] -= 0.005;
    if(vertices[0] ==  -0.5) {
        vertices[0] += 0.005;
        vertices[1] += 0.005;
        inverse_direction();
    }
}

void triangle::move() {
    if(isMovingForward) {
        moveForward();
    } else {
        moveBackward();
    }
}

void triangle::render(unsigned int VAO, unsigned int VBO, int shaderProgram) {
    glBindBuffer(GL_ARRAY_BUFFER, VBO);
    glBufferData(GL_ARRAY_BUFFER, sizeof(vertices),vertices, GL_DYNAMIC_DRAW);
    glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    // draw our first triangle
    glUseProgram(shaderProgram);
    glBindVertexArray(VAO); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

    glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);
}

void triangle::inverse_direction() {

    std::cout << "inverting direction." << std::endl;
    std::cout << "From: " << isMovingForward << " To: " << !isMovingForward << std::endl;
    isMovingForward = !isMovingForward;
}

void triangle::compute_center() {
    //x,y format
    // average x,y of all 3 points?
    float x = (vertices[0] + vertices[3] + vertices[6]) / 3;
    float y = (vertices[1] + vertices[4] + vertices[7]) / 3;
    center_x = x;
    center_y = y;
}

void triangle::rotate() {
    // find each points distance from center
    // +x,+y: ++x,--y
    // -x,+y: --x, --y
    // -x,-y: ++x, --y
    // -x

}

line triangle::gen_line_1() {
    float line_vertices[6] = {vertices[0], vertices[1], vertices[2], center_y, center_y, vertices[2]};
    return line(line_vertices);
}



