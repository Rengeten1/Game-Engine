#ifndef ENGINE_H
#define ENGINE_H

class Engine {
public:
    Engine();
    ~Engine();

    void initialize();
    void run();
    void shutdown();

private:
    bool isRunning;
};

#endif // ENGINE_H
