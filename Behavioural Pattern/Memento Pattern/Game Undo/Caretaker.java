// The Caretaker class manages the history of shape states, allowing for saving and undoing changes in the Memento pattern.

package Memento;

import java.util.Stack;

public class Caretaker {
    
    private final Stack<EditorMemento> history = new Stack<>();

    public void saveState(GraphicEditor graphicEditor) {
        // TODO: Save the current state of the graphic editor by pushing its memento onto the history stack.
        history.push(graphicEditor.save());
        
    }

    public void undo(GraphicEditor graphicEditor){
        // TODO: Restore the last saved state of the graphic editor if history is not empty.
        if (history.size() > 1) {  // Need at least 2 states to undo
            history.pop();  // Remove current state
            EditorMemento previousState = history.peek();  // Get previous state without removing
            graphicEditor.restore(previousState);
        }
    }
}
