#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hello j'ai modifié le print pour la branche test"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}