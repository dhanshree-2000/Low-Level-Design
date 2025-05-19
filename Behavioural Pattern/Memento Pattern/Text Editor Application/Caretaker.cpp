#include "Caretaker.h"
#include "TextEditor.h"

void Caretaker::saveState(TextEditor& editor) {
    history.push(editor.save());
}

void Caretaker::undo(TextEditor& editor) {
    if (history.size() > 1) {
        history.pop();
        editor.restore(history.top());
    }
}