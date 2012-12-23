#ifndef ENGINE_H
#define ENGINE_H


class Engine
{
    public:
        Engine();
        void init();
        bool mainGameLoop();
    protected:
    private:
        bool createWindow();
};

#endif // ENGINE_H
