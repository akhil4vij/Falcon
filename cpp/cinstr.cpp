
//Initial Template for C++
#include <iostream>
using namespace std;
// Function prototype
void getLineAndIgnore();
//Position this line where user code will be pasted.
// Driver Code
int main()
{
    // Number of testcase input
    int t;
    cin >> t;
    cin.ignore(); //Ignoring the newline so it isn't consumed by getline. Read about it!!
    while(t--){
        getLineAndIgnore();   
    }
   
    return 0;
} 

using std::cin;
using std::getline;
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

//User function Template for C++
//Back-end complete function Template for C++
// Function to take input of string using getline
void getLineAndIgnore(){
   
    string a, d;
    int b;
   
    // Your code here
    //cin.ignore();
    getline(cin, a);
    cout << a << endl;
    
    //cin.ignore();
    cin >> b;
    cout << b << endl;
        
    cin.ignore();
    getline(cin, d);
    cout << d << endl;
}
