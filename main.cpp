#include <iostream>
#include "Entity.h"
#include "Components.h"


int main(){
    Scene m_activeScene;
    auto square = m_activeScene.CreateEntity("Green Square");

    square.AddComponent<TransformComponent>();
}