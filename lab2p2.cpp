#include <iostream>
using namespace std;

class Person{
    protected:
        string name;
        int age;
    public:
        Person(string n, int a){
            name = n;
            age = a;
        }
        Person(){
            name = "";
            age = -1;
        }
        virtual void print_message(){
            cout << "---------------\n";
            cout << "Name: " << name << "\n";
            cout << "Age: " << age << "\n";
        }
};

class Student: public Person{
    //
    private:
    	string school;
    	string major;
    public:
    	Student(string name1, int age1, string school1, string major1);
    	void print_message()
    	{
    	    cout << "---------------\n";
            cout << "Name: " << name << "\n";
            cout << "Age: " << age << "\n";
            cout << "School: " << school << "\n";
            cout << "Major: " << major<< "\n";
    	}
};

Student::Student(string name1, int age1, string school1, string major1)
{
	name=name1;
	age=age1;
	school=school1;
	major=major1;

}

int main(){
    
    //Use these lines to test your code
    Person p1("Tommy",28);
    p1.print_message();

    Student s1 = Student("Anna",22,"USC","EE");
    Person *p2 = &s1;
    p2->print_message();
    
}
