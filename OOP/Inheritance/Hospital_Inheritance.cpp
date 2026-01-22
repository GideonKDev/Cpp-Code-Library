
/*
in a given hospital the patients are registered upon arrival where name, gender and year of
birth is being recorded
The patient is then referred to CS doctor
The doctor does a diagnosis and prescription , to the patient who is then referred to the
chemist to be given medication
If the patient is admitted, allocated a ward and a bed, The costing comprises of the consultation and medication, for the in patient, they pay
consultation and bed Charges which depend on the number of days spent in the hospital. the rate
per day may vary from time to time
*/
#include<iostream>
#include<string>

using namespace std;

class Patient{
protected:
    string name;
    string gender;
    int year;
    string diagnosis, prescription ;
    double cost;

public:
    Patient();
    void computeCost();
    void getParticulars();
    void treatment();
    void displayDetails();
};

Patient::Patient(){
    name = "";
    gender = "";
    year = 0;
    cost = 0.0;
}

void Patient::getParticulars(){
    cout<<"Name: ";
    getline(cin, name);
    cout<<"Gender: ";
    getline(cin, gender);
    cout<<"Year of Birth: ";
    cin>>year;
    cin.ignore();

}

void Patient::treatment(){
   cout<<"Enter prescription: ";
   getline(cin, prescription);

   cout<<"Enter diagnosis: ";
   getline(cin, diagnosis);

   cout<<"-----------------------------------------"<<endl;



}

void Patient::computeCost(){
    double cons_fee, med_fee;
    //cin.ignore();
    cout<<"Enter consultation fee: ";
    cin>>cons_fee;

    cout<<"Enter Medication fee: ";
    cin>>med_fee;

    cost = cons_fee + med_fee;

    //cout<<name<<" Kindly pay $"<<cost<<endl;
}
void Patient::displayDetails(){
    cout<<"--------- Patient Details-------------"<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Gender: "<<gender<<endl;
    cout<<"Diagnosis: "<<diagnosis<<endl;
    cout<<"Prescription: "<<prescription<<endl;
   cout<<"Bill to be paid: "<<cost<<endl;

}



//-----------------inpatient details-------------------

class Inpatient: public Patient{
private:
   string ward;
   int bedNo;
   int duration;
   double ratePerDay;

public:
    Inpatient();
    void computeCost();
    void admissionDetails();
    void displayDetails();

};

Inpatient::Inpatient(){
    ward = "" ;
    bedNo = 0;
    duration = 0;
    ratePerDay = 0.0;
}

void Inpatient::computeCost(){
    double cons_fee,dayRate, drugs;
    cout << "Enter consultation fee: ";
    cin >> cons_fee;

    cout << "Enter duration of stay (days): ";
    cin >> duration;

    cout<<"Enter Medication fee: ";
    cin>>drugs;

    cout << "Enter bed rate per day: ";
    cin >> dayRate;

    cost = cons_fee + (duration * dayRate)+ drugs;

    //cout << name << ", kindly pay $" << cost << endl;
}

void Inpatient::admissionDetails() {
    cout << "Enter ward: ";
    getline(cin, ward);

    cout << "Enter bed number: ";
    cin >> bedNo;

}

void Inpatient::displayDetails(){
    cout<<"--------- Patient Details-------------"<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Gender: "<<gender<<endl;
    cout<<"Diagnosis: "<<diagnosis<<endl;
    cout<<"Prescription: "<<prescription<<endl;
    cout<<"Bill to be paid: "<<cost<<endl;

}


int main(){
    int choice;

    cout << "1. Outpatient\n";
    cout << "2. Inpatient\n";
    cout << "Choose patient type: ";
    cin >> choice;
    cin.ignore();

    if (choice == 1) {
        Patient p;
        p.getParticulars();
        p.treatment();
        p.computeCost();
        p.displayDetails();
    } else if (choice == 2) {
        Inpatient ip;
        ip.getParticulars();
        ip.treatment();
        ip.admissionDetails();
        ip.computeCost();
        ip.displayDetails();
    } else {
        cout << "Invalid choice." << endl;
    }

    return 0;
}




