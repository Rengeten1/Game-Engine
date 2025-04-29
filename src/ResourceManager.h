#ifndef RESOURCE_MANAGER_H
#define RESOURCE_MANAGER_H

#include <string>
#include <unordered_map>

class ResourceManager {
public:
    ResourceManager();
    ~ResourceManager();

    void loadResource(const std::string& resourceName, const std::string& filePath);
    void unloadResource(const std::string& resourceName);
    void* getResource(const std::string& resourceName) const;

private:
    std::unordered_map<std::string, void*> resources;
};

#endif // RESOURCE_MANAGER_H
