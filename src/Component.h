#ifndef COMPONENT_H
#define COMPONENT_H

class Component {
public:
    Component(); // Explicitly declare the constructor
    virtual ~Component() = default;
    virtual int getType() const = 0;

protected:
    int type;
};

#endif // COMPONENT_H
