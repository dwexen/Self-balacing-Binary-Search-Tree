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

template void MySBBST<int, int, intintCompare, intintCompare>::printout();
template void MySBBST<student, unsigned int, studentStudentComp, uintStudentComp>::printout();

template void MySBBST<int, int, intintCompare, intintCompare>::printout(MySBBSTNode *);
template void MySBBST<student, unsigned int, studentStudentComp, uintStudentComp>::printout(MySBBSTNode *);

template <class Elem, class Key, class EEComp, class KEComp>

/*
*Pre-condition: A SBBST exists to be printed
*
*Post-condition: The tree is printed out properly showing the proper position of each node
*
*/
void MySBBST<Elem, Key, EEComp, KEComp>::printout()
{
	printout(root);
}

template <class Elem, class Key, class EEComp, class KEComp>

void MySBBST<Elem, Key, EEComp, KEComp>::printout(MySBBSTNode *sr)
{
	if(sr != NULL)
	{
		cout << "(" << " ";
		printout(sr->lc);
		cout << sr->elem << ":" << bFactor(sr) << " ";
		printout(sr->rc);
		cout << ")" << " ";
	}
}