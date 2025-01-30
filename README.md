## Commands:
* To build a program,
  * use ctrl-shift-b or command-shift-b to invoke the Makefile.
  * OR you can use the command palette (F1), type build, then choose run build task
  * OR you can type in the terminal: ```make -f Makefile_linux``` 
* To clean
  * use the command palette (F1), type Run Task, choose clean
  * OR you can type in the terminal: ```make -f Makefile_linux clean```
* To run the program, go to the terminal and type ```bin/main data/students.txt 100```
  * bin/main is the executable
  * data/students.txt is the file to be read in
  * 100 is the number of students to read from the file for sorting
* To debug a program, go to the run and debug tab, make sure the lldb is selected, place a breakpoint in the code, and then run
* This repository contains a custom container that installs enscript and ghostscript to easily print source code
  * You can run ```make -f Makefile_linux printAll``` to print all the code to bin/src.pdf. 
  * You can run ```make -f Makefile_linux printStudentCode_I_M``` to print only the insertion and mergesort files.
  * You can then Right Click on src.pdf and download the PDF locally

Frequently, you should do the following from the terminal:
* git add .
* git commit -m "message"
* git push

At the end of a session, shut down the codespace
* Go to the command palette (F1) and search for "stop current workspace"

If you lose a terminal in Codespaces:
* Go to the command palette (F1) and search for "create new terminal"

## Codespaces
* Install the C/C++ Extension from Microsoft
* Install the CodeLLDB from VAdim Chugunov
