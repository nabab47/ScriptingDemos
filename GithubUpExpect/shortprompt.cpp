//Animesh Pattanayak

//When compiling this program, for compatibility with 
//the scripts, use the commmand: 
//       g++ -o prompt shortprompt.cpp

/**********************************
This program is intended for 
educational purpose. It clearly
does not use best practices, but
rather is written in a way that
students would be capable of 
understanding easily.
***********************************/

#include <iostream> //This allows for input and output
#include <fstream> //This allows for writing out to a file

using namespace std;

int main()
{
  ofstream outfile; //this is a stream that will allow us to write out to a file
  outfile.open("word.txt"); //this associates a file with our out stream

  string pass;
  
  cout << "Password:"; //this line prints out to standard output
  cin >> pass; //this line consumes user input and stores it in a variable
  outfile << pass; //this is printing to the file
}
