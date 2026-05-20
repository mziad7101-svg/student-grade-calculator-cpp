#include <iostream>
using namespace std;

int main()
{
    int n;
    float grade, sum = 0, average;

    cout << "Enter number of subjects: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << "Enter grade " << i << ": ";
        cin >> grade;

        sum += grade;
    }

    average = sum / n;

    cout << "Average = " << average;

    return 0;
}