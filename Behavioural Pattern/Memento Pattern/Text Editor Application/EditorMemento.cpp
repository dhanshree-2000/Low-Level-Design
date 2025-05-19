#include "EditorMemento.h"

EditorMemento::EditorMemento(const std::string& text) : content(text) {}

std::string EditorMemento::getContent() const {
    return content;
}