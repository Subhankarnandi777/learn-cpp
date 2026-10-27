#include<iostream>
#include<string>
using namespace std;

class Car {
protected:
    string brand;
    string model;
    bool isEngineOn;
    int currentSpeed;

public:
    Car (string b , string m){
        this->brand = b;
        this->model = m;
        isEngineOn = false;
        currentSpeed = 0;
    }

    void startEngine (){
        isEngineOn = true;
        cout << brand << " " << model << " :Engine started" << endl;
    }
    
    void stopEngine () {
        isEngineOn = false;
        currentSpeed = 0;
        cout << brand << " " << model << " : Engine turned off" << endl;
    }
    void accelarate (){
        if(!isEngineOn){
            cout << brand << " " << model << " : cannot accelarate! Engine is off" << endl;
            return;
        }
        currentSpeed += 20;
        cout << brand << " " << model << " : Accelarating to " << currentSpeed << " km/h" << endl;
    }
    void brake (){
        currentSpeed -= 20;
        cout << brand << " " << model << " : braking : Speed is now : " << currentSpeed << "km/h" << endl;
    }

    virtual ~Car(){}
};

class ManualCar : public Car {
private:
    int currentGear;

public:
    ManualCar (string b , string m) : Car (b , m){
        currentGear = 0;
    }

    void ShiftGear (int gear){
        currentGear = gear;
        cout << brand << " " << model << ": Shifted to gear : " << currentGear << endl;

    }
};

class ElectricCar : public Car {
private:
    int batterylevel;

public:
    ElectricCar (string b , string m) : Car(b,m) {
        batterylevel = 100;
    }

    void chargeBattery(){
        batterylevel = 100;
        cout << brand << " " << model << " : battery fully Charged: " << endl;
    }
};

int main() {
    ManualCar * mymanualCar = new ManualCar ("Suzuki" , "WoganR");
    mymanualCar -> startEngine();
    mymanualCar-> ShiftGear(1);
    mymanualCar-> accelarate();
    mymanualCar-> brake();
    mymanualCar->startEngine();

    cout << "------------------------------" << endl;

    ElectricCar * myelectricCar = new ElectricCar("Tesla" , "Model S");
    myelectricCar -> chargeBattery();
    myelectricCar -> startEngine();
    myelectricCar -> accelarate();
    myelectricCar -> brake();
    myelectricCar -> stopEngine();
    delete myelectricCar;
    return 0;

}