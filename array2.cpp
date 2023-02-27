
#include <iostream>
#include <string>

using namespace std;

bool parola(string parola)
{
    int n = parola.length();
    for (int i = 0; i < n; i++)
    {
        for (int k = i + 1; k < n; k++)
        {
            if (parola[i] == parola[k])
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    string parolaInserita;
    cout << "Inserisci una parola" << endl;
    cin >> parolaInserita;
    if (parola(parolaInserita))
    {
        cout << "La parola e' formata da caratteri univoci." << endl;
    }
    else
    {
        cout << "La parola non e' formata da caratteri univoci." << endl;
    }
}