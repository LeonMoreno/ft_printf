<h1 align="center">
	📖 Get_Next_Line
</h1>

<p align="center">
	<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/LeonMoreno/Get-Next-Line?color=yellow">
	<img alt="Number of lines of code" src="https://img.shields.io/tokei/lines/github/LeonMoreno/Get-Next-Line?color=critical"/>
	<img alt="Code language count" src="https://img.shields.io/github/languages/count/LeonMoreno/Get-Next-Line?color=yellow"/>
	<img alt="GitHub top language" src="https://img.shields.io/github/languages/top/LeonMoreno/Get-Next-Line?color=blue"/>
	<img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/LeonMoreno/Get-Next-Line?color=green"/>
</p>


## 💡 About the project

	🚀 TLDR: The aim of this project is to make you code a function that returns a line,
	read from a file descriptor.
	May it be a file, stdin, or even later a network connection, you will always need 
	a way to read content line by line. It is time to start working on this function, 
	which will be essential for your future projects. 

## Screenshots

Testing the GNL Manual:

<img src="img/gnl.png" width="800"/>

Testing the GNl with  Tripouille / gnlTester 

<img src="img/gnl_test.png" width="800"/>

## Key points:
* Learn a highly interesting new concept in C programming: static variables.
* C Advanced Pointers.
* system calls in C.
* Unix logic.
* Memory management anomalies in C.


## Objectives:
* Read the text available on the file descriptor one line at a time until the end of it.
* Return the line that has just been read. If there is nothing else to read or if an error has occurred it should return NULL


## Skills:
* Unix
* Rigor
* Algorithms & AI


## 🛠️ Usage

### Requirements

The library is written in C language and needs the **`gcc` compiler** and some standard **C libraries** to run.

### Instructions

When compiling your code, add the source files and the required flag:

gcc get_next_line.c get_next_line_utils.c -D BUFFER_SIZE=size
