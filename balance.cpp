/**
*MySorts.java
*
*"I pledge my honor that I have abided by the Stevens Honor System."
*
*Matthew Colozzo (c) 2015
*
*/
#include "MySBBST.h"
#include "student.hh"

template void MySBBST<int, int, intintCompare, intintCompare>::balance(MySBBSTNode *&);
template void MySBBST<student, unsigned int, studentStudentComp, uintStudentComp>::balance(MySBBSTNode *&);

template <class Elem, class Key, class EEComp, class KEComp>

void MySBBST< Elem,  Key,  EEComp,  KEComp>::balance(MySBBSTNode *& n)
{
	fixHeight(n);
	//cout << bFactor(n) << endl;
	if(bFactor(n) == 2)
	{
		if(bFactor(n->rc) < 0)
			rotateRight(n->rc);
		rotateLeft(n);
	}
	if(bFactor(n) == -2)
	{
		cout << "this item got to -2" << endl;
		if(bFactor(n->lc) > 0)
			rotateLeft(n->lc);
		rotateRight(n);
	}
}