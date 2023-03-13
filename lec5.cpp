// #include <iostream>
// using namespace std;
// // int main()
// {
//     int a = 4;
//     int b = 6;
//     cout << "a&b=" << (a & b) << endl;
//     cout << "a|b=" << (a | b )<< endl;
//     cout << "~a=" << ~a << endl;
//     cout << "a^b=" << (a ^ b )<< endl;

//     cout<<(19<<1)<<endl;
//     cout<<(19<<2)<<endl;
//     cout<<(17>>1)<<endl;
//     cout<<(17>>2)<<endl;

// }

// fibonacci series

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, x = 0, y = 1, z;
//     cout << "Enter the value of n: ";
//     cin >> n;
//     cout << "fibonacci series :";
//     cout << x << " " << y << " ";
//     for (x = 0, y = 1, z = 0; z < n; x = y, y = z)
//     {
//         z = x + y;
//         cout << " " << z << " ";
//     }
// }

// Question 1

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, prod = 1, sum = 0;
//     cout << "Enter the value of n :";
//     cin >> n;
//     while (n > 0)
//     {
//         prod = prod * (n % 10);
//         sum = sum + (n % 10);
//         n = n / 10;
//     }
//     cout << prod << endl;
//     cout << sum << endl;
//     cout << "Result:" << (prod - sum) << endl;
// }

// qUESTION 2

#include <iostream>
using namespace std;
int main()
{
    int n, k, i, j, a[10], b[10], flag = 0, count = 0;
    cout << "Enter the value of n:";
    cin >> n;
    for (i = 0; i<10, n> 0; i++, n = n / 2)
    {

        k = n % 2;
        a[i] = k;
        flag++;
    }
    cout << endl<< "Binary :";
    for (j = 0; j<10, flag> 0; j++, flag--)
    {
        b[j] = a[flag - 1];
        cout << b[j] << " ";
        if (b[j] == 1)
        {
            count++;
        }
    }
    cout << endl << "Number of 1 is :" << count << endl;
}