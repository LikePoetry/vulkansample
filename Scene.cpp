//
// Created by Jingye.Shen on 2022/9/21.
//

#include "Scene.h"
#include "Entity.h"
#include "Components.h"

Scene::Scene()
{
}

Scene::~Scene()
{
}

Entity Scene::CreateEntity(const std::string &name)
{
    Entity entity = {m_Registry.create(), this};
    return  entity;
}

template<typename T>
void Scene::OnComponentAdded(Entity entity, T &component)
{
    //static_assert(false);
}

template<>
void Scene::OnComponentAdded<TransformComponent>(Entity entity, TransformComponent& component)
{

}



