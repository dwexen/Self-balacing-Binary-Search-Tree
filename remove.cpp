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

template int MySBBST<int, int, intintCompare, intintCompare>::remove(int);
template student MySBBST<student, unsigned int, studentStudentComp, uintStudentComp>::remove(unsigned int);

template int MySBBST<int, int, intintCompare, intintCompare>::remove(MySBBSTNode*&, int);
template student MySBBST<student, unsigned int, studentStudentComp, uintStudentComp>::remove(MySBBSTNode*&, unsigned int);

template int MySBBST<int, int, intintCompare, intintCompare>::removeMin(MySBBSTNode*&);
template student MySBBST<student, unsigned int, studentStudentComp, uintStudentComp>::removeMin(MySBBSTNode*&);

template <class Elem, class Key, class EEComp, class KEComp>
/*
*Pre-condition: An integer or unsigned int
*
*Post-condition: Removes the item whose key matches the input, balances the tree, and returns the removed item
*
*@param: 		k - a key of type int or unsigned int
*/
Elem  MySBBST< Elem,  Key,  EEComp,  KEComp>::remove(Key k)
{
	if(!KEComp::eq(k, zero))
		return remove(root, k);
	return zero;
}

template <class Elem, class Key, class EEComp, class KEComp>

Elem MySBBST< Elem,  Key,  EEComp,  KEComp>::remove(MySBBSTNode *&sr, Key k)
{
	Elem returnme;
	Elem temp;
	MySBBSTNode *deleteme = NULL;
	if(sr == NULL){
		return zero;
	}
	if(KEComp::eq(k, sr -> elem))
	{
		temp = sr->elem;
		if(sr->lc != NULL && sr->rc != NULL)
			sr->elem = removeMin(sr->rc);
		else
		{
			deleteme = sr;
			if(sr->lc == NULL)
				sr = sr->rc;
			else
			{
				sr = sr->lc;
			}
			delete deleteme;
		}
		if(sr == NULL)
		{
			return temp;
		}
		//cout << "balance call 1" << endl;
		balance(sr);
		return temp;
	}
	else
	{
		if(KEComp::lt(k, sr->elem)){
			//cout << "balance call 2" << endl;
			returnme = remove(sr->lc, k);
			balance(sr);
			return returnme;
		}
		//cout << "balance call 3" << endl;
		returnme = remove(sr->rc, k);
		balance(sr);
		return returnme;
	}
	
}

template <class Elem, class Key, class EEComp, class KEComp>

Elem MySBBST< Elem,  Key,  EEComp,  KEComp>::removeMin(MySBBSTNode *&sr)
{
	cout << "removeMin call" << endl;
	Elem temp;
	MySBBSTNode *deleteme;
	if(sr == NULL)
		return zero;
	if(sr->lc == NULL)
	{
		temp = sr->elem;
		deleteme = sr;
		sr = sr->rc;
		delete deleteme;
		return temp;
	}
	return removeMin(sr->lc);
}

