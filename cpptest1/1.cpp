        //Printing prime numbers within a specified range.

#include <iostream>
using namespace std;
int main() {
    int start, end, count = 0;

    cout << "Enter the start of the range: ";
    cin >> start;

    cout << "Enter the end of the range: ";
    cin >> end;

    cout << "Prime numbers between " << start << " and " << end << " are: ";

    for (int i = start; i <= end; i++) {
        count = 0;

        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                count++;
                break;
            }
        }

        if (count == 0) {
            cout << i << " ";
        }
    }
     return 0;

}    