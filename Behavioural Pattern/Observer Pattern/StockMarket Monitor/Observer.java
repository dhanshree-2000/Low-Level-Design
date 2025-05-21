// The Observer interface defines the update method for receiving stock price change notifications.

package Observer;

public interface Observer {
    void update(String stockSymbol, double newPrice);
}