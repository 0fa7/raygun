#include "RaygunMainWindow.h"

#include "imgui.h"

RaygunMainWindow::RaygunMainWindow() : show_(true)
{

}

bool RaygunMainWindow::Begin(std::string name)
{
    return ImGui::Begin(name.c_str(), &show_);
}

void RaygunMainWindow::End()
{
    ImGui::End();
}

void RaygunMainWindow::Update()
{
    if (show_)
    {
        if (!Begin("raygun"))
            End();
        else
        {
            if (ImGui::Button("render"))
            {
                // do something
            }
            End();
        }
    }
}