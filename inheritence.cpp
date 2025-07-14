#include <iostream>
using namespace std;

class vehicle {
private:
    int distance;
    int time;

public:
    void getdata() {
        cin >> distance >> time;
    }
    
    int getDistance() {
        return distance; //for returning distance to calculate it
    }

    int getTime() {
        return time; //returning time to calculate time
    }
};

class car : public vehicle {
private:
    int speed;

public:
    void cal() {
        getdata();
        speed = getDistance() / getTime(); 
    }

    void display() {
        cout << speed << endl; 
    }
};

int main() {
    car obj;
    obj.cal();
    obj.display();
    return 0;
}
