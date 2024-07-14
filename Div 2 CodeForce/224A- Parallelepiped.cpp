/**
My Name        : JAHANGIR HUSSEN
Country        : Bangladesh
Gmail          : jahangirhussen06@gmail.com
Github Link    : https://github.com/Jahangirhussen

WebSite Name   : Code Force
Problem Name   : A.  Parallelepiped
Problem Number : 224A
Difficulty     : Div 2
Problem Link   : https://codeforces.com/problemset/problem/224/A
STATUS         : Accepted
Problem Logic  :
**/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a>> b >> c;

    double x=sqrt((a*b) /c)+  sqrt((b*c) /a) + sqrt((c*a) /b);


    cout << 4*x << endl;

    return 0;
}
/**
আয়তঘনকের প্রান্তের দৈর্ঘ্য নির্ণয়ের জন্য নিম্নলিখিত সূত্রটি ব্যবহার করা হয়:

প্রান্তের দৈর্ঘ্য = sqrt(দ্বিপাশের মুখের ক্ষেত্রফলের গুণফল / তৃতীয় পাশের মুখের ক্ষেত্রফল)

আয়তঘনকের প্রান্ত 12 টি হলে, এদের যোগফল হবে:

4(x + y + z)

যেখানে, x, y, এবং z হলো মুখের প্রান্তের দৈর্ঘ্য।
*/
