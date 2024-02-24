#include <iostream>
using namespace std;

class Table {
private:
    int TotalSeats;
    int OccupiedSeats;
    bool Clean;

public:
    Table() {
        TotalSeats = 4;
        OccupiedSeats = 0;
        Clean = true;
    }

    Table(int capacity) {
        if (capacity < 4)
            TotalSeats = 4;
        else
            TotalSeats = 8;

        OccupiedSeats = 0;
        Clean = true;
    }

    int getCapacity() const {
        return TotalSeats;
    }

    int getSeatsOccupied() const {
        return OccupiedSeats;
    }

    bool isClean() const {
        return Clean;
    }

    int getFreeSeats() const {
        return TotalSeats - OccupiedSeats;
    }

    bool canBeUsed(int group) const {
        return (Clean && group <= TotalSeats);
    }

    void occupySeats(int group) {
        if (!canBeUsed(group)) {
            cout << "The table cannot be used by this group." << endl;
            return;
        }

        OccupiedSeats = group;
        Clean = false;
        cout << "Group of " << group << " friends seated at the table." << endl;
    }

    void haveLunch() {
        if (OccupiedSeats > 0) {
            Clean = false;
            cout << "Lunch started. Table is no longer clean." << endl;
        } else {
            cout << "No one is seated at the table. Cannot have lunch." << endl;
        }
    }

    void leaveTable() {
        OccupiedSeats = 0;
        cout << "Everyone has left the table." << endl;
    }

    void cleanTable() {
        if (OccupiedSeats == 0) {
            Clean = true;
            cout << "Table has been cleaned." << endl;
        } else {
            cout << "Table cannot be cleaned as someone is still seated." << endl;
        }
    }
};

int main() {
    Table tables[5] = {
        Table(),
        Table(8),
        Table(8),
        Table(),
        Table()
    };

    tables[0].occupySeats(4);
    tables[0].haveLunch();
    tables[0].leaveTable();
    tables[0].cleanTable();

    tables[1].occupySeats(6);

    return 0;
}
