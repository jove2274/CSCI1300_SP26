#include <iostream>
using namespace std;

// 1. What is this called?    prototype function
// 2. Why do we use it?    to declare a function
// 3. What is an alternative option?    keep main() at the end of the script
int updateScore(int & s); // Prototype function

int main() {
    int userScore = 10;

    // 4. What is happening in this line?     calling the function updateScore
    // 5. 'userScore' is referred to as what?         this is an argument.
    int result = updateScore(userScore);

    cout << "Result: " << result << endl;
    cout << "Final User Score: " << userScore << endl;

    return 0;
}

// 6. 's' is referred to as what?      This is a parameter. Specifically, a reference parameter.
int updateScore(int & s) {
    // 7. Implement post increment on the variable s and assign it to the output    Need s++, post incrementing s
    int output = s++; // output = 10 // s = 11 by the time it reaches ;

    // 8. Implement pre increment on the variable s
    ++s; // s = 12
    

    return output; //returns 10
}