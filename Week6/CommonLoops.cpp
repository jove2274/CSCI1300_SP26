#include <iostream>
using namespace std;

void computeSum() {
    cout << "Compute The Sum" << endl;

    double total = 0;
    double input;
    
    cout << "Continuously provide positive numbers. Enter '-1' to quit: ";
    // TO DO #1: What are some options for our condition
    // Note that we haven't collected user input yet
    while (/* TO DO*/) {
        if(input == -1) {
            // TO DO #2: What is one way we can exit a loop?
        }
        total = total + input;
    }

    cout << "Total is: " << total << endl;
}

void computeAverage() {
    cout << "Compute The Average" << endl;

    double total = 0;
    int count = 0;
    double input;

    cout << "Continuously provide input. Enter '-1' to quit: ";
    while (cin >> input) {
        // TO DO #3: What would our if condition be?
        // I challenge you to not look at the other functions for the solution :) 
        if(/* TO DO*/) {
            break;
        }
        total = total + input;
        count++;
    }

    double average = 0;
    // TO DO #4: We want to avoid a / 0 issue
    // What would our condition be?
    if (/* TO DO */) {
        average = total / count;
    }

    // Sometimes we have issues with cin entering a fail state
    // Besides .clear we can also use .ignore
    // In this case, it is to ignore the enter button after -1
    cin.ignore();

    cout << "Average is: " << average << endl;
}

void countingMatches() {
    string str;
    cout << "Enter any sentence: ";
    getline(cin, str);

    int spaces = 0;
    int length = str.length();
    for(int i = 0; i < length; i++) {
        // TO DO #5: What should our if statement be?
        // Goal is to count the number of spaces entered
        if (/* TO DO*/) {
            spaces++;
        }
    }

    cout << "The number of spaces in your sentence is: " << spaces << endl;
}

void countingShortMatches() {
    int short_words = 0;

    string str;
    // TO DO #6: How do we print quotation marks? 
    // Print "-1" in the to do comment
    cout << "Enter any sentence followed by /* TO DO #6 */: ";

    while(cin >> str) {
        if (str == "-1") {
            break;
        }
        // TO DO #7: How might we check if the length of the word is 3 or less?
        if (/* TO DO */) {
            short_words++;
        }
    }

    cout << "The number of short words in your sentence is: " << short_words << endl;
}

int firstEMatch(string input) {
    bool found = false;
    int position = 0;
    int length = input.length();

    // TO DO #8: Explain this while loop condition
    while(!found && position < length) {
        string ch = input.substr(position, 1);
        // TO DO #9: How would we check if our ch is e or E?
        if (/* TO DO */) {
            found = true;
            return position;
        }
        else {
            position++;
        }
    }

    return -1;
}

void maximum() {
    double largest;
    double input;
    cout << "Enter positive numbers, followed by -1: ";
    while (cin >> input) {
        if (input == -1) {
            break;
        }
        // TO DO #10: What would the condition be?
        else if (/* TO DO */) {
            largest = input;
        }
    }

    cout << "The largest number was: " << largest << endl;
}

void minimum() {
    double smallest;
    double input;
    cout << "Enter positive numbers, followed by -1: ";
    while (cin >> input) {
        if (input == -1) {
            break;
        }
        // TO DO #11: What would the condition be?
        else if (/* TO DO */) {
            smallest = input;
        }
    }

    cout << "The smallest number was: " << smallest << endl;
}

int main() {
    computeSum();
    computeAverage();
    countingMatches();
    countingShortMatches();

    string word;
    cout << "Enter a word: ";
    cin >> word;
    int position = firstEMatch(word);
    if (position != -1) {
        cout << "The first position of the letter e is at: " << position << endl;
    }
    else {
        cout << "There are no e's in your word" << endl;
    }

    maximum();
    minimum();
}