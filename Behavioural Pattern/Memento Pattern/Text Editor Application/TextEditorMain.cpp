#include <iostream>
#include "TextEditor.h"
#include "Caretaker.h"

int main() {
    TextEditor editor;
    Caretaker caretaker;

    editor.write("A");
    caretaker.saveState(editor);

    editor.write("B");
    caretaker.saveState(editor);

    editor.write("C");
    caretaker.saveState(editor);

    caretaker.undo(editor);
    std::cout << editor.getContent() << std::endl; // Output: "B"

    return 0;
}