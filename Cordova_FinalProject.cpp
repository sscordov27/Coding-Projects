// Seth Cordova
// May 5, 2024
// English to Spanish Basic Translator
// Purpose: Use parallel files to print words from English to Spanish

// c:\Users\sethc\Downloads\video4051744781.mp4

// I'm so sorry I forgot the part where I show is compiling
// c:\Users\sethc\Downloads\video1821323568.mp4

#include <iostream>
#include <fstream>
#include <cctype>  // needed for isalpha
#include <string>
using namespace std;

// Function prototypes


const string PROGRAM_TITLE = "Basic Spanish Translator!";
const int SIZE = 60;


// create structs
// put the data from the files into structs
// take each word and match it 
// print out the Mandarin version

struct fileWords 
{
    string englishFile;  // will store data from the english file
    string spanishFile;  // data from the spanish file
    
};

int searchList(fileWords list[], int SIZE, string value)
{
    int index = 0;            // used as a subscript to search the array
    int position = -1;       // to record the position of search value
    bool found = false;     // flag to indicate if value was found

    while (index < SIZE && !found)
    {
        if (list[index].englishFile == value)  // if value is encountered
        {
            found = true;  // set the flag
            position = index;  // record the value's subscript
            //cout << list2[index] << " ";// prints out the corresponding index in the mandarin file

        }
        index++;
    }


    return position;   // return position or -1

}

int main()
{
    string userInput1, userInput2, userInput3;
    fileWords word[SIZE];

    // First step, transfer file data to the struct arrays

    ifstream englishTxtFile("english.txt");
    for (int i = 0; i < SIZE; i++)
    {
        englishTxtFile >> word[i].englishFile;  
    }
    
    ifstream spanishTxtFile("spanish.txt");
    for (int i = 0; i < SIZE; i++)
    {
        spanishTxtFile >> word[i].spanishFile;
    }

    englishTxtFile.close();
    spanishTxtFile.close();

    //cout << word[1].spanishFile << endl;

    //cout << word[searchList(&word[SIZE].englishFile, &word[SIZE].mandarinFile, SIZE, userInput1)].mandarinFile;
    

    // Second step, welcome user and obtain user input

    cout << "Hi! Welcome to " << PROGRAM_TITLE << endl;
    cout << endl;
    cout << "DISCLAIMER: The program does not take conjugation into account!" << endl;
    cout << endl;

    cout << "Please enter a word you desired to be translated: " << endl;
    cin >> userInput1;

    cout << "Please enter another: " << endl;
    cin >> userInput2;

    cout << "How about one more: " << endl;
    cin >> userInput3;


    if (cin.fail())
    {
        cout << " Error capturing inputs" << endl;
        cin.clear();
        cin.ignore();

        return 42;

    }

    // Step three, call the search function 

    int firstWord = searchList(word, SIZE, userInput1);   // obtains array location of matching word
    int secondWord = searchList(word, SIZE, userInput2);
    int thirdWord = searchList(word, SIZE, userInput3);

    cout << endl;

    cout << "Your original statement: " << userInput1 << " " << userInput2 << " " << userInput3 << " " << endl;

    cout << "Your translated statement: ";

    cout << word[firstWord].spanishFile << " ";
    cout << word[secondWord].spanishFile << " ";
    cout << word[thirdWord].spanishFile << " ";
    cout << endl;
    cout << endl;


    // Step four, thank the user and exit program 

    cout << "Thank you for using " << PROGRAM_TITLE << "!" << endl;
    cout << "Have a great day!" << endl;


    return 0;

}








