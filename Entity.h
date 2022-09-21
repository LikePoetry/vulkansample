//
// Created by Jingye.Shen on 2022/9/21.
//

#pragma once

#include "entt/entt.hpp"
#include "Scene.h"

class Entity {
public:
    Entity()=default;
    Entity(entt::entity handle,Scene* scene);

    template<typename T, typename... Args>
    T& AddComponent(Args&&... args)
    {
        T& component = m_Scene->m_Registry.emplace<T>(m_EntityHandle, std::forward<Args>(args)...);
        m_Scene->OnComponentAdded<T>(*this, component);
        return component;
    }

private:
    entt::entity m_EntityHandle{entt::null};
    Scene* m_Scene = nullptr;
};
