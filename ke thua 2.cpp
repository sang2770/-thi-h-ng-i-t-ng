#include <bits/stdc++.h>
using namespace std;
 
class People
{
protected:
    string name, address;
    int age;
 
public:
    People()
    {
        name = address = "";
        age = 0;
    }
    ~People()
    {
        name = address = "";
        age = 0;
    }
    void set()
    {
        cout << "Input" << endl;
        fflush(stdin);
        cout << "Name: ";
        fflush(stdin);
        getline(cin, this->name);
        cout << "Address: ";
        fflush(stdin);
        getline(cin, this->address);
        cout << "Age: ";
        cin >> this->age;
    }
 
    void get()
    {
        cout << "Output" << endl;
        cout << "Name: " << this->name << endl;
        cout << "Address: " << this->address << endl;
        cout << "Age: " << this->age << endl;
    }
};
 
class Students : public People
{
private:
    string id;
    int math, physical, chemistry;
 
public:
    Students()
    {
        id = "";
        math = physical = chemistry = 0;
    }
 
    ~Students()
    {
        id = "";
        math = physical = chemistry = 0;
    }
 
    void set()
    {
        People ::set();
        cout << "ID: ";
        cin >> this->id;
        cout << "Math: ";
        cin >> this->math;
        cout << "Physical: ";
        cin >> this->physical;
        cout << "Chemistry: ";
        cin >> this->chemistry;
    }
 
    void get()
    {
        People ::get();
        cout << "ID: " << this->id << endl;
        cout << "Math: " << this->math << endl;
        cout << "Physical: " << this->physical << endl;
        cout << "Chemistry: " << this->chemistry << endl;
        cout << "GPA = " << GPA();
    }
 
    float GPA()
    {
        return (this->math + this->physical + this->chemistry) / 3;
    }
};
 
int main()
{
    Students obj;
    obj.set();
    cout << endl;
    obj.get();
}
