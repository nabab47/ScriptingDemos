# ScriptingDemos
These are all sample programs I have written to display some of the power of scripting a task

You will find 3 demos in this repo.

FIND AND REPLACE: Using scripting and a variant of the sed command to show how simple commands and scripting can make daunting tasks quick and easy. Ensure that the findreplace file has executable permission, and then simply run it. You can always delete form.txt after running the script and copy the backup_form.txt to form.txt to repeat the process. This program simply uses a script to find and replace all occurances of the string (COMPANY NAME) with another string. *Yes I am aware that the sed command can be used to replace all occurences in a file, but this served better for demo of one of the powers of scripting*

PASSWORD PROMPT: Using an expect script to automate the task of inputing passwords during simple tasks such as installing programs. In the folder, you will find a shortprompt.cpp file, when compiling this, use the following: g++ -o prompt shortprompt.cpp. After this, run the following command: bash runprompt.sh, this will launch the executable which emulates an installer of sorts. Installers often require a password every so often. In a shortened example, every 5 seconds, the executable (fake installer) will ask you to input a password (it does not authenticate anything, just accepts input as this is strictly demo). The exp.exp file, when run, will launch the "installer
 and automate the filling in of passwords.

ALPHABET: Using a Bash script to emulate a children's game. Primarily, this script shows many different aspects of Bash including conditional statements, looping, variables, etc. The game displayed here is a game where you have a bucket of alphabet letters. One must draw letters as fast as they can trying to get the letter A, then the letter B, and so forth until one has drawn all of the letters of the alphabet in alphabetical order. This script, achieves this task and displays the incorrect draws as well as the correct draws.

