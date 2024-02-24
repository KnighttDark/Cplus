
#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int *ptr1 = &x;
    int **ptr2 = &ptr1;

    **ptr2 = 20;
    cout << x << endl;
    cout << *ptr1 << " " << **ptr2 << " " << &ptr1 << endl;
}

/*
    void calculator(int *x)
    {
        cout << x; // 100
        cout << endl;
        *x = 20;
    }

    int main()
    {
        int n = 100;
        calculator(&n);
        cout << n; // 0x82c57ffd2c
    }

1. Lấy địa chỉ của biến n trong vùng nhớ
2. Truyền địaa chỉ của biến n vào hàm calculator()
    int *x ---> int *0x82c57ffd2c --->dấu * có nghĩa là lấy giá trị tại vùng nhớ đó

*/

/*-------------------------------------------------------------------------------*/

/*
    int * change(int *x) {
        cout << x;
        *x = 20;
        return x;
    }

    int main() {
        int n = 100;
        int *ptr = &n;
        ptr = change(ptr);
        cout << ptr << n;
    }

*/

/*-------------------------------------------------------------------------------*/

/*
    int n = 100;
    int *ptr1 = &n; // gán địa chỉ n;
    int *ptr2 = ptr1; // gán địa chỉ con trỏ ptr1 cho con trỏ ptr2 có nghĩa ptr2 cũng trỏ đến địa chỉ biến n
    int *ptr3 = ptr2; // gán địa chỉ con trỏ ptr3 cho con trỏ ptr2 có nghĩa ptr3 cũng trỏ đến địa chỉ biến n
    *ptr3 = 20; //gán giá trị 20 vào ô nhớ mà con trỏ  ptr3 đang trỏ đến, vì con trỏ ptr3 trỏ đến địa chỉ n ---> giá trị n thay đổi thành 20

    cout << n;


*/
