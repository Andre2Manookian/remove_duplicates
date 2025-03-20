#include <iostream>
#include <vector>
#include <set>
using namespace std;


//Given a vector of integers, write a program that uses a set<int> to remove duplicates and print the unique elements in sorted order.



int main() {
    int N, num;
    vector<int> nums;
    set<int> uniqueNums;

    cout << "Enter the number of elements: ";
    cin >> N;

    cout << "Enter " << N << " integers: ";
    for (int i = 0; i < N; i++) {
        cin >> num;
        nums.push_back(num);
        uniqueNums.insert(num);
    }

    cout << "Unique elements in sorted order: ";
    for (int n : uniqueNums) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}
