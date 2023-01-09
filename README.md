<h1 align="center">
	📖 ft_printf
</h1>

<p align="center">
	<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/LeonMoreno/ft_printf?color=yellow">
	<img alt="Number of lines of code" src="https://img.shields.io/tokei/lines/github/LeonMoreno/ft_printf?color=critical"/>
	<img alt="Code language count" src="https://img.shields.io/github/languages/count/LeonMoreno/ft_printf?color=yellow"/>
	<img alt="GitHub top language" src="https://img.shields.io/github/languages/top/LeonMoreno/ft_printf?color=blue"/>
	<img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/LeonMoreno/ft_printf?color=green"/>
</p>


## 💡 About the project

	🚀 TLDR: This project is pretty straightforward, you have to recode printf.
	You will learn what is and how to implement variadic functions. 
	
	Once you validate it, you will reuse this function in your future projects.


## Screenshots

Testing the ft_printf with   paulahemsi / ft_printf

<img src="img/test.png" width="800"/>

Deep understanding of data types (click full spreadsheet)

[<img src="img/tipos_datos.jpg" width="800"/>](https://docs.google.com/spreadsheets/d/1tJqVVTYtnHSIUbkGQXTx6xxDX2CSWw9Le4LVMcRpRu8/edit?usp=sharing)

## Key points:
* Learn a highly interesting new concept in C programming: variadic functions.
* C Advanced Pointers.
* system calls in C.
* Unix logic.
* Memory management anomalies in C.

## Objectives:
* Write a library that contains ft_printf(), a function that will mimic the original printf()
* recode printf.

## Implement the following conversions:

| conversions | TYPE |
| ------ | ------ |
| %c | character |
| %s | string |
| %p | void * pointer hex format |
| %d | decimal (base 10) |
| %i | integer (base 10) |
| %u | decimal (base 10) | 
| %x | hexadecimal (base 16) lowercase format |
| %X | hexadecimal (base 16) uppercase forma |
| %b | Print bits |
| %% | Prints a percent sign |


## 🛠️ Usage

### Instructions

 Commande       	|  Actions 	|
|----------------	|----------	|
| `make`      	  | Compile the .c and create libftprintf.a  	|
| `make clean`    | Delete the .o.  	|
| `make flcean`  	| Delete the .o and libftprintf.a  	|
| `make re`     	| Executed fclean and make.  	|
| `make norm`          | Verification with the norminettes. |
