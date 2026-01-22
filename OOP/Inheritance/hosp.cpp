
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
    int Year;
    string diagnosis, prescription ;
    double cost;

public:
    Patient(string n, string g, int Year);
    void computeCost();
    void getParticulars();
    void treatment();
};

Patient::Patient(string n, string g, int y){
    name = n;
    gender = g;
    Year = y
}
void Patient::getParticulars(){
    cout<<"Name: ";
    getline(cin, n);
    cout<<"Gender: ";
    getline(cin, g);
    cout<<"Year of Birth: ";
    cin>>y;


}





class Inpatient: public Patient{
private:
    float consult_Fee;
    float med_cost;
    float bedFee;
    int daysAdmitted;

public:
    Inpatient(string n, string g, int y, float cons, float med , float rateDay, int days): Patient(n ,g ,y){

    }
};













int main(){

}


