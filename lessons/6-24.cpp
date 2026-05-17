#include <iostream>
#include <cstring>
using namespace std;

class MyString
{
public:
    MyString();
    MyString(const char *str);
    MyString(const MyString &rhs);
    ~MyString();

    unsigned short getLen() const { return itsLen; }
    const char *getString() const { return itsMyString; }

    char &operator[](unsigned short offset);
    char operator[](unsigned short offset) const;
    MyString operator+(const MyString &rhs);
    void operator+=(const MyString &rhs);

private:
    unsigned short itsLen;
    char *itsMyString;
};

MyString::MyString()
{
    itsLen = 0;
    itsMyString = new char[1];
    itsMyString[0] = '\0';
}

MyString::MyString(const char *str)
{
    itsLen = strlen(str);
    itsMyString = new char[itsLen + 1];
    for (unsigned short i = 0; i < itsLen; i++)
        itsMyString[i] = str[i];
    itsMyString[itsLen] = '\0';
}

MyString::MyString(const MyString &rhs)
{
    itsLen = rhs.getLen();
    itsMyString = new char[itsLen + 1];
    for (unsigned short i = 0; i < itsLen; i++)
        itsMyString[i] = rhs[i];
    itsMyString[itsLen] = '\0';
}

MyString::~MyString()
{
    delete[] itsMyString;
}

char &MyString::operator[](unsigned short offset)
{
    if (offset >= itsLen)
        return itsMyString[itsLen - 1];
    else
        return itsMyString[offset];
}

char MyString::operator[](unsigned short offset) const
{
    if (offset >= itsLen)
        return itsMyString[itsLen - 1];
    else
        return itsMyString[offset];
}

MyString MyString::operator+(const MyString &rhs)
{
    unsigned short totalLen = itsLen + rhs.getLen();
    MyString temp("");
    delete[] temp.itsMyString;
    temp.itsLen = totalLen;
    temp.itsMyString = new char[totalLen + 1];

    unsigned short i = 0;
    for (i = 0; i < itsLen; i++)
        temp[i] = itsMyString[i];
    for (unsigned short j = 0; j < rhs.getLen(); j++, i++)
        temp[i] = rhs[j];
    temp[totalLen] = '\0';
    return temp;
}

void MyString::operator+=(const MyString &rhs)
{
    unsigned short rhsLen = rhs.getLen();
    unsigned short totalLen = itsLen + rhsLen;
    MyString temp("");
    delete[] temp.itsMyString;
    temp.itsLen = totalLen;
    temp.itsMyString = new char[totalLen + 1];

    unsigned short i = 0;
    for (i = 0; i < itsLen; i++)
        temp[i] = itsMyString[i];
    for (unsigned short j = 0; j < rhs.getLen(); j++, i++)
        temp[i] = rhs[j];
    temp[totalLen] = '\0';

    *this = temp;
}

int main()
{
    MyString s1("initial test");
    cout << "S1:\t" << s1.getString() << endl;

    char *temp = "Hello World";
    s1 = temp;
    cout << "S1:\t" << s1.getString() << endl;

    char tempTwo[20];
    strcpy(tempTwo, "; nice to be here!");
    s1 += tempTwo;
    cout << "tempTwo:\t" << tempTwo << endl;
    cout << "S1:\t" << s1.getString() << endl;

    cout << "S1[4]:\t" << s1[4] << endl;
    s1[4] = 'x';
    cout << "S1:\t" << s1.getString() << endl;

    cout << "S1[999]:\t" << s1[999] << endl;

    MyString s2(" Another myString");
    MyString s3;
    s3 = s1 + s2;
    cout << "S3:\t" << s3.getString() << endl;

    MyString s4;
    s4 = "Why does this work?";
    cout << "S4:\t" << s4.getString() << endl;

    return 0;
}