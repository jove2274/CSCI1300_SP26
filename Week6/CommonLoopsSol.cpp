#include <iostream>
using namespace std;

void computeSum() {
    cout << "Compute The Sum" << endl;

    double total = 0;
    double input;
    
    cout << "Continuously provide positive numbers. Enter '-1' to quit: ";
    while (cin >> input) {
        if(input == -1) {
            break;
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
        if(input == -1) {
            break;
        }
        total = total + input;
        count++;
    }

    double average = 0;
    if (count > 0) {
        average = total / count;
    }

    cin.ignore();

    cout << "Average is: " << average << endl;
}

// Goal is to count the number of spaces entered
void countingMatches() {
    string str;
    cout << "Enter any sentence: ";
    getline(cin, str);

    int spaces = 0;
    int length = str.length();
    for(int i = 0; i < length; i++) {
        if (str[i] == ' ') {
            spaces++;
        }
    }

    cout << "The number of spaces in your sentence is: " << spaces << endl;
}

void countingShortMatches() {
    int short_words = 0;

    string str;
    cout << "Enter any sentence followed by \" -1\": ";

    while(cin >> str) {
        if (str == "-1") {
            break;
        }
        if (str.length() <= 3) {
            short_words++;
        }
    }

    cout << "The number of short words in your sentence is: " << short_words << endl;
}

int firstEMatch(string input) {
    bool found = false;
    int position = 0;
    int length = input.length();

    while(!found && position < length) {
        string ch = input.substr(position, 1);
        if (ch == "e" || ch == "E") {
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
        else if (input > largest) {
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
        else if (input < smallest) {
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