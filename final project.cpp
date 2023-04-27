#include <iostream>
using namespace std;
class info
{
public:
    int time;
    string name, date, ID;

    int get(int num)
    {
        if (num == 1)
        {

            cout << "Enter your name: ";
            cin >> name;
            cout << "Enter the date Of This Month :";
            cin >> date;
            cout << "Enter the time (HH:MM): ";
            cin >> time;
            ID = name + date;
            cout << "Your Appointment is added and Your ID is :" << ID << endl;
            cout << endl;
        }
    }
};
int main()
{
    int a = 0;
    info f[100];
    string cl[100];
    string id, id1;
    int num;
    for (int i = 0;; i++)
    {
        cout << "1.New Appointment" << endl
             << "2.View Your Appointment" << endl
             << "3.Cancel Appointment" << endl
             << "4.Exit" << endl
             << endl
             << endl;
        cin >> num;
        if (num == 2)
        {
            cout << "Enter Your ID:";
            cin >> id;
            for (int j = 0;; j++)
            {
                while (a == 1)
                {

                    for (int l = 0;; l++)
                    {

                        if (id1 == cl[l])
                        {
                            cout << "ID not found" << endl;
                            goto c;
                        }
                    }
                };

                if (id == f[j].ID)
                {
                    cout << f[j].name << " Your Are appointed on the " << f[j].date << endl;
                    break;
                }
                else{
                cout<<"invalid id"<<endl;
				break;	
				}
            }
        }
        else if (num == 3)
        {
            cout << "Enter You ID:";
            cin >> id1;
            a = 1;
            for (int j = 0;; j++)
            {
                for (int l = 0;; l++)
                {

                    if (id1 == cl[l])
                    {
                        cout << "ID not found" << endl;
                    }
                    else
                    {
                        break;
                    }
                }
                if (id1 == f[j].ID)
                {
                    int k = 0;
                    cl[k] = f[j].ID;
                    k++;
                    cout << f[j].name << " Your appointment is canceled!!! " << endl<<endl;
                    break;
                }
                else{
                	cout<<"invalid id"<<endl;
                	break;
				}
            }
        }
        else if (num == 4)
        {
            break;
        }
    c:
        f[i].get(num);
    }

    return 0;
}
