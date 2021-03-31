#include <fstream>
#include <iostream>

using namespace std;


int main() {
    ifstream input( "students.txt" );

    string student;
    int grade1, grade2, sum, more80num = 0;
    float avg;

    while (input >> student >> grade1 >> grade2)
    {
        sum = grade1 + grade2;
        avg = sum / 2.0;
        cout << student << " - Sum: " << sum << " Avg: " << avg << endl;

        if (avg > 80) more80num++;

    }

    cout << "More than 80: " << more80num;
}