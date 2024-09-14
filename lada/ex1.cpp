#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string fullName;
    string birthDate;
    string phoneNumber;
    string city;
    string country;
    string universityName;
    string universityCity;
    string universityCountry;
    string groupNumber;

public:
    Student() {}

    void inputStudentData() {
        cout << "Print fullName) ";
        getline(cin, fullName);

        cout << "Print  birthDate (DD.MM.RRRR): ";
        getline(cin, birthDate);

        cout << "Print phoneNumber ";
        getline(cin, phoneNumber);

        cout << "Print city";
        getline(cin, city);

        cout << " Print country";
        getline(cin, country);

        cout << "Print universityName ";
        getline(cin, universityName);

        cout << "Print universityCity ";
        getline(cin, universityCity);

        cout << "Print universityCountry ";
        getline(cin, universityCountry);

        cout << "Print groupNumber ";
        getline(cin, groupNumber);
    }

    void printStudentData() const {
        cout << "\nInformation oS Student \n";
        cout << "FullName: " << fullName << endl;
        cout << " birthDate" << birthDate << endl;
        cout << "phoneNumber;: " << phoneNumber << endl;
        cout << "city " << city << endl;
        cout << "country  " << country << endl;
        cout << "universityName " << universityName << endl;
        cout << "universityCity " << universityCity << endl;
        cout << " universityCountry " << universityCountry << endl;
        cout << "groupNumber  " << groupNumber << endl;
    }

    string getFullName() const {
        return fullName;
    }

    string getBirthDate() const {
        return birthDate;
    }

    string getPhoneNumber() const {
        return phoneNumber;
    }

    string getCity() const {
        return city;
    }

    string getCountry() const {
        return country;
    }

    string getUniversityName() const {
        return universityName;
    }

    string getUniversityCity() const {
        return universityCity;
    }

    string getUniversityCountry() const {
        return universityCountry;
    }

    string getGroupNumber() const {
        return groupNumber;
    }
    void setFullName(const string& name) {
        fullName = name;
    }

    void setBirthDate(const string& date) {
        birthDate = date;
    }

    void setPhoneNumber(const string& phone) {
        phoneNumber = phone;
    }

    void setCity(const string& cityName) {
        city = cityName;
    }

    void setCountry(const string& countryName) {
        country = countryName;
    }

    void setUniversityName(const string& uniName) {
        universityName = uniName;
    }

    void setUniversityCity(const string& uniCity) {
        universityCity = uniCity;
    }

    void setUniversityCountry(const string& uniCountry) {
        universityCountry = uniCountry;
    }

    void setGroupNumber(const string& groupNum) {
        groupNumber = groupNum;
    }
};

int main() {
    Student student;
    student.inputStudentData();
    student.printStudentData();
    cout << "\nGroup of Student: " << student.getGroupNumber() << endl;
    student.setGroupNumber("P34");
    cout << "New number of Group  " << student.getGroupNumber() << endl;

    return 0;
}
