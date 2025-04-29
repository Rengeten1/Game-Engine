#include "ResourceManager.h"
#include <iostream>

ResourceManager::ResourceManager() {}

ResourceManager::~ResourceManager() {
    for (auto& resource : resources) {
        delete static_cast<int*>(resource.second);
    }
    resources.clear();
}

void ResourceManager::loadResource(const std::string& resourceName, const std::string& filePath) {
    // Placeholder for actual resource loading logic
    int* resource = new int; // Placeholder for actual resource type
    resources[resourceName] = resource;
    std::cout << "Resource " << resourceName << " loaded from " << filePath << std::endl;
}

void ResourceManager::unloadResource(const std::string& resourceName) {
    auto it = resources.find(resourceName);
    if (it != resources.end()) {
        delete static_cast<int*>(it->second);
        resources.erase(it);
        std::cout << "Resource " << resourceName << " unloaded." << std::endl;
    }
}

void* ResourceManager::getResource(const std::string& resourceName) const {
    auto it = resources.find(resourceName);
    if (it != resources.end()) {
        return it->second;
    }
    return nullptr;
}
