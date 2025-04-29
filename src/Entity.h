#ifndef ENTITY_H
#define ENTITY_H

#include <vector>
#include <memory>
#include "Component.h"

class Entity {
public:
    Entity();
    ~Entity();

    void addComponent(std::shared_ptr<Component> component);
    void removeComponent(std::shared_ptr<Component> component);
    std::shared_ptr<Component> getComponent(int componentType);

private:
    std::vector<std::shared_ptr<Component>> components;
};

#endif // ENTITY_H
