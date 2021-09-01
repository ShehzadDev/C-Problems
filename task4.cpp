#include <iostream>
using namespace std;

int main()
{

    int charcter = 1;
    while (charcter < 127)
    {
        cout << (char)charcter << " ";
        if (charcter % 16 == 0)
            cout << "\n";
        charcter++;
    }
    return 0;

}