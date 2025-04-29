#ifndef RENDERER_H
#define RENDERER_H

class Renderer {
public:
    Renderer();
    ~Renderer();

    void initialize();
    void render();
    void shutdown();
};

#endif // RENDERER_H
