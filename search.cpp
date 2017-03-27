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

template int MySBBST<int, int, intintCompare, intintCompare>::search(int);
template student MySBBST<student, unsigned int, studentStudentComp, uintStudentComp>::search(unsigned int);

template int MySBBST<int, int, intintCompare, intintCompare>::search(MySBBSTNode *&, int);
template student MySBBST<student, unsigned int, studentStudentComp, uintStudentComp>::search(MySBBSTNode *&, unsigned int);


template <class Elem, class Key, class EEComp, class KEComp>

/*
*Pre-condition: The key of the item to be searched for
*
*Post-condition: Returns the node with the matching key is found, return that node
*
*@param: 		k - an int or unsigned int of a node in the tree to be found
*/
Elem MySBBST<Elem, Key, EEComp, KEComp>::search(Key k)
{
	return search(root, k);
}

template <class Elem, class Key, class EEComp, class KEComp>

Elem MySBBST<Elem, Key, EEComp, KEComp>::search(MySBBSTNode *& sr, Key k)
{
	if(sr == NULL)
		return zero;
	if(KEComp::eq(k, sr->elem))
		return sr->elem;
	if(KEComp::lt(k, sr->elem))
		return search(sr->lc, k);
	return search(sr->rc, k);
}
