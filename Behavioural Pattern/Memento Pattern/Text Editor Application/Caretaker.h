#ifndef CARETAKER_H
#define CARETAKER_H

#include <stack>
#include "EditorMemento.h"

class TextEditor; // Forward declaration

class Caretaker {
private:
    std::stack<EditorMemento> history;
public:
    void saveState(TextEditor& editor);
    void undo(TextEditor& editor);
};

#endif