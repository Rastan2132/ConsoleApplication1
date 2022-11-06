#include <iostream>

using namespace std;

int main()
{
    int s=0;
    cout << "enter nubers line" << endl;
    cin >> s;
    cout << endl;

    for (int t = 1; t <= s; t++)
        cout << t << endl;
    //////////////////////////////////////////

    for (int i = 0; i <=s; i++) {

        for (int j = 0; j < s - i; j++) 
            cout<<" ";
        
        for (int j = 0; j < (2 * i - 1); j++)
            cout << "*";

        cout << endl;
    }
    //////////////////////////////////////////

    cout << endl;

    //////////////////////////////////////////

    for (int i = 0; i <= s; i++) {

        for (int j = 0; j < i ; j++)
            cout << "*";

        cout << endl;
    }
    //////////////////////////////////////////

    cout << endl;

    //////////////////////////////////////////

    cout << "#";
    for (int a=0; a < s; a++)
        cout << "*";
    cout << "#"<<endl;
    for (int p = 0; p < s/2; p++)
    {
        cout << "*";
        for (int a = 0; a < s; a++)
            cout << " ";
        cout << "*"<<endl;
    }
    cout << "#";
    for (int a = 0; a < s; a++)
        cout << "*";
    cout << "#" << endl;
}

