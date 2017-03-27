#include "MySBBST.h"
#include "student.hh"
/*
/**
*MySorts.java
*
*"I pledge my honor that I have abided by the Stevens Honor System."
*
*Matthew Colozzo (c) 2015
*
*/
/*
*Pre-condition: two integers
*
*Post-condition: True if x < y, False otherwise
*/
bool intintCompare::lt(int x, int y)
{
  return x < y;
}
/*
*Pre-condition: two integers
*
*Post-condition: True if x > y False otherwise
*/
bool intintCompare::gt(int x, int y)
{
	return x > y;
}
/*
*Pre-condition: two integers
*
*Post-condition: True if x == y False if x != y
*/
bool intintCompare::eq(int x, int y)
{
	return x == y;
}
/*
*Pre-condition: two characters
*
*Post-condition: True if s1's value  < s2's, False otherwise
*/
bool strstrCompare::lt(char* s1, char* s2)
{
	return (strcmp(s1,s2) < 0);
}
/*
*Pre-condition: two characters
*
*Post-condition: True if s1 value is > s2's False otherwise
*/
bool strstrCompare::gt(char* s1, char* s2)
{
  return (strcmp(s1, s2) > 0);
}
/*
*Pre-condition: two characters
*
*Post-condition: True if the characters are equal, false otherwise
*/
bool strstrCompare::eq(char* s1, char* s2)
{
	return (strcmp(s1, s2) == 0);
}