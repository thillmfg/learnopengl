//
// Created by thill on 3/16/18.
//

#ifndef LEARN_OPEN_GL_LINE_H
#define LEARN_OPEN_GL_LINE_H


class line {
private:

public:
    float vertices[6];
    void render(unsigned int VAO, unsigned int VBO, int shaderProgram);

    line(const float *vertices);
};


#endif //LEARN_OPEN_GL_LINE_H
