#include <bits/stdc++.h>
using namespace std;

int main() {
    // Example 1: Pair array of int and string
    pair<int, string> arr[] = {
        {1, "one"},
        {2, "two"},
        {3, "three"},
        {4, "four"},
        {5, "five"}
    };

    cout << "Integer-String Pairs:\n";
    for (auto &p : arr) {
        cout << p.first << " -> " << p.second << endl;
    }

    cout << "\n-------------------------\n";

    // Example 2: Pair of char and int
    pair<char, int> charInt[] = {
        {'A', 65},
        {'B', 66},
        {'C', 67}
    };

    cout << "Character-Integer Pairs:\n";
    for (auto &p : charInt) {
        cout << p.first << " -> " << p.second << endl;
    }

    cout << "\n-------------------------\n";

    // Example 3: Pair of string and double
    pair<string, double> productPrice[] = {
        {"Apple", 120.5},
        {"Banana", 60.25},
        {"Mango", 150.75}
    };

    cout << "Product-Price Pairs:\n";
    for (auto &p : productPrice) {
        cout << p.first << " -> " << p.second << endl;
    }

    cout << "\n-------------------------\n";

    // Example 4: Nested pair
    pair<int, pair<string, double>> student = {101, {"Manav", 89.5}};
    cout << "Nested Pair Example:\n";
    cout << "Roll No: " << student.first 
         << ", Name: " << student.second.first 
         << ", Marks: " << student.second.second << endl;

    return 0;
}
