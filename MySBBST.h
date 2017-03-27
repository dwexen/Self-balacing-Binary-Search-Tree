/*
*Matthew Colozzo
*"I pledge my honor that I have abided by the Stevens Honor System."
*/
#ifndef _MYSBBST_
#define _MYSBBST_

#include <iostream>
#include <cstring>
#include "student.hh"
using namespace std;

template <class Elem, class Key, class EEComp, class KEComp>
class MySBBST
{
 public:
  MySBBST(Elem z) {zero = z; root = NULL;}
  bool add(Elem e);
  Elem search(Key k);
  Elem remove(Key k);
  void printout();
 private:
  Elem zero;
  class MySBBSTNode {
	public:
	 Elem elem;
	 unsigned int height;
	 MySBBSTNode *lc;
	 MySBBSTNode *rc;
	 MySBBSTNode(Elem a) {lc = NULL; rc = NULL; elem = a; height = 1;}
  };
  MySBBSTNode *root;
  bool add(MySBBSTNode *& sr, Elem e);
  Elem search(MySBBSTNode *& sr, Key k);
  Elem remove(MySBBSTNode *& sr, Key k);
  Elem removeMin(MySBBSTNode *& sr);
  unsigned int height(MySBBSTNode* h);
  void fixHeight(MySBBSTNode* n);
  int bFactor(MySBBSTNode *n);
  void balance(MySBBSTNode *& n);
  void rotateRight(MySBBSTNode *& n);
  void rotateLeft(MySBBSTNode *& n);
  void printout(MySBBSTNode *sr);
  
};

class intintCompare
{
 public:
  static bool lt(int, int);
  static bool gt(int, int);
  static bool eq(int, int);
};

class strstrCompare
{
 public:
  static bool lt(char*, char*);
  static bool gt(char*, char*);
  static bool eq(char*, char*);  
};



#endif
