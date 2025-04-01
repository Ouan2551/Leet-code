#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    // 1) Array have 2 type
    // one dimension
    int array[] = {1, 2, 3, 4}; // declare array
    int size_array = sizeof(array)/sizeof(array[0]); // get size of array
    cout << "size_array : " << size_array << '\n';
    cout << "sizeof(array) | sizeof(array[0])" << '\n';
    cout << sizeof(array) << " |  " << sizeof(array[0]) << '\n';
    // size in this case not length array is like size byte
    // sizeof(array[0]) = 4 byte(data type integer)
    // sizeof(array) = 16 byte = 4 byte * 4 (count)

    // multi dimension
    int m, n; cin >> m >> n;
    int array1[m][n] = {{1,2}, {3, 4}};
    cout << "size_array2 : " << sizeof(array1) << '\n';
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << array1[i][j] << ' ';
        }
        cout << '\n';
    }
    

    // 2) string
    char str1[100] = "Hello"; char str2[100] = "World";
    // length of string
    int x = strlen(str1); cout << "str1 : " << x << '\n';
    x = strlen(str2); cout << "str2 : " << x << '\n';
    // compare 2 string equal or not
    int compare = strcmp(str1, str2);
    cout << "compare : " << compare << '\n'; // if compare == 1 it equal

    // copy character from this string to another
    // strcpy(dest, source)
    strcpy(str1, str2); cout << "str1 : " << str1 << '\n'; cout << "str2 : " << str2 << '\n';
    return 0;
}