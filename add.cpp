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

template bool MySBBST<int, int, intintCompare, intintCompare>::add(int);

template bool MySBBST<student, unsigned int, studentStudentComp, uintStudentComp>::add(student);

template bool MySBBST<int, int, intintCompare, intintCompare>::add(MySBBSTNode*&, int);
template bool MySBBST<student, unsigned int, studentStudentComp, uintStudentComp>::add(MySBBSTNode*&, student);

template <class Elem, class Key, class EEComp, class KEComp>

/*
*Pre-condition: A student or integer
*
*Post-condition: Added the node to the tree properly
*
*@param: 		e - A valid element of type student or integer
*/
bool MySBBST< Elem,  Key,  EEComp,  KEComp>::add(Elem e)
{
	if(!EEComp::eq(e, zero) && !KEComp::eq(0, e))
		return add(root, e);
	return false;
}

template <class Elem, class Key, class EEComp, class KEComp>

bool MySBBST< Elem,  Key,  EEComp,  KEComp>::add(MySBBSTNode *&sr, Elem e)
{
	if(sr == NULL)
		sr = new MySBBSTNode(e);
	else
	{
		if(EEComp::lt(e, sr->elem))
			
			if(add(sr->lc, e))
			{
				balance(sr);
				return true;
			}
			else	
				return false;
		if(add(sr->rc, e))
		{
			balance(sr);
			return true;
		}
		else 
		{
			return false;
		}
	}
	balance(sr);
	return true;
}