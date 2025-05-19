#include "TextEditor.h"

void TextEditor::write(const std::string& text) {
    content = text;
}

EditorMemento TextEditor::save() const {
    return EditorMemento(content);
}

void TextEditor::restore(const EditorMemento& memento) {
    content = memento.getContent();
}

std::string TextEditor::getContent() const {
    return content;
}