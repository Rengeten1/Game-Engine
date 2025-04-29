#ifndef COMPONENT_H
#define COMPONENT_H

class Component {
public:
    virtual ~Component() = default;
    virtual int getType() const = 0;

protected:
    int type;
};

#endif // COMPONENT_H
