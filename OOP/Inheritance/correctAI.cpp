
#include <iostream>
#include <string>

using namespace std;

// ---------------- PATIENT CLASS ----------------

class Patient {
protected:
    string name;
    string gender;
    int year;
    string diagnosis;
    string prescription;
    double cost;

public:
    Patient();
    void getParticulars();
    void treatment();
    void computeCost();
};

Patient::Patient() {
    name = "";
    gender = "";
    year = 0;
    cost = 0.0;
}

void Patient::getParticulars() {
    cout << "Name: ";
    getline(cin, name);

    cout << "Gender: ";
    getline(cin, gender);

    cout << "Year of Birth: ";
    cin >> year;
    cin.ignore(); // clear newline
}

void Patient::treatment() {
    cout << "Enter diagnosis: ";
    getline(cin, diagnosis);

    cout << "Enter prescription: ";
    getline(cin, prescription);

    cout << "--------------------------" << endl;
}

void Patient::computeCost() {
    double cons_fee, med_fee;

    cout << "Enter consultation fee: ";
    cin >> cons_fee;

    cout << "Enter medication fee: ";
    cin >> med_fee;

    cost = cons_fee + med_fee;

    cout << name << ", kindly pay $" << cost << endl;
}

// ---------------- INPATIENT CLASS ----------------

class Inpatient : public Patient {
private:
    string ward;
    int bedNo;
    int duration;        // number of days
    double ratePerDay;   // bed charge per day

public:
    Inpatient();
    void admissionDetails();
    void computeCost();  // override
};

Inpatient::Inpatient() {
    ward = "";
    bedNo = 0;
    duration = 0;
    ratePerDay = 0.0;
}

void Inpatient::admissionDetails() {
    cout << "Enter ward: ";
    getline(cin, ward);

    cout << "Enter bed number: ";
    cin >> bedNo;

    cout << "Enter duration of stay (days): ";
    cin >> duration;

    cout << "Enter bed rate per day: ";
    cin >> ratePerDay;
}

void Inpatient::computeCost() {
    double cons_fee, med_fee;

    cout << "Enter consultation fee: ";
    cin >> cons_fee;

    cout << "Enter medication charges: ";
    cin >> med_fee;

    cost = cons_fee + med_fee + (duration * ratePerDay);

    cout << name << ", kindly pay $" << cost << endl;
}

// ---------------- MAIN FUNCTION ----------------

int main() {
    int choice;

    cout << "1. Outpatient\n";
    cout << "2. Inpatient\n";
    cout << "Choose patient type: ";
    cin >> choice;
    cin.ignore(); // clear newline

    if (choice == 1) {
        Patient p;
        p.getParticulars();
        p.treatment();
        p.computeCost();
    }
    else if (choice == 2) {
        Inpatient ip;
        ip.getParticulars();
        ip.treatment();
        ip.admissionDetails();
        ip.computeCost();
    }
    else {
        cout << "Invalid choice." << endl;
    }

    return 0;
}
