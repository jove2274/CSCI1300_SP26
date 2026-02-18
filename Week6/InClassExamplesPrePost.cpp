#include <iostream>
using namespace std;

int main() {

    // // Example #1
    // int i = 5;
    // cout << "Post Increment: " << i++ << endl;
    // // Prints 5 then becomes 6

    // int j = 5;
    // cout << "Pre Increment: " << ++j << endl;
    // // Becomes 6 then prints 6


    // // Example #2
    // int j = 10;

    // int a = j++;
    // // a = 10
    // // Then j becomes 11
    // cout << "A is assigned to: " << a << endl; // 10

    // int b = ++j;
    // // j becomes 12
    // // Then b is assigned 12
    // cout << "B is assigned to: " << b << endl; // 12


    // // Example #3
    // int k = 3;

    // int result = k++ + 5;
    // // 3 + 5 = 8
    // // result = 8
    // // then k++ = 4
    // cout << "Post Increment: " << result << endl; // 8

    // int result2 = ++k + 5;
    // // k++ = 4 + 1 = 5
    // // 5 + 5 = 10
    // // result2 = 10
    // cout << "Pre Increment: " << result2 << endl; // 10


    // // Example #4
    // cout << "Post Increment: " << endl;
    // for (int i = 0; i < 5; i++) {
    //     cout << i << " ";
    // }

    // cout << endl;

    // cout << "Pre Increment: " << endl;
    // for (int i = 0; i < 5; ++i) {
    //     cout << i << " ";
    // }

    // Example 5
    int value = 0;
    cout << "Post Increment" << endl;
    while (value++ < 5) { // Test 0, then increment
        cout << "Value is: " << value << endl;
    }

    int value2 = 0;
    cout << "Pre Increment" << endl;
    while (++value2 < 5) { // Increment to 1, then test
        cout << "Value is: " << value2 << endl;
    }


    // Example 5.1

    // Post Increment
    int value = 4;
    while (value++ < 5) { // 4 < 5; now increment to 5
        // This would print 5
    }

    // Pre Increment
    int value2 = 4;
    while (++value2 < 5) { // Increment to 5, 5 is not < 5
        // The while loop would not be entered
    }

    
}