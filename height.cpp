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

template unsigned int 
MySBBST<int, int, intintCompare, intintCompare>::height(MySBBSTNode*);
template unsigned int 
MySBBST<student, unsigned int, studentStudentComp, uintStudentComp>::height(MySBBSTNode*);

template int MySBBST<int, int, intintCompare, intintCompare>::bFactor(MySBBSTNode*);
template int MySBBST<student, unsigned int, studentStudentComp, uintStudentComp>::bFactor(MySBBSTNode*);

template void MySBBST<int, int, intintCompare, intintCompare>::fixHeight(MySBBSTNode*);
template void MySBBST<student, unsigned int, studentStudentComp, uintStudentComp>::fixHeight(MySBBSTNode*);

template <class Elem, class Key, class EEComp, class KEComp>

unsigned int MySBBST< Elem,  Key,  EEComp,  KEComp>::height(MySBBSTNode *n)
{
	return n ? n->height : 0;
}

template <class Elem, class Key, class EEComp, class KEComp>

int MySBBST< Elem,  Key,  EEComp,  KEComp>::bFactor(MySBBSTNode *p)
{
	return height(p->rc) - height(p->lc);
}

template <class Elem, class Key, class EEComp, class KEComp>

void MySBBST< Elem,  Key,  EEComp,  KEComp>::fixHeight(MySBBSTNode *n)
{
	unsigned int h1 = height(n->lc);
	unsigned int hr = height(n->rc);
	n->height = (h1>hr ? h1 : hr) + 1;
}