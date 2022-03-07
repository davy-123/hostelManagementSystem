#include <bits\stdc++.h>

using namespace std;

class Form
{
public:
    char Roll_No[20];
    char Name[21];
    char Father_name[21];
    char Mother_name[21];
    char DOB[12];
    char Mob_no[12];
    char Email_id[32];
    char gender[2];
    int sem;
    char Branch[20];
    bool Ec_wk_sec;
    long long Ann_Family_income;
    int JEE_Main_Rank;

    void input();
    void show();
    //void write();
    void read();
    int rank_check();
    void check();
    friend ostream &operator<<(ostream &out, Form &f);
};

// OPERATOR OVERLOADING
ostream &operator<<(ostream &out, Form &f)
{
    system("cls");
    cout << "\t\t\t\t\tYour Hostel Form" << endl;
    cout << "\t\t\t\t\t----------------\n\n";
    out << "                    \t             " << f.Roll_No << endl;
    cout << "University Roll No\t----------------------"
         << "\n\n";
    out << "      \t    " << f.Name << endl;
    cout << "Name\t----------------------"
         << "\n\n";
    out << "               \t    " << f.Father_name << endl;
    cout << "Father's Name\t----------------------"
         << "\n\n";
    out << "               \t    " << f.Mother_name << endl;
    cout << "Mother's Name\t----------------------"
         << "\n\n";
    ;
    out << "      \t    " << f.DOB << endl;
    cout << "DOB\t----------------------"
         << "\n\n";
    out << "             \t     " << f.Mob_no << endl;
    cout << "Mobile No.\t----------------------"
         << "\n\n";
    out << "               \t   " << f.Email_id << endl;
    cout << "Email ID\t-------------------------------"
         << "\n\n";
    out << "          \t   " << f.gender << endl;
    cout << "Gender\t-------------------------------"
         << "\n\n";
    out << "         \t      " << f.Branch << endl;
    cout << "Branch\t-------------------------------"
         << "\n\n";
    out << "                \t" << f.sem << endl;
    cout << "Semester\t----------------------"
         << "\n\n";
    out << "                       \t     Rs." << f.Ann_Family_income << endl;
    cout << "Annual Family Income\t----------------------"
         << "\n\n";
    out << "                      \t" << f.JEE_Main_Rank << endl;
    cout << "Jee Mains Rank\t----------------------"
         << "\n\n";
    out << "\t\t\t\t\t\t     " << f.Name << endl;
    cout << "\t\t\t\tSignature\t----------------------"
         << "\n\n";

    if (f.Ec_wk_sec)
    {
        cout << " -------------------------------------------------------------------------------------------" << endl;
        cout << "| Student belongs to Economically Weaker section...Please attach proof(EWS) with this form |" << endl;
        cout << " -------------------------------------------------------------------------------------------" << endl;
    }
    return (out);
}
void Form ::input()
{
    system("CLS");

    cout << "\t HOSTEL FORM" << endl;
    cout << "\t-------------\n\n";
    cout << "University Roll No.\t----------------------"
         << "\n\n";
    cout << "Name\t----------------------"
         << "\n\n";
    cout << "Father's Name\t----------------------"
         << "\n\n";
    cout << "Mother's Name\t----------------------"
         << "\n\n";
    cout << "DOB\t----------------------"
         << "\n\n";
    cout << "Mobile No.\t----------------------"
         << "\n\n";
    cout << "Email ID\t-------------------------------"
         << "\n\n";
    cout << "Gender\t-------------------------------"
         << "\n\n";
    cout << "Branch\t-------------------------------"
         << "\n\n";
    cout << "Semester\t-------------------------------"
         << "\n\n";
    cout << "Do you belong to Economic Weaker Section?\t-------------------------(1/0)\n\n";
    cout << "Annual Family Income\t----------------------"
         << "\n\n";
    cout << "Jee Mains Rank\t----------------------"
         << "\n\n\n";
    cout << "\t\t\t\t\tSignature\t----------------------"
         << "\n\n";

    cout << "\t ENTER YOUR DETAILS" << endl;
    cout << "\t---------------------" << endl;

    cout << "University Roll No. : ";
    cin >> Roll_No;

    cin.ignore();

    cout << "Name : ";
    cin.getline(Name, 20);

    cout << "Father's Name : ";
    cin.getline(Father_name, 20);

    cout << "Mother's Name : ";
    cin.getline(Mother_name, 20);

    cout << "Date of Birth : ";
    cin.getline(DOB, 11);

    cout << "Mobile No. : ";
    cin.getline(Mob_no, 11);

    cout << "Email ID : ";
    cin.getline(Email_id, 31);

    cout << "Gender (M/F) : ";
    cin.getline(gender, 2);

    cout << "Branch (CSE/ IT/ ECE/ MECH/ BIO/ EEE) : ";
    cin.getline(Branch, 19);

    cout << "Semester : ";
    cin >> sem;

    cout << "Do you belong to Economically Weaker Section(1/0) : ";
    cin >> Ec_wk_sec;

    cin.ignore();

    cout << "Annual Family Income from all sources : ";
    cin >> Ann_Family_income;

    cin.ignore();

    cout << "JEE Mains Rank : ";
    cin >> JEE_Main_Rank;

    // Call to Insertion operator overloaded function
    cout << *this << endl;
    check();
}

void Form ::show()
{
    system("CLS");

    cout << "\t\t\t\t\tYour Hostel Form" << endl;
    cout << "\t\t\t\t\t----------------\n\n";
    cout << "                    \t             " << Roll_No << endl;
    cout << "University Roll No\t----------------------"
         << "\n\n";
    cout << "      \t    " << Name << endl;
    cout << "Name\t----------------------"
         << "\n\n";
    cout << "               \t    " << Father_name << endl;
    cout << "Father's Name\t----------------------"
         << "\n\n";
    cout << "               \t    " << Mother_name << endl;
    cout << "Mother's Name\t----------------------"
         << "\n\n";
    ;
    cout << "      \t    " << DOB << endl;
    cout << "DOB\t----------------------"
         << "\n\n";
    cout << "             \t     " << Mob_no << endl;
    cout << "Mobile No.\t----------------------"
         << "\n\n";
    cout << "               \t   " << Email_id << endl;
    cout << "Email ID\t-------------------------------"
         << "\n\n";
    cout << "          \t   " << gender << endl;
    cout << "Gender\t-------------------------------"
         << "\n\n";
    cout << "         \t      " << Branch << endl;
    cout << "Branch\t-------------------------------"
         << "\n\n";
    cout << "                \t" << sem << endl;
    cout << "Semester\t----------------------"
         << "\n\n";
    cout << "                       \t     Rs." << Ann_Family_income << endl;
    cout << "Annual Family Income\t----------------------"
         << "\n\n";
    cout << "                      \t" << JEE_Main_Rank << endl;
    cout << "Jee Mains Rank\t----------------------"
         << "\n\n";
    cout << "\t\t\t\t\t\t     " << Name << endl;
    cout << "\t\t\t\tSignature\t----------------------"
         << "\n\n";

    if (Ec_wk_sec)
    {
        cout << " -------------------------------------------------------------------------------------------" << endl;
        cout << "| Student belongs to Economically Weaker section...Please attach proof(EWS) with this form |" << endl;
        cout << " -------------------------------------------------------------------------------------------" << endl;
    }
}

/* void Form ::write()
{
    ofstream fout;
    fout.open("form.txt", ios::app | ios::binary);

    if (!fout)
    {
        cout << "File not open" << endl;
    }

    else
        fout.write((char *)this, sizeof(*this));
    cout << "\nStudent Data stored in file successfully!\n";
    fout.close();
}
*/

void Form ::read()
{
    ifstream fin;
    fin.open("form.txt", ios::in | ios::binary);

    if (!fin)
    {
        cout << "File not open" << endl;
    }

    else
    {
        fin.read((char *)this, sizeof(*this));

        while (!fin.eof())
        {
            show();
            fin.read((char *)this, sizeof(*this));
        }
    }

    fin.close();
}

void Form::check()
{
    ofstream f1;

    if ((strcmp(Branch, "CSE") == 0 || strcmp(Branch, "IT") == 0) && strcmp(gender, "M") == 0)
    {
        f1.open("form1.txt", ios::out | ios::app | ios::binary);

        if (!f1)
        {
            cout << "File not found!" << endl;
        }

        else
            f1.write((char *)this, sizeof(*this));

        cout << "\nStudent Data stored in file1 successfully!\n";
        f1.close();
    }

    else if ((strcmp(Branch, "CSE") == 0 || strcmp(Branch, "IT") == 0) && strcmp(gender, "F") == 0)
    {
        f1.open("form4.txt", ios::out | ios::app | ios::binary);

        if (!f1)
        {
            cout << "File not found!" << endl;
        }

        else
            f1.write((char *)this, sizeof(*this));

        cout << "\nStudent Data stored in file4 successfully!\n";
        f1.close();
    }

    else if ((strcmp(Branch, "EEE") == 0 || strcmp(Branch, "ECE") == 0) && strcmp(gender, "M") == 0)
    {
        f1.open("form2.txt", ios::out | ios::app | ios::binary);

        if (!f1)
        {
            cout << "File not found!" << endl;
        }

        else
            f1.write((char *)this, sizeof(*this));

        cout << "\nStudent Data stored in file2 successfully!\n";
        f1.close();
    }

    else if ((strcmp(Branch, "EEE") == 0 || strcmp(Branch, "ECE") == 0) && strcmp(gender, "F") == 0)
    {
        f1.open("form5.txt", ios::out | ios::app | ios::binary);

        if (!f1)
        {
            cout << "File not found!" << endl;
        }

        else
            f1.write((char *)this, sizeof(*this));

        cout << "\nStudent Data stored in file5 successfully!\n";
        f1.close();
    }

    else if ((strcmp(Branch, "MECH") == 0 || strcmp(Branch, "BIO") == 0) && strcmp(gender, "M") == 0)
    {
        f1.open("form3.txt", ios::out | ios::app | ios::binary);

        if (!f1)
        {
            cout << "File not found!" << endl;
        }

        else
            f1.write((char *)this, sizeof(*this));

        cout << "\nStudent Data stored in file3 successfully!\n";
        f1.close();
    }

    else if ((strcmp(Branch, "MECH") == 0 || strcmp(Branch, "BIO") == 0) && strcmp(gender, "F") == 0)
    {
        f1.open("form6.txt", ios::out | ios::app | ios::binary);

        if (!f1)
        {
            cout << "File not found!" << endl;
        }

        else
            f1.write((char *)this, sizeof(*this));

        cout << "\nStudent Data stored in file6 successfully!\n";
        f1.close();
    }

    else
        cout << "\nSomething went wrong! Cant store student data in file!\n";
}

void hostel_details()
{
    system("CLS");
    fstream obj;
    obj.open("hosteldetails.txt", ios::in);

    string str;

    while (!obj.eof())
    {
        getline(obj, str);
        cout << str << endl;
    }
    obj.close();
}

void notice()
{
    string str;
    int choice1;
    fstream obj;

    do
    {
        system("CLS");

        cout << "\t\t\t\t\t---------------------------\n";
        cout << "\t\t\t\t\t| WELCOME TO NOTICE BOARD |\n";
        cout << "\t\t\t\t\t---------------------------\n";
        cout << endl;

        cout << "Select the option you want to get information about -:\n";
        cout << "------------------------------------------------------\n";
        cout << endl;

        cout << "1. Circular regarding re-opening of university hostels\n";
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout << "2. List of applicants for interview of the contract of various shops in hostels ,PU,Chandigarh 2021\n";
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout << "3. Notice regarding Varn While Learn Programme\n";
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout << "4. Cancellation of Interviews for Hostel Messes/Canteens/Shops\n";
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout << "5. One Week Worshop\n";
        cout << "~~~~~~~~~~~~~~~~~~~\n";
        cout << "6. Auction Notice for various articles\n";
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout << "7. Exit from Notice Board\n";
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~\n";

        cin >> choice1;

        if (choice1 > 7 || choice1 < 1)
            cout << "\nPlease enter a valid choice!\n";

        else
        {

            switch (choice1)
            {

            case 1:

                system("CLS");
                obj.open("notice_1.txt", ios::in);

                while (!obj.eof())
                {
                    getline(obj, str);
                    cout << str << endl;
                }
                obj.close();
                system("pause");
                break;

            case 2:

                system("CLS");
                obj.open("notice_2.txt", ios::in);

                while (!obj.eof())
                {
                    getline(obj, str);
                    cout << str << endl;
                }
                obj.close();
                system("pause");
                break;

            case 3:

                system("CLS");
                obj.open("notice_3.txt", ios::in);

                while (!obj.eof())
                {
                    getline(obj, str);
                    cout << str << endl;
                }
                obj.close();
                system("pause");
                break;

            case 4:

                system("CLS");
                obj.open("notice_4.txt", ios::in);

                while (!obj.eof())
                {
                    getline(obj, str);
                    cout << str << endl;
                }
                obj.close();
                system("pause");
                break;

            case 5:

                system("CLS");
                obj.open("notice_5.txt", ios::in);

                while (!obj.eof())
                {
                    getline(obj, str);
                    cout << str << endl;
                }
                obj.close();
                system("pause");
                break;

            case 6:

                system("CLS");
                obj.open("notice_6.txt", ios::in);

                while (!obj.eof())
                {
                    getline(obj, str);
                    cout << str << endl;
                }
                obj.close();
                system("pause");
                break;
            }
        }

    } while (choice1 != 7);
}

void forms()
{
    Form f;
    int choice;
    do
    {
        system("CLS");

        cout << "\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout << "\t\t\t\t\t    HOSTEL REGISTERATION FORM   \n";
        cout << "\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";

        cout << "Choose what you want to do -:\n";
        cout << "-----------------------------\n";
        cout << endl;
        cout << "1. Fill the registration form\n";
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout << "2. Exit from Forms portal\n";
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~\n";

        cin >> choice;

        switch (choice)
        {
        case 1:
            f.input();
            system("pause");
            break;

        case 2:
            break;

        default:
            cout << "\nPlease enter a valid choice!\n";
            system("pause");
        }

    } while (choice != 2);
}

class Admin
{
    int admin_id;
    char admin_name[20];
    long long int admin_mob;
    friend void admin_panel();

public:
    Admin()
    {
        admin_id = 0;
        strcpy(admin_name, "No Name");
        admin_mob = 0;
    }

    void getAdminData();

    void showAdminData();

    void storeAdminData();
    void viewAllAdminData();

    void searchAdminData();
    void deleteAdminData();
    void updateAdminData();
};
void Admin ::getAdminData()
{
    cout << endl;
    cout << "Enter Admin Details -:" << endl;
    cout << "----------------------" << endl;

    cout << "Enter id : ";
    cin >> admin_id;

    cin.ignore();

    cout << "Enter name : ";
    cin.getline(admin_name, 19);

    cout << "Enter mobile number : ";
    cin >> admin_mob;
}
void Admin ::showAdminData()
{
    cout << endl;
    //cout<<"ADMIN DETAILS -:"<<endl;
    //cout<<"----------------"<<endl;

    cout << "\n " << admin_id << setw(33) << admin_name << setw(33) << admin_mob;
    cout << endl;
    //cout<<"Id : "<<admin_id<<endl;
    //cout<<"Name : "<<admin_name<<endl;
    //cout<<"Mobile Number : "<<admin_mob<<endl;
}
void Admin::storeAdminData()
{
    if (admin_id == 0 && admin_mob == 0)
        cout << "\nAdmin data is not initialised!\n";

    else
    {
        ofstream fout;
        fout.open("admininfo.txt", ios::app | ios::binary);
        fout.write((char *)this, sizeof(*this));
        fout.close();
        cout << "\nData stored in the file successfully!\n";
    }
}

void Admin::viewAllAdminData()
{
    ifstream fin;
    fin.open("admininfo.txt", ios::in | ios::binary);

    if (!fin)
        cout << "\nFile not found\n";

    else
    {
        system("CLS");
        cout << endl;
        cout << "\t\t\t\t\tSHOWING THE RECORD OF ALL THE ADMINS -:\n";
        cout << "\t\t\t\t\t----------------------------------------\n";

        cout << "\n\n----" << setw(30) << "------" << setw(40) << "---------------\n";
        cout << "\n\n ID " << setw(30) << " Name " << setw(40) << " Mobile Number \n";
        cout << "\n\n----" << setw(30) << "------" << setw(40) << "---------------\n";

        fin.read((char *)this, sizeof(*this));
        while (!fin.eof())
        {
            showAdminData();
            fin.read((char *)this, sizeof(*this));
        }
    }
    fin.close();
}

void Admin::searchAdminData()
{
    ifstream fin;
    fin.open("admininfo.txt", ios::in | ios::binary);

    if (!fin)
        cout << "\nFile not found\n";

    else
    {
        cout << endl;

        int id, n = 0;
        cout << "Enter the id of the admin you want to search about : ";
        cin >> id;

        fin.read((char *)this, sizeof(*this));

        while (!fin.eof())
        {
            if (id == admin_id)
            {
                cout << "\nAdmin found!\n";
                showAdminData();
                n = 1;
                break;
            }
            fin.read((char *)this, sizeof(*this));
        }

        if (n == 0)
            cout << "\nWrong id entered! Couldnt find a record in the file with this id!\n";
    }
    fin.close();
}

void Admin::deleteAdminData()
{
    ifstream fin;
    ofstream fout;

    fin.open("admininfo.txt", ios::in | ios::binary);
    fout.open("temp.txt", ios::out | ios::binary);

    if (!fin)
        cout << "\nFile not found\n";

    else
    {
        cout << endl;

        int id, n = 0;
        char ch;
        cout << "Enter the id of the admin you want to delete record of : ";
        cin >> id;

        fin.read((char *)this, sizeof(*this));

        while (!fin.eof())
        {
            if (id == admin_id)
            {
                cout << "\nAdmin found!\n";
                showAdminData();

                cout << "\n Are you sure you want to delete this record? (y/n) :";
                cin >> ch;

                if (ch == 'Y' || ch == 'y')
                    cout << "\nOhk! Record will be deleted successully!\n";
                else
                    fout.write((char *)this, sizeof(*this));

                n = 1;
            }
            else
            {
                fout.write((char *)this, sizeof(*this));
            }
            fin.read((char *)this, sizeof(*this));
        }

        if (n == 0)
            cout << "\nWrong id entered! Couldnt find a record in the file with this id!\n";
    }

    fin.close();
    fout.close();
    remove("admininfo.txt");
    rename("temp.txt", "admininfo.txt");
}

void Admin::updateAdminData()
{
    fstream file;
    file.open("admininfo.txt", ios::in | ios::out | ios::ate | ios::binary);

    if (!file)
    {
        cout << "\nFile not found!\n";
    }

    file.seekg(0);
    file.read((char *)this, sizeof(*this));

    int id, n = 0, pos;
    char ch;
    cout << "\nEnter the id of the admin whose record you want to update: ";
    cin >> id;

    while (!file.eof())
    {
        if (id == admin_id)
        {
            cout << "\nAdmin found!\n";
            showAdminData();

            cout << "\n Are you sure you want to update this record? (y/n) :";
            cin >> ch;

            if (ch == 'Y' || ch == 'y')
            {
                getAdminData();

                pos = (int)file.tellp() - sizeof(*this);
                file.seekp(pos);

                file.write((char *)this, sizeof(*this));

                cout << "\nData updated successfully!\n";
            }

            n = 1;
        }

        file.read((char *)this, sizeof(*this));
    }

    file.close();

    if (n == 0)
        cout << "\nWrong admin id entered! There is no such data present in the file with this admin id!\n";
}

void admin_management_panel()
{
    Admin ad;
    int choice;
    do
    {

        system("CLS");

        cout << "\t\t\t\t\t--------------------------\n";
        cout << "\t\t\t\t\t| ADMIN MANAGEMENT PANEL |\n";
        cout << "\t\t\t\t\t--------------------------\n";

        cout << endl
             << endl;
        cout << "What do you wish to do?\n";
        cout << "-----------------------\n";
        cout << endl;
        cout << "1. Insert new admin record\n";
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout << "2. View all admin records\n";
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout << "3. Search an admin record\n";
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout << "4. Delete an admin record\n";
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout << "5. Update an admin record\n";
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout << "6. Exit from Admin Management Panel\n";
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

        cin >> choice;

        if (choice > 6 || choice < 1)
            cout << "Please enter a valid choice!\n";

        else
        {
            switch (choice)
            {

            case 1:
                ad.getAdminData();
                ad.storeAdminData();
                system("pause");
                break;

            case 2:
                ad.viewAllAdminData();
                system("pause");
                break;

            case 3:
                ad.searchAdminData();
                system("pause");
                break;

            case 4:
                ad.deleteAdminData();
                system("pause");
                break;

            case 5:
                ad.updateAdminData();
                system("pause");
                break;
            }
        }
    }while (choice != 6);
}

void user_panel()
{

    int choice;

    do
    {
        system("CLS");

        cout << "\t\t\t\t\t--------------\n";
        cout << "\t\t\t\t\t| USER PANEL |\n";
        cout << "\t\t\t\t\t--------------\n";

        cout << endl;
        cout << "What do you wish to do?\n";
        cout << "-----------------------\n";
        cout << endl;
        cout << "1. Hostel Details And Rules\n";
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout << "2. Notice Board\n";
        cout << "~~~~~~~~~~~~~~~\n";
        cout << "3. Forms\n";
        cout << "~~~~~~~~\n";
        cout << "4. Exit from User Panel\n";
        cout << "~~~~~~~~~~~~~~~~~~~~~~~\n";

        cin >> choice;

        if (choice > 4 || choice < 1)
            cout << "Please enter a valid choice!\n";

        else
        {
            switch (choice)
            {

            case 1:
                hostel_details();
                system("pause");
                break;

            case 2:
                notice();
                break;

            case 3:
                forms();
                break;
            }
        }

    } while (choice != 4);
}

//MULTIPLE INHERITANCE
class hostel : public Admin, public Form
{
    int room_no;
    char name[30];
    char f_name[30];
    char m_name[30];
    char phone[12];
    int semester;

public:
    hostel()
    {
        strcpy(name, "NULL");
        strcpy(f_name, "NULL");
        strcpy(m_name, "NULL");
        strcpy(phone, "NULL");
        semester = 0;
    }

    int main_menu();
    int add(int);
    void search(int);
    int rooms(int);
    int edit(int);
    int check(int, int);
    int modify(int);
    int delete_rec(int);
};

int hostel::add(int id)
{

    system("CLS");
    int r, flag, n = 0, p;
    p = id;
    char roll[20];
    Form f;

    ifstream fin;
    ofstream fout;

    if (id == 102001)
    {
        fin.open("form1.txt", ios::in | ios::binary);
        fout.open("Record1.txt", ios::app | ios::binary);
    }

    else if (id == 102002)
    {
        fin.open("form2.txt", ios::in | ios::binary);
        fout.open("Record2.txt", ios::app | ios::binary);
    }

    else if (id == 102003)
    {
        fin.open("form3.txt", ios::in | ios::binary);
        fout.open("Record3.txt", ios::app | ios::binary);
    }

    else if (id == 102004)
    {
        fin.open("form4.txt", ios::in | ios::binary);
        fout.open("Record4.txt", ios::app | ios::binary);
    }

    else if (id == 102005)
    {
        fin.open("form5.txt", ios::in | ios::binary);
        fout.open("Record5.txt", ios::app | ios::binary);
    }

    else if (id == 102006)
    {
        fin.open("form6.txt", ios::in | ios::binary);
        fout.open("Record6.txt", ios::app | ios::binary);
    }

    if (!fout || !fin)
    {
        cout << "\nFile is empty....No Registeration forms are there!\n";
    }
    else
    {
        cout << "\t\t\t\t\t BOOKING A ROOM -:\n";
        cout << "\t\t\t\t\t------------------\n";

        cout << endl;

        fin.read((char *)&f, sizeof(f));

        while (!fin.eof())
        {
            cout << "\n\nStudent University Roll No. :\t" << f.Roll_No;
            if (f.rank_check())
            {
                cout << "\nStudent is eligible for room allotment!\n";

                cout << "\n  Student Detalis";
                cout << "\n********************";

                strcpy(name, f.Name);
                cout << "\nName:\t " << name;

                strcpy(f_name, f.Father_name);
                cout << "\nFather's Name:\t " << f_name;

                strcpy(m_name, f.Mother_name);
                cout << "\nMother's Name:\t " << m_name;

                strcpy(phone, f.Mob_no);
                cout << "\nPhone No:\t " << phone;

                cout << "\nBranch:\t\t    " << f.Branch;

                semester = f.sem;
                cout << "\nSemester:\t " << semester;

                cout << endl;

                char ch;

                do
                {
                    cout << "\nAssign a room to this student!";
                    cout << "\nRoom no: ";
                    cin >> r;

                    flag = check(r, p);

                    if (flag)
                    {
                        cout << "\nSorry..!!!Room is already booked";
                        cout << "\nDo you want to assign a new room? (y / n)";
                        cin >> ch;
                        if (ch == 'n' || ch == 'N')
                            break;
                    }
                    else
                        break;

                } while (ch == 'y' || ch == 'Y');

                if (flag == 0)
                {

                    room_no = r;
                    strcpy(name, f.Name);
                    strcpy(f_name, f.Father_name);
                    strcpy(m_name, f.Mother_name);
                    strcpy(phone, f.Mob_no);
                    semester = f.sem;

                    fout.write((char *)this, sizeof(*this));
                    cout << "\n\nRoom is booked!!!";
                }
            }
            else
                cout << "\nRank of this student is not enough for room allotment! Sorry!\n";
            fin.read((char *)&f, sizeof(f));
        }
    }
    cout << endl;
    fin.close();
    fout.close();
    if (id == 102001)
    {
        remove("form1.txt");
    }

    else if (id == 102002)
    {
        remove("form2.txt");
    }

    else if (id == 102003)
    {
        remove("form3.txt");
    }

    else if (id == 102004)
    {
        remove("form4.txt");
    }

    else if (id == 102005)
    {
        remove("form5.txt");
    }

    else if (id == 102006)
    {
        remove("form6.txt");
    }

    return 0;
}

void hostel::search(int id)
{

    system("CLS");

    ifstream fin;

    if (id == 102001)
    {
        fin.open("Record1.txt", ios::in | ios::binary);
    }

    else if (id == 102002)
    {
        fin.open("Record2.txt", ios::in | ios::binary);
    }

    else if (id == 102003)
    {
        fin.open("Record3.txt", ios::in | ios::binary);
    }

    else if (id == 102004)
    {
        fin.open("Record4.txt", ios::in | ios::binary);
    }

    else if (id == 102005)
    {
        fin.open("Record5.txt", ios::in | ios::binary);
    }

    else if (id == 102006)
    {
        fin.open("Record6.txt", ios::in | ios::binary);
    }

    int r, n = 0;

    if (!fin)
        cout << "\nFile not found!\n";

    else
    {
        cout << "\t\t\t\t\t SEARCHING A ROOM RECORD -:\n";
        cout << "\t\t\t\t\t---------------------------\n";

        cout << "\nEnter room no: ";
        cin >> r;

        fin.read((char *)this, sizeof(*this));

        while (!fin.eof())
        {

            if (room_no == r)
            {

                cout << "\nStudent Details";
                cout << "\n***************";

                cout << "\n\nRoom no: " << room_no;
                cout << "\nName: " << name;
                cout << "\nFather's Name: " << f_name;
                cout << "\nMother's Name: " << m_name;
                cout << "\nPhone no: " << phone;
                cout << "\nSemester: " << semester;

                n = 1;
                break;
            }

            fin.read((char *)this, sizeof(*this));
        }

        if (n == 0)
        {
            cout << "\nSorry Room not found!!\n";
        }
    }

    cout << endl;
    fin.close();

    return;
}

int hostel::rooms(int id)
{
    system("CLS");
    ifstream fin;

    if (id == 102001)
    {
        fin.open("Record1.txt", ios::in | ios::binary);
    }

    else if (id == 102002)
    {
        fin.open("Record2.txt", ios::in | ios::binary);
    }

    else if (id == 102003)
    {
        fin.open("Record3.txt", ios::in | ios::binary);
    }

    else if (id == 102004)
    {
        fin.open("Record4.txt", ios::in | ios::binary);
    }

    else if (id == 102005)
    {
        fin.open("Record5.txt", ios::in | ios::binary);
    }

    else if (id == 102006)
    {
        fin.open("Record6.txt", ios::in | ios::binary);
    }

    if (!fin)
        cout << "\nFile not found!\n";

    else
    {
        cout << "\t\t\t\t\t\t\t\t LIST OF ROOMS ALLOTED -:\n";
        cout << "\t\t\t\t\t\t\t\t-------------------------\n";

        cout << endl
             << endl;

        cout << setw(5) << "Room No." << setw(20) << "Name" << setw(37) << "Father's Name" << setw(30) << "Mother's Name" << setw(20) << "Phone No." << setw(15) << "Semester\n";

        cout << setw(5) << "--------" << setw(20) << "----" << setw(37) << "-------------" << setw(30) << "-------------" << setw(20) << "---------" << setw(15) << "--------\n";

        fin.read((char *)this, sizeof(*this));

        while (!fin.eof())
        {
            cout << "\n\n";
            cout << setw(5) << room_no << setw(30) << name << setw(30) << f_name << setw(30) << m_name << setw(20) << phone << setw(10) << semester;

            fin.read((char *)this, sizeof(*this));
        }
        cout << endl;
    }
    fin.close();

    return 0;
}

int hostel::edit(int id)

{
    int choice, p = id;

    do
    {
        system("CLS");

        cout << "\t\t\t\t\t EDITING A ROOM RECORD -:\n";
        cout << "\t\t\t\t\t-------------------------\n";

        cout << "\nEDIT MENU";
        cout << "\n*********\n";

        cout << "\n1. Modify Student Record ";
        cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~";
        cout << "\n2. Delete Student Record ";
        cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~";
        cout << "\n3. Exit ";
        cout << "\n~~~~~~~~";
        cout << endl;

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {

        case 1:
            modify(p);
            system("pause");
            break;

        case 2:
            delete_rec(p);
            system("pause");
            break;

        case 3:
            break;

        default:
            cout << "\nInvalid Choice! Please enter a valid choice!\n";
        }

    } while (choice != 3);

    return 0;
}

int hostel::check(int r, int id)
{

    int flag = 0;

    ifstream fin;

    if (id == 102001)
    {
        fin.open("Record1.txt", ios::in | ios::binary);
    }

    else if (id == 102002)
    {
        fin.open("Record2.txt", ios::in | ios::binary);
    }

    else if (id == 102003)
    {
        fin.open("Record3.txt", ios::in | ios::binary);
    }

    else if (id == 102004)
    {
        fin.open("Record4.txt", ios::in | ios::binary);
    }

    else if (id == 102005)
    {
        fin.open("Record5.txt", ios::in | ios::binary);
    }

    else if (id == 102006)
    {
        fin.open("Record6.txt", ios::in | ios::binary);
    }

    if (!fin)
        cout << "\nFile not found!\n";

    else
    {
        fin.read((char *)this, sizeof(*this));

        while (!fin.eof())
        {
            if (room_no == r)
            {
                flag = 1;
                break;
            }

            fin.read((char *)this, sizeof(*this));
        }
    }
    fin.close();
    return (flag);
}

int hostel::modify(int id)
{
    system("CLS");

    cout << "\t\t\t\t\t MODIFYING A ROOM RECORD -:\n";
    cout << "\t\t\t\t\t---------------------------\n";

    long pos, flag, r;
    char ch;

    cout << "\nEnter room no: ";
    cin >> r;

    fstream file;

    if (id == 102001)
        file.open("Record1.txt", ios::in | ios::out | ios::binary);

    else if (id == 102002)
        file.open("Record2.txt", ios::in | ios::out | ios::binary);

    else if (id == 102003)
        file.open("Record3.txt", ios::in | ios::out | ios::binary);

    else if (id == 102004)
        file.open("Record4.txt", ios::in | ios::out | ios::binary);

    else if (id == 102005)
        file.open("Record5.txt", ios::in | ios::out | ios::binary);

    else if (id == 102006)
        file.open("Record6.txt", ios::in | ios::out | ios::binary);

    flag = 0;
    file.seekg(0);

    while (!file.eof())
    {

        pos = file.tellg();

        file.read((char *)this, sizeof(*this));

        if (room_no == r)
        {
            cout << "\nName: " << name;
            cout << "\nFather's Name: " << f_name;
            cout << "\nMother's Name: " << m_name;
            cout << "\nPhone no: " << phone;
            cout << "\nSemester: " << semester;

            cout << "\n\nDo you want to modify this record(y/n): ";
            cin >> ch;

            if (ch == 'n' || ch == 'N')
            {
                cout << "\nOhk! Record will not be modified!\n";
                flag = 1;
            }

            else
            {
                cout << "\nEnter New Details";
                cout << "\n*****************";

                cin.ignore();

                cout << "\nName: ";
                cin.getline(name, 29);

                cout << "Father's Name: ";
                cin.getline(f_name, 29);

                cout << "Mother's Name: ";
                cin.getline(m_name, 29);

                cout << "Phone no: ";
                cin.getline(phone, 11);

                cout << "Semester: ";
                cin >> semester;

                file.seekg(pos);

                file.write((char *)this, sizeof(*this));

                cout << "\nRecord is modified!!\n";
                flag = 1;
            }

            break;
        }
    }

    if (flag == 0)
        cout << "\nSorry Room no. not found!!\n";

    file.close();
    return 0;
}

int hostel::delete_rec(int id)
{
    system("CLS");
    int flag = 0, r;

    cout << "\t\t\t\t\t DELETING A ROOM RECORD -:\n";
    cout << "\t\t\t\t\t--------------------------\n";

    cout << "\nEnter room no: ";
    cin >> r;

    char ch;

    ifstream fin;
    ofstream fout("temp.txt", ios::out | ios::binary);

    if (id == 102001)
    {
        fin.open("Record1.txt", ios::in | ios::binary);
    }

    else if (id == 102002)
    {
        fin.open("Record2.txt", ios::in | ios::binary);
    }

    else if (id == 102003)
    {
        fin.open("Record3.txt", ios::in | ios::binary);
    }

    else if (id == 102004)
    {
        fin.open("Record4.txt", ios::in | ios::binary);
    }

    else if (id == 102005)
    {
        fin.open("Record5.txt", ios::in | ios::binary);
    }

    else if (id == 102006)
    {
        fin.open("Record6.txt", ios::in | ios::binary);
    }

    fin.read((char *)this, sizeof(*this));

    while (!fin.eof())
    {

        if (room_no == r)
        {
            cout << "\nName: " << name;
            cout << "\nFather's Name: " << f_name;
            cout << "\nMother's Name: " << m_name;
            cout << "\nPhone no: " << phone;
            cout << "\nSemester: " << semester;

            cout << "\n\nDo you want to delete this record(y/n): ";
            cin >> ch;

            if (ch == 'n')
                fout.write((char *)this, sizeof(*this));

            flag = 1;
        }

        else
            fout.write((char *)this, sizeof(*this));

        fin.read((char *)this, sizeof(*this));
    }

    fin.close();
    fout.close();

    if (flag == 0)
        cout << "\nSorry Room no. not found!!\n";

    else
    {

        if (id == 102001)
        {
            remove("Record1.txt");
            rename("temp.txt", "Record1.txt");
        }

        else if (id == 102002)
        {
            remove("Record2.txt");
            rename("temp.txt", "Record2.txt");
        }

        else if (id == 102003)
        {
            remove("Record3.txt");
            rename("temp.txt", "Record3.txt");
        }

        else if (id == 102004)
        {
            remove("Record4.txt");
            rename("temp.txt", "Record4.txt");
        }

        else if (id == 102005)
        {
            remove("Record5.txt");
            rename("temp.txt", "Record5.txt");
        }

        else if (id == 102006)
        {
            remove("Record6.txt");
            rename("temp.txt", "Record6.txt");
        }
    }

    return 0;
}

int Form::rank_check()
{

    if (JEE_Main_Rank <= 25000 && strcmp(Branch, "CSE") == 0)
        return 1;

    else if (JEE_Main_Rank <= 45000 && strcmp(Branch, "IT") == 0)
        return 1;

    else if (JEE_Main_Rank <= 55000 && strcmp(Branch, "ECE") == 0)
        return 1;

    else if (JEE_Main_Rank <= 85000 && strcmp(Branch, "MECH") == 0)
        return 1;

    else if (JEE_Main_Rank <= 70000 && strcmp(Branch, "EEE") == 0)
        return 1;

    else if (JEE_Main_Rank <= 100000 && strcmp(Branch, "BIO") == 0)
        return 1;

    else
        return 0;
}

void admin_panel()
{
    int choice, f = 0, id, i = 0;

    string str;
    Admin adm;
    ifstream file;
    hostel h;

    char name[30];

    system("cls");

    cout << "\t\t\t\t\t-------------" << endl;
    cout << "\t\t\t\t\t|ADMIN PANEL|" << endl;
    cout << "\t\t\t\t\t-------------" << endl;
    cout << endl;

    do
    {

        cout << "\nEnter details of Admin i.e. in which hostel you want to enter" << endl;
        cout << "\nEnter Admin id : ";
        cin >> id;

        cin.ignore();

        cout << "Enter Admin Name : ";
        cin.getline(name, 30);

        fstream fin;

        fin.open("admininfo.txt", ios::in);

        fin.seekg(0, ios_base::beg);

        fin.read((char *)&adm, sizeof(adm));

        while (!fin.eof())
        {
            if (adm.admin_id == id && strcmp(adm.admin_name, name) == 0)
            {
                i = 0;
                f = 1;
                break;
            }

            fin.read((char *)&adm, sizeof(adm));
        }

        if (f == 0)
        {
            cout << "\nEntered Incorrect Details!" << endl;

            cout << "\nDo you want to login again?(1/0)";
            cin >> i;

            if (i == 1)
                cout << "\nEnter Correct Details-" << endl;
        }

    } while (i == 1);

    if (f == 1)
    {
        switch (id)
        {
        case 102001:

            file.open("hostel1.txt");

            while (!file.eof())
            {
                getline(file, str);
                cout << str << endl;
            }

            file.close();
            system("pause");
            break;

        case 102002:

            file.open("hostel2.txt", ios::in);

            while (!file.eof())
            {
                getline(file, str);
                cout << str << endl;
            }

            file.close();
            system("pause");
            break;

        case 102003:

            file.open("hostel3.txt", ios::in);

            while (!file.eof())
            {
                getline(file, str);
                cout << str << endl;
            }

            file.close();
            system("pause");
            break;

        case 102004:

            file.open("hostel4.txt", ios::in);

            while (!file.eof())
            {
                getline(file, str);
                cout << str << endl;
            }

            file.close();
            system("pause");
            break;

        case 102005:

            file.open("hostel5.txt", ios::in);

            while (!file.eof())
            {
                getline(file, str);
                cout << str << endl;
            }

            file.close();
            system("pause");
            break;

        case 102006:

            file.open("hostel6.txt", ios::in);

            while (!file.eof())
            {
                getline(file, str);
                cout << str << endl;
            }

            file.close();
            system("pause");
            break;
        }

        do
        {
            system("CLS");
            cout << "\t\t\t\t\t--------------" << endl;
            cout << "\t\t\t\t\t  ADMIN PANEL " << endl;
            cout << "\t\t\t\t\t--------------" << endl;

            cout << endl;
            cout << "What do you wish to do in this Hostel?\n";
            cout << "---------------------------------------\n";
            cout << endl;
            cout << "1. Book a room \n";
            cout << "~~~~~~~~~~~~~~~\n";
            cout << "2. Display Student Record \n";
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            cout << "3. List of Rooms Alloted \n";
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            cout << "4. Edit a Record \n";
            cout << "~~~~~~~~~~~~~~~~~\n";
            cout << "5. Exit from Admin Panel \n";
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~\n";

            cin >> choice;

            if (choice > 5 || choice < 1)
                cout << "Please enter a valid choice!\n";

            else
            {
                switch (choice)
                {
                case 1:
                    h.add(id);
                    system("pause");
                    break;

                case 2:
                    h.search(id);
                    system("pause");
                    break;

                case 3:
                    h.rooms(id);
                    system("pause");
                    break;

                case 4:
                    h.edit(id);
                    break;

                case 5:
                    break;
                }
            }

        } while (choice != 5);
    }
}
class Main
{
public:
    // USE OF VIRTUAL FUNCTION
    virtual void main_menu()
    {
        int choose;

        do
        {

            system("CLS");

            cout << "\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            cout << "\t\t\t\t\t     ~WELCOME TO UIET HOSTEL MANAGEMENT SYSTEM~\n";
            cout << "\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

            cout << endl
                 << endl;
            cout << "-----------------\n";
            cout << "| 1. USER PANEL |\n";
            cout << "-----------------\n";

            cout << "------------------\n";
            cout << "| 2. ADMIN PANEL |\n";
            cout << "------------------\n";

            cout << "-----------------------------\n";
            cout << "| 3. ADMIN MANAGEMENT PANEL |\n";
            cout << "-----------------------------\n";

            cout << "-----------\n";
            cout << "| 4. EXIT |\n";
            cout << "-----------\n";

            cout << "\nChoose the panel which you want to open : ";
            cin >> choose;

            switch (choose)
            {
            case 1:
                user_panel();
                break;

            case 2:
                admin_panel();
                break;

            case 3:
                admin_management_panel();
                break;

            case 4:
                cout << endl
                     << endl;
                cout << "\t\t\t\t\t\t\t\t~~~~~~~~~~~~~~\n";
                cout << "\t\t\t\t\t\t\t\t~ THANK YOU! ~\n";
                cout << "\t\t\t\t\t\t\t\t~~~~~~~~~~~~~~\n\n";
                cout << "\t\t\t\t\tThis was UIET HOSTEL MANAGEMENT SYSTEM.\n";
                cout << "\t\t\t\t\tDo visit again!\n";
                break;

            default:
                cout << "\nInvalid choice!\nPlease enter a valid choice!\n";
                break;
            }

        } while (choose != 4);
    }
};
class intro : public Main
{
public:
    void main_menu()
    {
        fstream fmain;
        fmain.open("intro.txt", ios::in | ios::binary);

        string str;

        if (!fmain)
            cout << "\nFile not found!\n";

        while (!fmain.eof())
        {
            getline(fmain, str);
            cout << str << endl;
        }

        fmain.close();
    }
};

int main()
{
    system("CLS");

    cout << "\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << "\t\t\t\t\t     ~WELCOME TO UIET HOSTEL MANAGEMENT SYSTEM~" << endl;
    cout << "\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

    cout << endl
         << endl;
    cout << "\t\t\t\t\t\t\t   ------------------\n";
    cout << "\t\t\t\t\t\t\t  | ABOUT UIET HOSTELS |\n";
    cout << "\t\t\t\t\t\t\t   ------------------\n";
    cout << endl
         << endl;

    intro i;
    // USE OF OBJECT POINTERS
    Main *ptr;
    ptr = &i;
    ptr->main_menu();

    char ch;
    cout << endl
         << endl
         << "Press any key to continue!";
    ch = getchar();
    if (ch)
    {
        Main *m;
        //USE OF NEW KEYWORD TO CALL DEFAULT CONSTRUCTOR
        m = new Main;
        m->main_menu();
    }
}
