//
// Created by Jingye.Shen on 2022/9/21.
//

#pragma once

#include "entt/entt.hpp"

class Entity;

class Scene {
public:
    Scene();
    ~Scene();

    Entity CreateEntity(const std::string& name=std::string());

private:
    template<typename T>
    void OnComponentAdded(Entity entity,T& component);

private:
    entt::registry m_Registry;
    friend class Entity;

};


