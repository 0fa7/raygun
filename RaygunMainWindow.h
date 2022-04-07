#pragma once

#include <string>

class RaygunMainWindow
{
public:
    RaygunMainWindow();
    void Update();
    bool Begin(std::string name);
    void End();
    void Show(){};

private:
    bool show_;
};