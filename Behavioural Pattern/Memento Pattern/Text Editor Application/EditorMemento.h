#ifndef EDITORMEMENTO_H
#define EDITORMEMENTO_H

#include <string>

class EditorMemento {
private:
    std::string content;
public:
    EditorMemento(const std::string& text);
    std::string getContent() const;
};

#endif