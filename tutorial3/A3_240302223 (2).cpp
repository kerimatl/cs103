#include <iostream>
#include <fstream>


using namespace std;
int main() {


//program that reads student grades from a file grades.txt and calculates the average grade.if the file is empty, print 'no grades avilable'

    ifstream inputFile("grades.txt");
    if (!inputFile) {
        cerr << "Error opening file." << endl;
        return 1;
    }

    int grade;
    int sum = 0;
    int count = 0;
    while (inputFile >> grade) {
        sum += grade;
        count++;
    }
    inputFile.close();
    if (count == 0) {
        cout << "No grades available." << endl;
    } else {
        double average = static_cast<double>(sum) / count;
        cout << "Average grade: " << average << endl;
    }

    


    return 0;


}