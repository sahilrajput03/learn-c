# README

todo: try out `glibc` from gnu.

- **Doc: Learn IoT and C with Sahil: [Click here](https://docs.google.com/document/d/1lN2vAJOs3Y2MBMWyNfH0RZHajUYMwEZD_Tl9QI1fssM/edit#heading=h.2y4mxxwdk1xh)**

For live monitoring use: `cmon fileName.c`.

## Usage: Use `cmon` with below code to run in watch mode:

```c
cmon (){
	# with dhanur.. (works on windows using git-bash).
	# nodemon -q -e c -x "gcc $* -o binary && binary || exit 0"

	# with dhanur.. (works on linux on ubuntu as well).
	nodemon -q -e c -x "gcc $* -o binary && ./binary || exit 0" # We exit with zero coz we don't want nodemon to stop even when the program throws a non zero return code(i.e., compiler throws exception).
}
```


Src: https://www.w3schools.com/c/c_intro.php

## What is C?

- C is a general-purpose programming language created by Dennis Ritchie at the Bell Laboratories in 1972.
- It is a very popular language, despite being old.
- C is strongly associated with UNIX, as it was developed to write the UNIX operating system.

## Why Learn C?

- It is one of the most popular programming language in the world
- If you know C, you will have no problem to learn other popular programming languages such as Java, Python, C++, C#, etc, as the syntax is similar
- C is very fast, compared to other programming languages, like Java and Python
- C is very versatile; it can be used in both applications and technologies
- Difference between C and C++
- C++ was developed as an extension of C, and both languages have almost the same syntax
- The main diffference between C and C++ is that C++ support classes and objects, while C does not
