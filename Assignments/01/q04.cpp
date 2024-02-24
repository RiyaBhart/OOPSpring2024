#include <iostream>
using namespace std;

class RollerCoaster {
private:
    string Name;
    int Height;
    int Length;
    long Speed;
    int Capacity;
    int CurrentNumRiders;
    bool RideInProgress;

public:
    RollerCoaster() : Name("roller coaster"), Height(500), Length(2000), Capacity(20), Speed(0), RideInProgress(false) {}

    RollerCoaster(string Name, int Height, int Length, int Capacity) : Name(Name), Height(Height), Length(Length), Speed(0), RideInProgress(false) {
        this->Capacity = (Capacity % 3 == 0 || Capacity % 2 == 0) ? Capacity : Capacity - 1;
    }

    void setName(string name) {
        Name = name;
    }

    string getName() const {
        return Name;
    }

    void setHeight(int height) {
        Height = height;
    }

    int getHeight() const {
        return Height;
    }

    void setLength(int length) {
        Length = length;
    }

    int getLength() const {
        return Length;
    }

    void setSpeed(long speed) {
        Speed = speed;
    }

    long getSpeed() const {
        return Speed;
    }

    void setCapacity(int capacity) {
        Capacity = capacity;
    }

    int getCapacity() const {
        return Capacity;
    }

    void setCurrentNumRiders(int riders) {
        CurrentNumRiders = riders;
    }

    int getCurrentNumRiders() const {
        return CurrentNumRiders;
    }

    void setRideInProgress(bool rideInProgress) {
        RideInProgress = rideInProgress;
    }

    bool getRideInProgress() const {
        return RideInProgress;
    }

    int SeatTheRiders(int seatRiders) {
        if (RideInProgress) {
            cout << "Ride has started" << endl;
            return Capacity;
        } else if (Capacity >= seatRiders) {
            CurrentNumRiders = seatRiders;
            return 0;
        } else if (Capacity < seatRiders) {
            seatRiders -= Capacity;
            return seatRiders;
        }
        return 0;
    }

    int StartTheRide() {
        if (RideInProgress) {
            return -1;
        } else {
            if (CurrentNumRiders == Capacity) {
                RideInProgress = true;
                return 1;
            } else if (CurrentNumRiders < Capacity) {
                Capacity -= CurrentNumRiders;
                return Capacity;
            }
        }
        return 0;
    }

    bool StopTheRide() {
        if (RideInProgress) {
            RideInProgress = false;
            return true;
        } else {
            cout << "Ride is not in progress." << endl;
            return false;
        }
    }

    int UnloadRiders() {
        if (!RideInProgress) {
            CurrentNumRiders = 0;
            return CurrentNumRiders;
        } else {
            cout << "Ride is still in progress" << endl;
            return -1;
        }
    }

    void Accelerate(int rollnum) {
        int lastDigit = 0;
        while (rollnum > 0) {
            lastDigit = rollnum % 10;
            if (lastDigit != 0)
                break;
            rollnum /= 10;
        }
        Speed += lastDigit;
        cout << "Accelerating roller coaster by " << lastDigit << " units." << endl;
    }

    void ApplyBrakes(int rollnum) {
        int firstNonZeroDigit = 0;
        int tempRollnum = rollnum;

        while (tempRollnum > 0) {
            firstNonZeroDigit = tempRollnum % 10;
            if (firstNonZeroDigit != 0)
                break;
            tempRollnum /= 10;
        }

        Speed -= firstNonZeroDigit;

        if (Speed < 0)
            Speed = 0;

        cout << "Applying brakes. Decreasing roller coaster speed by " << firstNonZeroDigit << " units." << endl;
    }
};

int main() {
    
    RollerCoaster coaster1;
    RollerCoaster coaster2("Alladin", 600, 2500, 24); 
    cout << "Coaster 2 Name: " << coaster2.getName() << endl;
    cout << "Coaster 2 Height: " << coaster2.getHeight() << " meters" << endl;
    cout << "Coaster 2 Length: " << coaster2.getLength() << " meters" << endl;
    cout << "Coaster 2 Capacity: " << coaster2.getCapacity() << " riders" << endl;

    cout << "Accelerating Coaster 2:" << endl;
    coaster2.Accelerate(0063); 
    cout << "Current Speed of Coaster 2: " << coaster2.getSpeed() << " units" << endl;

    cout << "Seating riders on Coaster 2:" << endl;
    int remainingRiders = coaster2.SeatTheRiders(18); 
    if (remainingRiders == 0) {
        cout << "All riders seated on Coaster 2" << endl;
    } else {
        cout << "Some riders couldn't be seated. Remaining: " << remainingRiders << endl;
    }

    cout << "Starting the ride for Coaster 2:" << endl;
    int rideStartResult = coaster2.StartTheRide();
    if (rideStartResult == 1) {
        cout << "Ride started successfully." << endl;
    } else if (rideStartResult == -1) {
        cout << "Ride already in progress." << endl;
    } else {
        cout << "Not enough riders to start the ride." << endl;
    }

    cout << "Applying brakes to Coaster 2:" << endl;
    coaster2.ApplyBrakes(0063); 
    cout << "Current Speed of Coaster 2: " << coaster2.getSpeed() << " units" << endl;

    cout << "Stopping the ride for Coaster 2:" << endl;
    coaster2.StopTheRide();

    cout << "Unloading riders from Coaster 2:" << endl;
    coaster2.UnloadRiders();

    return 0;
}
