/*
*Matthew Colozzo
*"I pledge my honor that I have abided by the Stevens Honor System."
*/
#ifndef _MYSBBST_
#define _MYSBBST_

#include <iostream>
#include <cstring>
using namespace std;

template <Class Elem, Class Key, Class EEComp, Class KEComp>
class MySBBST
{
 public:
  MySBBST(Elem z) {zero = z; root = NULL;}
  bool add(Elem e);
  Elem search(Key k);
  Elem remove(Key k);
  void inOrder(MySBBSTNode *sr);
  void printout();
 private:
  bool add(MySBBSTNode *& sr, Elem e);
  Elem search(MySBBSTNode *& sr, Key k);
  Elem remove(MYSBBSTNode *& sr, Key k);
  Elem removeMin(MySBBSTNode *& sr);
  Unsigned char height(MySBBSTNode* h);
  Unsigned char bFactor(MySBBSTNode* b);
  void fixHeight(MySBBSTNode* n);
  int bfactor(MySBBSTNode *n);
  MySBBSTNode* balance(MySBBSTNode *n);
  MySBBSTNode* rotateRight(MySBBSTNode *n);
  MySBBSTNode* rotateLeft(MySBBSTNode *n);
  class MySBBSTNode {
	public:
	 int key;
	 unsigned char height;
	 MySBBSTNode *lc;
	 MySBBSTNode *rc;
	 MySBBSTNode(int k) {lc = NULL; rc = NULL; key = k; height = 1;}
  };
  MySBBSTNode *root;
  Elem zero;
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
