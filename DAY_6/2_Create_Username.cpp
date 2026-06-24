// create username by adding first_name and last_name

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string first_name;
    cout << "Enter your First Name" << endl;
    getline(cin, first_name);
    string last_name;
    cout << "Enter your First Name" << endl;
    getline(cin, last_name);

    cout << "Username is:" << first_name + last_name;

    return 0;
}