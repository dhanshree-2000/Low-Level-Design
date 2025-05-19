#ifndef TEXTEDITOR_H
#define TEXTEDITOR_H

#include <string>
#include "EditorMemento.h"

class TextEditor {
private:
    std::string content;
public:
    void write(const std::string& text);
    EditorMemento save() const;
    void restore(const EditorMemento& memento);
    std::string getContent() const;
};

#endif