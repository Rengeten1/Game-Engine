#include "Entity.h"

Entity::Entity() {}

Entity::~Entity() {}

void Entity::addComponent(std::shared_ptr<Component> component) {
    components.push_back(component);
}

void Entity::removeComponent(std::shared_ptr<Component> component) {
    components.erase(std::remove(components.begin(), components.end(), component), components.end());
}

std::shared_ptr<Component> Entity::getComponent(int componentType) {
    for (auto& component : components) {
        if (component->getType() == componentType) {
            return component;
        }
    }
    return nullptr;
}
