// Input Format

// You are given two strings,  and , separated by a new line. Each string will consist of lower case Latin characters ('a'-'z').

// Output Format

// In the first line print two space-separated integers, representing the length of  and  respectively.
// In the second line print the string produced by concatenating  a and b (a+b).
// In the third line print two strings separated by a space,  and .  and  are the same as  and , respectively, except that their first characters are swapped.

// Sample Input

// abcd
// ef
// Sample Output

// 4 2              (first line)
// abcdef           (second line)
// ebcd af          (third line)

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a, b, temp;
    cin >> a >> b;

    cout << a.length() << " " << b.length() << endl; // Print the first line ( 4 2 ) | it is the length of the strings
    cout << a + b << endl;                           // Print the second line | concatenation of the two strings

    // third line code

    temp[0] = a[0]; // swaps a[0] to a temp string used to save the word temporarily
    a[0] = b[0];
    b[0] = temp[0];

    cout << a << " " << b << endl;

    return 0;
}
