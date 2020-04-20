#include <cstdio>
#include <iostream>
#include <map>

using namespace std;
int main()
{
    cout << "Hello" << endl;
    map<string, map<string, int>> student_record;

    student_record["A"]["maths"] = 91;
    student_record["A"]["physics"] = 91;
    student_record["B"]["physics"] = 80;

    if(int m = student_record["A"]["maths"]; m > 90)
    {
        cout << "A got 90+ in maths" << endl;
    }
}