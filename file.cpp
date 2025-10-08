#include <iostream>
using namespace std;

class Vec {
    string Number_plate;
    int entrytime;
    int exittime;

public:
    Vec(string plate) {
        Number_plate = plate;
    }

    void setEntryTime(int time) {
        entrytime = time;
    }

    void setExitTime(int time) {
        exittime = time;
    }

    int getParkedTime() {
        return exittime - entrytime;
    }

    string getNumberPlate() {
        return Number_plate;
    }

    virtual int calculatecharge() = 0;  // pure virtual
    virtual ~Vec() {}  // virtual destructor for safety
};

class Bike : public Vec {
public:
    Bike(string plate) : Vec(plate) {}
    int calculatecharge() override {
        return getParkedTime() * 10;
    }
};

class Car : public Vec {
public:
    Car(string plate) : Vec(plate) {}
    int calculatecharge() override {
        return getParkedTime() * 20;
    }
};

class Truck : public Vec {
public:
    Truck(string plate) : Vec(plate) {}
    int calculatecharge() override {
        return getParkedTime() * 30;
    }
};

int main() {
    const int size = 10;
    Vec* Parkinglotsize[size];
    int VecCount = 0;
    int choice;

    do {
        cout << "\n\n---- Parking Lot Menu ----\n";
        cout << "1. Entry Vehicle\n";
        cout << "2. Exit Vehicle\n";
        cout << "3. Show Parked Vehicles\n";
        cout << "4. Exit Program\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            if (VecCount == size) {
                cout << "Parking lot is full.\n";
                continue;
            }

            string plate;
            int type, time;
            cout << "Enter Vehicle Number: ";
            cin >> plate;
            cout << "Enter Entry Time: ";
            cin >> time;
            cout << "Select Vehicle Type [1. Car 2. Bike 3. Truck]: ";
            cin >> type;

            Vec* v = nullptr;
            if (type == 1) v = new Car(plate);
            else if (type == 2) v = new Bike(plate);
            else if (type == 3) v = new Truck(plate);
            else {
                cout << "Invalid vehicle type.\n";
                continue;
            }

            v->setEntryTime(time);
            Parkinglotsize[VecCount++] = v;
            cout << "Vehicle entered successfully.\n";
        }

        else if (choice == 2) {
            string plate;
            int time;
            cout << "Enter Vehicle Number: ";
            cin >> plate;
            cout << "Enter Exit Time: ";
            cin >> time;

            bool found = false;
            for (int i = 0; i < VecCount; i++) {
                if (Parkinglotsize[i]->getNumberPlate() == plate) {
                    Parkinglotsize[i]->setExitTime(time);
                    int charge = Parkinglotsize[i]->calculatecharge();
                    cout << "Parking Time: " << Parkinglotsize[i]->getParkedTime() << " hours\n";
                    cout << "Total Charge: ₹" << charge << endl;

                    // Delete vehicle and shift array
                    delete Parkinglotsize[i];
                    for (int j = i; j < VecCount - 1; j++) {
                        Parkinglotsize[j] = Parkinglotsize[j + 1];
                    }
                    VecCount--;
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Vehicle not found.\n";
            }
        }

        else if (choice == 3) {
            if (VecCount == 0) {
                cout << "No vehicles parked currently.\n";
            } else {
                cout << "Currently Parked Vehicles:\n";
                for (int i = 0; i < VecCount; i++) {
                    cout << i + 1 << ". " << Parkinglotsize[i]->getNumberPlate() << endl;
                }
            }
        }

        else if (choice == 4) {
            cout << "Exiting program.\n";
        }

        else {
            cout << "Invalid choice.\n";
        }

    } while (choice != 4);

    // Cleanup: Free memory
    for (int i = 0; i < VecCount; i++) {
        delete Parkinglotsize[i];
    }

    return 0;
}