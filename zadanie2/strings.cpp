#include <iostream>
using namespace std;


void String_copy(char* d, char* s) {
    for (; *d++ = *s++;);
}

int Len(const char* s) {
    int a = 0;
    for (; *s++; a++);
    return a;
}

int Compare(const char* s, const char* t) {
    for (; (*s == *t) && *s; t++, s++);
    return *s - *t;
}

int main()
{
    char str[] = "Hello!";
    cout << str << endl;
    cout << "Length: " << strlen(str) << " Size: " << sizeof(str) << endl;
    char t[32];
    String_copy(t, str);
    cout << "Copying: " << t << endl;
    char s[32] = "Hella!";
    cout << "Length of 'Hello!': " << Len(str) << endl;
    cout << "Compare 'Hello!' and 'Hella!': " << Compare(str, s) << endl;
}
