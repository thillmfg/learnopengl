//
// Created by thill on 3/16/18.
//

#include <glad/glad.h>
#include "line.h"
void line::render(unsigned int VAO, unsigned int VBO, int shaderProgram) {
    glBindBuffer(GL_ARRAY_BUFFER, VBO);
    glBufferData(GL_ARRAY_BUFFER, sizeof(vertices),vertices, GL_DYNAMIC_DRAW);
    glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    // draw our first triangle
    glUseProgram(shaderProgram);
    glBindVertexArray(VAO); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized
    glDrawArrays(GL_LINE, 0, 1);
}

line::line(const float *vertices_in)  {
    for (int i = 0; i < 6; ++i) {
        vertices[i] = vertices_in[i];
    }
}
