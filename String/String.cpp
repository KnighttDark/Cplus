#include <iostream>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
using namespace std;

int main()
{
    char a[1000];
    cin.getline(a, sizeof(a));
    int cnt[26] = {0};
    for (int i = 0; i < strlen(a); i++)
    {
        cnt[a[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] != 0)
        {
            cout << static_cast<char>(i + 'a') << " " << cnt[i] << endl;
        }
    }
}

/*
    Bài 2. Nhập vào một xâu kí tự và chuyển các kí tự trong xâu thành kí tự in thường
    Input: Xâu đầu vào không qua 1000 kí tự
    Output: In kết quả trên 1 dòng
    -------------------------------------
            char a[1000];
            cin.getline(a, sizeof(a));
            for (int i = 0; i < strlen(a); i++)
            {
                a[i] = tolower(a[i]);
            }
            cout << a;
*/

/*
    Bài 3. Đếm số lượng chữ cái, chữ số, kí tự đặc biệt
    Input: Xâu đầu vào không qua 1000 kí tự
    Output: In kết quả trên 1 dòng
    -------------------------------------
            int cnt1 = 0, cnt2 = 0;
            char a[1000];
            cin.getline(a, sizeof(a));
            for (int i = 0; i < strlen(a); i++)
            {
                if (isalpha(a[i]))
                {
                    cnt1++;
                }
                else if (isdigit(a[i])) {
                    cnt2++;
                }
            }
            cout << cnt1 << " " << cnt2 << " " << strlen(a) - cnt1 - cnt2;
*/

/*
    Bài 4. Đếm số lần xuất hiện của các kí tự trong 1 xâu

            char a[1000];
            cin.getline(a, sizeof(a));
            int cnt[26] = { 0 };
            for (int i = 0; i < strlen(a); i++)
            {
                cnt[a[i] - 'a']++;
            }
            for (int i = 0; i < 26; i++)
            {
                if (cnt[i] != 0) {
                    cout << static_cast<char>(i + 'a') << " " << cnt[i] << endl;
                }
            }
*/