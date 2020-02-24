#pragma once
#include <SFML/Graphics.hpp>

class Person
{
    private:
        //Позиция персонажа
        Vector2f m_Position;

        //Объявляем объект Sprite
        Sprite m_Sprite;

        //Добавляем текстуру
        Texture m_Texture;

        //Bool - переменные для отслеживания движения
        bool m_LeftPressed;
        bool m_RightPressed;

        //Скорость персонажа в пикселях в секунду
        float m_Speed;
    
    public:
        //Настройка персонажа в конструкторе
        Person();

        //Отправка спрайта в main функцию
        Sprite getSprite;

        //Для движения персонажа
        void moveRight();
        void moveLeft();

        //Прекращение движения
        void stopRight();
        void stopLeft();

        //Обновление сцены в каждом кадре
        void update(float elapsedTime);
};