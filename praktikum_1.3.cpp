#include <iostream>

using namespace std;


class Vehicle {
protected:
    int speed;
    int enginePower;

public:
    
    Vehicle() : speed(0), enginePower(0) {}

    
    Vehicle(int spd, int power) : speed(spd), enginePower(power) {}

    
    void setSpeed(int spd) {
        speed = spd;
    }

    
    int getSpeed() const {
        return speed;
    }

    
    void setEnginePower(int power) {
        enginePower = power;
    }

    
    int getEnginePower() const {
        return enginePower;
    }

    
    void displayInfo() const {
        cout << "Speed: " << speed << " km/h" << endl;
        cout << "Engine Power: " << enginePower << " HP" << endl;
    }
};


class Car : public Vehicle {
public:
    
    Car() : Vehicle() {}

    
    Car(int spd, int power) : Vehicle(spd, power) {}

    
    void displayInfo() const {
        cout << "Car Info:" << endl;
        Vehicle::displayInfo();
    }
};


class Truck : public Vehicle {
private:
    int maxWeight;

public:
    
    Truck() : Vehicle(), maxWeight(0) {}

    
    Truck(int spd, int power, int weight) : Vehicle(spd, power), maxWeight(weight) {}

    
    void setMaxWeight(int weight) {
        maxWeight = weight;
    }

    
    int getMaxWeight() const {
        return maxWeight;
    }

    
    void displayInfo() const {
        cout << "Truck Info:" << endl;
        Vehicle::displayInfo();
        cout << "Max Weight: " << maxWeight << " kg" << endl;
    }
};


class Motorcycle : public Vehicle {
public:
    
    Motorcycle() : Vehicle() {}

    
    Motorcycle(int spd, int power) : Vehicle(spd, power) {}

    
    void displayInfo() const {
        cout << "Motorcycle Info:" << endl;
        Vehicle::displayInfo();
    }
};

int main() {
    
    Car car(180, 150);
    Truck truck(120, 300, 5000);
    Motorcycle motorcycle(220, 100);

    
    car.displayInfo();
    cout << endl;

    truck.displayInfo();
    cout << endl;

    motorcycle.displayInfo();

    return 0;
}
