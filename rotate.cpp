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

template void
MySBBST<int, int, intintCompare, intintCompare>::rotateLeft(MySBBSTNode *&);
template void 
MySBBST<student, unsigned int, studentStudentComp, uintStudentComp>::rotateLeft(MySBBSTNode *&);

template void
MySBBST<int, int, intintCompare, intintCompare>::rotateRight(MySBBSTNode *&);
template void 
MySBBST<student, unsigned int, studentStudentComp, uintStudentComp>::rotateRight(MySBBSTNode *&);

template <class Elem, class Key, class EEComp, class KEComp>

void MySBBST< Elem,  Key,  EEComp,  KEComp>::rotateRight(MySBBSTNode *&subRoot)
{
	MySBBSTNode *old_root = subRoot;
	MySBBSTNode *new_root = subRoot->lc;
	subRoot = new_root;
	old_root->lc = new_root->rc;
	new_root->rc = old_root;
	fixHeight(old_root);
	fixHeight(new_root);
}
template <class Elem, class Key, class EEComp, class KEComp>

void MySBBST< Elem,  Key,  EEComp,  KEComp>::rotateLeft(MySBBSTNode *&subRoot)
{
	MySBBSTNode *old_root = subRoot;
	MySBBSTNode *new_root = subRoot->rc;
	subRoot = new_root;
	old_root->rc = new_root->lc;
	new_root->lc = old_root;
	fixHeight(old_root);
	fixHeight(new_root);
}

