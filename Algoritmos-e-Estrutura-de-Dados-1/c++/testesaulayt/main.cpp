#include <iostream>

using namespace std;
using std::string;

class AbstractEmployee
{
    virtual void AskForPromotion()=0;
};

class Employee:AbstractEmployee
{
protected:
    string Name;
    string Company;
    int Age;

public:
    void setName(string name)
    {
        Name = name;
    }
    string getName()
    {
        return Name;
    }
    void setCompany(string company)
    {
        Company = company;
    }
    string getCompany()
    {
        return Company;
    }
    void setAge(int age)
    {
        if(age >= 18)
        {
            Age = age;
        }
    }
    int getAge()
    {
        return Age;
    }
    void IntroduceYourself()
    {
        cout<<"Name: " << Name << endl;
        cout<<"Company: " << Company << endl;
        cout<<"Age: " << Age << endl;
    }
    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
    void AskForPromotion()
    {
        if(Age>30)
        {
            cout << Name << " got promoted!" << endl;
        }
        else
        {
            cout << Name << " sorry! no promotion for you!" << endl;
        }
    }
    virtual void Work()
    {
        cout << Name << " is checking emails, performing backlogs, etc.. " << endl;
    }

};
class Developer: public Employee
{

public:
    string FavProgrammingLanguage;

    Developer(string name, string company, int age, string favprogramminglanguage)
        :Employee(name, company, age)
    {
        FavProgrammingLanguage = favprogramminglanguage;
        /*or*/
        /*this->FavProgrammingLanguage = FavProgrammingLanguage;*/
    }

    void FixBug()
    {
        cout<< Name << " fixed bug using " << FavProgrammingLanguage << endl;
    }
    void Work(){
        cout << Name << " is writting " << FavProgrammingLanguage << " code" << endl;
    }


};

class Teacher: public Employee
{
public:
    string Subject;
    void PrepareLesson()
    {
        cout << Name << " is preparing a " << Subject << " lesson" << endl;
    }
    Teacher(string name, string company, int age, string subject)
        :Employee(name,company,age)
    {
        Subject = subject;
    }
     void Work(){
        cout << Name << " is teaching " << Subject << endl;
    }
};
int main()
{
    Employee employee1=Employee("Sophia","PUC",18);
    employee1.IntroduceYourself();

    Employee employee2=Employee("John","Amazon",35);
    employee2.IntroduceYourself();

    employee1.AskForPromotion();
    employee2.AskForPromotion();

    Developer d= Developer("Saldina","YT", 25,"C++");
    d.FixBug();
    d.AskForPromotion();
    d.Work();

    Teacher t= Teacher("Jack","School", 41,"History");
    t.PrepareLesson();
    t.AskForPromotion();
    t.Work();

    Employee *e1 = &d;
    Employee *e2 = &t;

    e1->Work();
    e2->Work();

    /*Employee employee2;
    employee2.Name="John";
    employee2.Company="Amazon";
    employee2.Age=35;
    employee2.IntroduceYourself();*/

}
