#include <cstring>
#include <iostream>

using namespace std;

int main()
{
    char str[800000];
    cin>>str;
    char delim[] = ",";
    char *token = strtok(str,delim);
    while (token)
    {
        cout << token << endl;
        token = strtok(NULL,delim);
    }
    return 0;
}