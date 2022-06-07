// finding whether the string does have any duplicates or not
// using for loop

#include <iostream>
using namespace std;

int main()
{
    string str;


    cout << "enter the string" << endl;
    cin >> str;
    for (int i = 0; str[i] != '\0'; i++)
    {
        int count = 1;
        char duplicate;
        for (int j = i + 1; str[j] != '\0'; j++)
        {
            if (str[i] == str[j])
            {
                count++;
                duplicate = str[i];
            }
        }
        if (count > 1)
        {
            cout << duplicate << " is occuring " << count << " times " << endl;
        }
    }
    return 0;
}
