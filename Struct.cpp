
#include <iostream>
#include <string.h>
using namespace std;

struct myStructure
{
    int myNum;
    char myLetter;
    double GPA;
    char lop;
};
typedef struct myStructure SV;
int main()
{

    SV a;

    cout << ("Nhap myNum: ");
    cin >> a.myNum;
    cin.ignore(); // Ignore the newline character left in the input buffer

    cout << ("Nhap myLetter: ");
    cin >> a.myLetter;

    cout << ("Nhap GPA va lop: ");
    cin >> a.GPA >> a.lop;

    cout << a.myNum << " " << a.myLetter << " " << a.GPA << " " << a.lop << endl;

    SV b = a;

    return 0;
}
