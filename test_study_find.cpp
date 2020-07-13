#include <iostream>
using namespace std;
#include <cstring>

char& find(char a[], char c, bool& success)
{
    int whr = 0;
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] == c) {
            success = 1;
            whr = i;
        }
    }
    return *(a + whr);
}
int main()
{
    char s[] = "Mike";
    bool b = false;
    char& loc = find(s, 'M', b);
    if (b == false) {
        cout << "M을 발견할 수 없다" << endl;
        return 0;
    }
    loc = 'm';
    cout << s << endl;
}