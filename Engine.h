#pragma once
#include <SFML/Graphics.hpp>
#include "Person.h"

using namespace sf;

class Engine
{
    private:
        RenderWindow m_Window;

        //Объявляем спрайт и текстуру фона
        Sprite m_BackgroundSprite;
        Texture m_BackgroundTexture;

        //Экземпляр персонажа
        Person m_Person;

        void input();
        void update(dtAsSeconds);
        void draw();

    public:
        //Конструктор движка
        Engine();

        //Функция start вызывает все приватные функции
        void start();
};