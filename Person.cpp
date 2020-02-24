#include "stdafx.h"
#include "person.h"

Person::Person()
{
    //Скорость персонажа
    m_Speed = 400;

    //Привязываем текстуру к спрайту
    m_Texture.loadFromFile("src/person.png");
    m_Sprite.setTexture(m_Texture);

    //Начальное положение персонажа в пикселях
    m_Position.x = 500;
    m_Position.y = 800;
}

//Делаем приватный спрайт доступным для функции draw()
Sprite Person::getSprite()
{
    return m_Sprite;
}

void Person::moveRight()
{
    m_RightPressed = true;
}

void Person::moveLeft()
{
    m_LeftPressed = true;
}

void Person::stopRight()
{
    m_RightPressed = false;
}

void Person::stopLeft()
{
    m_LeftPressed = false;
}

//Двигаем Боба на основании пользовательского ввода в этом кадре, прошедшего времени и скорости
void Person::update(float elapsedTime)
{
    if (m_RightPressed)
    {
        m_Position.x += m_Speed * elapsedTime;
    }

    if (m_LeftPressed)
    {
        m_Position.x -= m_Speed * elapsedTime;
    }
    //Сдвигаем спрайт
    m_Sprite.setPosition(m_Position);
}