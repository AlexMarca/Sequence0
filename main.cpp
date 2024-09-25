#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hello j'ai modifié le print"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}