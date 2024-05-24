#include <iostream>
#include <string>

using namespace std;


class ElectronicDevice {
protected:
    string name;
    double screenSize;

public:
    
    ElectronicDevice() : name(""), screenSize(0.0) {}

    
    ElectronicDevice(string n, double size) : name(n), screenSize(size) {}

    
    void setName(string n) {
        name = n;
    }

    
    string getName() const {
        return name;
    }

    
    void setScreenSize(double size) {
        screenSize = size;
    }

    
    double getScreenSize() const {
        return screenSize;
    }

    
    virtual void displayInfo() const {
        cout << "Name: " << name << endl;
        cout << "Screen Size: " << screenSize << " inches" << endl;
    }
};


class Smartphone : public ElectronicDevice {
private:
    string operatingSystem;

public:
    
    Smartphone() : ElectronicDevice(), operatingSystem("") {}

    
    Smartphone(string n, double size, string os) : ElectronicDevice(n, size), operatingSystem(os) {}

    
    void setOperatingSystem(string os) {
        operatingSystem = os;
    }

    
    string getOperatingSystem() const {
        return operatingSystem;
    }

    
    void displayInfo() const override {
        cout << "Smartphone Info:" << endl;
        ElectronicDevice::displayInfo();
        cout << "Operating System: " << operatingSystem << endl;
    }
};


class Tablet : public ElectronicDevice {
private:
    string operatingSystem;

public:
    
    Tablet() : ElectronicDevice(), operatingSystem("") {}

   
    Tablet(string n, double size, string os) : ElectronicDevice(n, size), operatingSystem(os) {}

    
    void setOperatingSystem(string os) {
        operatingSystem = os;
    }

    
    string getOperatingSystem() const {
        return operatingSystem;
    }

    
    void displayInfo() const override {
        cout << "Tablet Info:" << endl;
        ElectronicDevice::displayInfo();
        cout << "Operating System: " << operatingSystem << endl;
    }
};
class Laptop : public ElectronicDevice {
private:
    string operatingSystem;

public:
    
    Laptop() : ElectronicDevice(), operatingSystem("") {}

    
    Laptop(string n, double size, string os) : ElectronicDevice(n, size), operatingSystem(os) {}

    
    void setOperatingSystem(string os) {
        operatingSystem = os;
    }

    
    string getOperatingSystem() const {
        return operatingSystem;
    }

    
    void displayInfo() const override {
        cout << "Laptop Info:" << endl;
        ElectronicDevice::displayInfo();
        cout << "Operating System: " << operatingSystem << endl;
    }
};

int main() {
    
    Smartphone phone("iPhone", 6.1, "iOS");
    Tablet tablet("iPad", 10.2, "iPadOS");
    Laptop laptop("MacBook", 13.3, "macOS");

   
    phone.displayInfo();
    cout << endl;

    tablet.displayInfo();
    cout << endl;

    laptop.displayInfo();

    return 0;
}
