#include "stdafx.h"
#include "Engine.h"
 
using namespace sf;
 
void Engine::update(float dtAsSeconds)
{
    m_Person.update(dtAsSeconds);
}
