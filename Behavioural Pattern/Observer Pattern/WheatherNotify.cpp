#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

// Observer Interface
class Observer {
public:
    virtual void update(float temp) = 0; // Update method to be implemented by observers
};

// Subject Interface
class Subject {
public:
    virtual void attach(Observer* obs) = 0; // Attach an observer
    virtual void detach(Observer* obs) = 0; // Detach an observer
    virtual void notifyObservers() = 0; // Notify all observers
    virtual ~Subject() {} // Virtual destructor for proper cleanup
};

// Weather Station
class WeatherStationIn : public Subject { // Inherits from Subject
private:
    float temperature;
    vector<Observer*> observerList;

public:
    WeatherStationIn() : temperature(0) {}

    void setTemperature(float temp) {   // Set temperature and notify observers
        temperature = temp;
        notifyObservers();
    }

    void attach(Observer* obs) override {  // Attach an observer
        observerList.push_back(obs);
    }

    // Detach an observer
    // This method removes the observer from the list
    // It uses the find algorithm to locate the observer in the list
    // and then erases it if found
    void detach(Observer* obs) override {
        auto it = find(observerList.begin(), observerList.end(), obs);
        if (it != observerList.end()) {
            observerList.erase(it);
        }
    }

    // Notify all observers
    // This method iterates through the observer list
    // and calls the update method on each observer
    // It uses the runtime polymorphism feature of C++
    // to call the correct update method for each observer
    void notifyObservers() override {
        for (auto& obs : observerList) {
            obs->update(temperature);  // Runtime Polymorphism
        }
    }
};

// Display Device
// This class implements the Observer interface
// It represents a display device that shows the temperature
// It has a name attribute to identify the device
// The update method is implemented to display the temperature
class DisplayDeviceIn : public Observer {
private:
    string name;

public:
    DisplayDeviceIn(const string& deviceName) : name(deviceName) {}

    void update(float temp) override {
        cout << "Temp on " << name << " device is " << temp << endl;
    }
};

// Mobile Device
// This class also implements the Observer interface
// It represents a mobile device that shows the temperature
// The update method is implemented to display the temperature
class MobileDevice : public Observer {
public:
    void update(float temp) override {
        cout << "Temp on mobile is " << temp << endl;
    }
};

int main() {
    // Create a Publisher
    WeatherStationIn weatherStationIn;

    // Create subscribers
    DisplayDeviceIn device("SamsungLCD");
    MobileDevice mobileDevice;

    // Attach
    weatherStationIn.attach(&device);
    weatherStationIn.attach(&mobileDevice);

    // Set Temp
    weatherStationIn.setTemperature(25);

    // Detach
    weatherStationIn.detach(&mobileDevice);

    weatherStationIn.setTemperature(26);

    return 0;
}