#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // init file
    fstream dataFile;

    // varibles
    char _model[30], __status[10];
    int _price;
    bool _status;

    // console programe
    cout << "Arun Singh Mobile Shop \n";
    cout << "Enter Your Mobile model:";
    cin >> _model;
    cout << "Enter Mobile Price:";
    cin >> _price;

    // give input like 0 and 1
    // 1 is for available and 0 is for not available
    cout << "Status";
    cin >> _status;

    // Append mode
    dataFile.open("shop.txt", ios::app);

    if (dataFile.is_open())
    {
        dataFile << "\t******New Entry******\n";
        dataFile << "Model Name:" << _model << endl;
        dataFile << "Model Price:" << _price << endl;
        if (_status == 1)
        {
            dataFile << "Status: Available " << endl;
        }
        else
        {
            dataFile << "Status: Not Available " << endl;
        }
        dataFile << endl;
        // close file after use
        dataFile.close();
    }
    return 0;
}
