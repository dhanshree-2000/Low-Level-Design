// The EditorMemento class stores the state of a shape, allowing for the preservation and restoration of its attributes in the Memento pattern.

package Memento;

public class EditorMemento {
    
    private final String shapeType;
    private final int x;
    private final int y;
    private final String color;
    private final int size;

    public EditorMemento(String shapeType, int x, int y, String color, int size) {
        // TODO: Initialize the shape's attributes with the provided parameters. 
        this.shapeType=shapeType;
        this.x=x;
        this.y=y;
        this.color=color;
        this.size=size;
        
    }
    
    public String getShapeType() {
        return shapeType;
    }

    public int getX() {
        return x;
    }

    public int getY() {
        return y;
    }

    public String getColor() {
        return color;
    }

    public int getSize() {
        return size;
    }
}
