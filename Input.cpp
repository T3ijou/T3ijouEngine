#include "stdafx.h"
#include "Engine.h"
 
void Engine::input()
{
    // Обрабатываем нажатие Escape
    if (Keyboard::isKeyPressed(Keyboard::Escape))
    {
        m_Window.close();
    }
 
    // Обрабатываем нажатие клавиш движения
    if (Keyboard::isKeyPressed(Keyboard::A))
    {
        m_Person.moveLeft();
    }
    else
    {
        m_Person.stopLeft();
    }
 
    if (Keyboard::isKeyPressed(Keyboard::D))
    {
        m_Person.moveRight();
    }
    else
    {
        m_Person.stopRight();
    }                       
 
}
