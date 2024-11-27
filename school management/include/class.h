#ifndef CLASS_H
#define CLASS_H
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <fstream>
#include <stdlib.h>
#include <cstring>
#include <windows.h>
#include <time.h>
#include <dos.h>
#include <algorithm>
#define y 121
#define ENTER 13
#define TAB 9
#define BKSP 8
using namespace std;
fstream f;
class Security
{
    string code;
    string status;

public:
    string generatecode(string name )
    {

        code = name.substr(0,3) + "AKSU" + "2023";
        status = "out";

        return code;
    }

    string return_code()
    {
        return code;
    }


    void display()
    {
        cout<<"Status       :"<<status<<endl;
    }

    void modify_status()
    {
        if(status == "out")
        {
            status = "in";
        }
        else if(status == "in")
        {
            status = "out";
        }
    }
};

class staff : public Security
{
    string name;
    float salary;
    string profession;

public:
    string get_staff(string pro)
    {
        profession = pro;

            cin.ignore();

            do
            {

                cout << "Name: ";
                getline(cin,name);
                if(isValidName(name))
                {
                    break;
                }
                else
                {
                    cout<<"Enter a Valid Name!!"<<endl;
                }
            }while(1);


        cout<<"Salary:";
        cin>>salary;

        string password;

        password = generatecode(name);

        return password;
    }

    string get_name()
    {
        return name;
    }

    string get_code()
    {
        string code;

        code = return_code();

        return code;
    }

    void display()
    {
        cout<<"Name         :"<<name<<endl;
        cout<<"Profession   :"<<profession<<endl;

        Security :: display();
    }
};

class teacher : public staff
{
    string grade;

public:
    void get_teacher()
    {
        string password;

        password = get_staff("Teacher");

        do
        {
            cout<<"Grade(kindergarden/highschool/highersecondary:";
            cin>>grade;

            if(grade != "kindergarden" && grade != "KINDERGARDEN" && grade!= "highschool" && grade!= "HIGHSCHOOL" && grade!= "highersecondary" && grade!= "HIGHERSECONDARY")
            {
                cout<<"No grade named "<<grade<<endl;
            }

        }while(grade != "kindergarden" && grade != "KINDERGARDEN" && grade!= "highschool" && grade!= "HIGHSCHOOL" && grade!= "highersecondary" && grade!= "HIGHERSECONDARY");

        cout<<"Code:"<<password<<endl;
        cout<<"Please remember your code!!"<<endl;
        Sleep(5000);

    }

    string get_name()
    {
        string name;

        name = staff :: get_name();

        return name;
    }

    string get_code()
    {
        string code;

        code = staff :: get_code();

        return code;
    }

    void display()
    {
        staff :: display();

        cout<<"grade   :"<<grade<<endl;
    }
};

class works : public staff
{
    string block;

public:
    void get_works()
    {
        string password;

        password = get_staff("Worker");

        do
        {
            cout<<"Block Name:";
            cin>>block;

            if(block != "A" && block != "B" && block != "C" && block != "D")
            {
                cout<<"No Block Named "<<block<<endl;
            }
        }while(block != "A" && block != "B" && block != "C" && block != "D");

        cout<<"Code:"<<password<<endl;
        cout<<"Please remember this code!!"<<endl;
        Sleep(5000);
    }

    string get_name()
    {
        string name;

        name = staff :: get_name();

        return name;
    }

    string get_code()
    {
        string code;

        code = staff :: get_code();

        return code;
    }

    void display()
    {
        staff :: display();

        cout<<"Block        :"<<block<<endl;
    }
};

class watch_man : public staff
{
    string gate_number;

public:
    void get_watchman()
    {
        string password;

        password = get_staff("Watch Man");

        do
        {
            cout<<"Gate Number(1,2,3):";
            cin>>gate_number;

            if(gate_number != "1" && gate_number != "2" && gate_number != "3")
            {
                cout<<"NO Gate Named "<<gate_number<<endl;
            }
        }while(gate_number != "1" && gate_number != "2" && gate_number != "3");

        cout<<"Code:"<<password<<endl;
        cout<<"Please remember this code!!"<<endl;
        Sleep(5000);
    }

    string get_name()
    {
        string name;

        name = staff :: get_name();

        return name;
    }

    string get_code()
    {
        string code;

        code = staff :: get_code();

        return code;
    }

    void display()
    {
        staff :: display();

        cout<<"Gate Name    :"<<gate_number<<endl;
    }
};

class librarian : public staff
{
    int floor_number;

public:
    void get_librarian()
    {
        string password;

        password = get_staff("Librarian");

        do
        {
            cout<<"Floor Number:";
            cin>>floor_number;

            if(floor_number != 1 && floor_number != 2 && floor_number != 3 && floor_number != 4)
            {
                cout<<"No floor numbered"<<floor_number<<endl;
            }
        }while(floor_number != 1 && floor_number != 2 && floor_number != 3 && floor_number != 4);

        cout<<"Code:"<<password<<endl;
        cout<<"Please remember this code!!"<<endl;
        Sleep(5000);
    }

    string get_name()
    {
        string name;

        name = staff :: get_name();

        return name;
    }

    string get_code()
    {
        string code;

        code = staff :: get_code();

        return code;
    }

    void display()
    {
        staff :: display();

        cout<<"Floor Number :"<<floor_number<<endl;
    }
};

class driver : public staff
{
    string bus_name;

public:
    void get_driver()
    {
        string password;

        password = get_staff("Driver");

        do
        {
            cout<<"Bus Name:";
            cin>>bus_name;

            if(bus_name != "A" && bus_name != "B" && bus_name != "C" && bus_name != "D")
            {
                cout<<"No Bus with name"<<bus_name<<endl;
            }
        }while(bus_name != "A" && bus_name != "B" && bus_name != "C" && bus_name != "D");

        cout<<"Code:"<<password<<endl;
        cout<<"Please remember this code!!"<<endl;
        Sleep(5000);
    }

    string get_name()
    {
        string name;

        name = staff :: get_name();

        return name;
    }

    string get_code()
    {
        string code;

        code = staff :: get_code();

        return code;
    }

    void display()
    {
        staff :: display();

        cout<<"Bus Name     :"<<bus_name<<endl;
    }
};

class student : public Security
{
    string name;
    string standard;
    int rollnumber;


public:
    string get_student()
    {
        string password;

            cin.ignore();

            do
            {

                cout << "Name: ";
                getline(cin,name);
                if(isValidName(name))
                {
                    break;
                }
                else
                {
                    cout<<"Enter a Valid Name!!"<<endl;
                }
            }while(1);


        cout<<"Roll Number:";
        cin>>rollnumber;

        do
        {
            cout<<"standard:";
            cin>>standard;

            if(standard != "1" && standard != "2" && standard != "3" && standard != "4" && standard != "5" && standard != "6" && standard != "7" && standard != "8" && standard != "9" && standard != "10" && standard != "11" && standard != "12")
            {
                cout<<"No standard named "<<standard<<endl;
            }

        }while(standard != "1" && standard != "2" && standard != "3" && standard != "4" && standard != "5" && standard != "6" && standard != "7" && standard != "8" && standard != "9" && standard != "10" && standard != "11" && standard != "12");

        cin.ignore();


        password = generatecode(name);

        return password;
    }

    string get_name()
    {
        return name;
    }

    string get_code()
    {
        string code;

        code = return_code();

        return code;
    }

    void display()
    {
        cout<<"Name         :"<<name<<endl;
        cout<<"standard       :"<<standard<<endl;

        Security :: display();
    }

};

class hosteller : public student
{
    string block_name;

public:

    void get_hosteller()
    {
        string password;

        password = get_student();

        do
        {
            cout<<"Hostel Block Name:";
            cin>>block_name;

            if(block_name != "A" && block_name != "B" && block_name != "C" && block_name != "D")
            {
                cout<<"No Block Named "<<block_name<<endl;
            }
        }while(block_name != "A" && block_name != "B" && block_name != "C" && block_name != "D");

        cout<<"Code:"<<password<<endl;
        cout<<"Please remember this code!!"<<endl;
        Sleep(5000);
    }

    string get_name()
    {
        string name;

        name = student :: get_name();

        return name;
    }

    string get_code()
    {
        string code;

        code = student :: get_code();

        return code;
    }
};

class non_hosteller : public student
{
public:
    void get_dayscholar()
    {
        string password;

        password = get_student();

        cout<<"Code:"<<password<<endl;
        cout<<"Please remember this code!!"<<endl;
        Sleep(5000);
    }

    string get_name()
    {
        string name;

        name = student :: get_name();

        return name;
    }

    string get_code()
    {
        string code;

        code = student :: get_code();

        return code;
    }
};


#endif // CLASS_H
