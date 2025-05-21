// The InvestorB class implements the Observer interface and receives stock price updates.

package Observer;

public class InvestorB implements Observer {
    
    @Override
    public void update(String stockSymbol, double newPrice) {
        System.out.println("Investor B notified: Stock " + stockSymbol + " has a new price: $" + newPrice);
    }
}