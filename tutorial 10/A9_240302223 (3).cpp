#include <iostream>
using namespace std;
int main() {
   //write a program that uses dynamic programming to calculate the number of ways to reach step 4,
   //where you can move either 1 step or 2 steps at a time.
   //store intermediate results in an array and print the final result
    const int steps = 4;
    int* ways = new int[steps + 1];
    ways[0] = 1; 














    
    ways[1] = 1; 
    for (int i = 2; i <= steps; i++) {
        ways[i] = ways[i - 1] + ways[i - 2];
    }
    cout << "Number of ways to reach step " << steps << ": " << ways[steps] << endl;
    delete[] ways;















    return 0;
}