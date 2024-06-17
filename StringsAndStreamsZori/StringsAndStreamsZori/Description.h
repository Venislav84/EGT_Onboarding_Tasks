#pragma once
//1. Compare Arrays Again
//Write a program that reads two integer arrays from the console and compares them element by element.For better
//code reusability, you could do the comparison in a function, which returns true if they are equal and false if not.
//Each array will be defined by a single line on the console, containing the numbers in the array, separated by spaces.
//Print equal if the arrays match, and not equal if the arrays don’t match.
//
//2. Mathematical Expression
//Write a program that reads a line from the console containing a mathematical expression.Write a bool function
//that checks whether the brackets in the expression() are placed correctly(assume everything else is correct, i.e.
//	you don’t need to check for correct signs, correct variables / numbers, etc.) and returns true if they are correct and
//	false if they are not correct.Print correct or incorrect accordingly on the console
//
//	3. Title Case
//	Write a program that changes each word in a text to start with a capital letter(don’t bother with the exact title - case
//		rules about not capitalizing things like in, from, etc.).Assume the first letter of a word is an English alphabetical
//	symbol preceded by a non - alphabetical symbol(so in "we will--rock you", "we", "will", "rock" and "you" are all
//		considered words which need to be capitalized).
//	4. Replace All
//	Write a program that is given a line of text, another line with a "find" string, and another line with a "replace" string.
//	Any part of the text which matches the "find" string should be replaced with the "replace" string.Print the resulting
//	text on the console.
//
//	5. Invalid Input
//	Write a program that reads a line containing integer numbers, separated by spaces, and prints their sum.In addition
//	to the numbers, each line will contain one or more words(sequences of English letters) – print those words on a
//	separate line, separated by spaces, after the sum, in the order, they were in the input.
//
//	6. The Signal and the Noise
//	Write a program that reads a sequence of non - negative integer numbers(in the decimal numeral system), separated
//	by spaces, and finds the maximum number.The numbers in the input may have "noise" – symbols before, after, or
//	between the digits of the number, which are not decimal digits(you need to ignore these when reading the
//		numbers).All symbols in the input will be either letters, digits, punctuation, or signs from the standard ASCII table
//		(no control symbols like newlines or tabs, delete, etc.)
//
//	7. The Noise and the Signal
//	Same as Problem 6, but your task here is to find the longest noise in a number(numbers will always be positive
//		integers).There are several noises with equal length, print the one that is the first lexicographically.If there are no
//	noises, print "no noise".All symbols in the input will be either letters, digits, punctuation, or signs from the standard
//	ASCII table(no control symbols like newlines or tabs, delete, etc.)