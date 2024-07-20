#include<iostream>
using namespace std;
int main() {
    int start, end;
    cout<<"Enter the start:\n";
    cin >> start;
    cout << "Enter the end:\n";
    cin >> end;
    int sum = 0;
    for (int i = start; i <= end; i++) {
        if (i % 2 == 0)
            sum += i;
    }
    cout << "==========================================\n";
    cout << "sum of even number between " << start << " and " << end << " is " << sum<<endl;
    return 0;
}