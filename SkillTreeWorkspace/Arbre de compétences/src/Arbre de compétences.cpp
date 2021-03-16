//============================================================================
// Name        : Arbre.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "SkillTree_XA.hpp"

using namespace std;

inline Arbre::Arbre() {
	skillname="";
	skillpoint=0;
	rightChild=NULL;
	leftChild=NULL;
	nodeCounter=0;
	treeCounter=0;
}

inline Arbre::~Arbre() {

}

inline void Arbre::setLeftChild(Arbre* LeftChild) {
	leftChild=LeftChild;
}

inline void Arbre::setRightChild(Arbre* RightChild) {
	rightChild=RightChild;
}


inline void Arbre::levelUpSkill () {
	skillpoint ++ ;

}

inline void Arbre::setName(string name) {
	name = "";
}


inline void Arbre::reset() {
	leftChild=NULL;
	rightChild=NULL;
	skillpoint = 0;

}

inline int Arbre :: getDepth() {
		leftChild -> getDepth();
	    rightChild -> getDepth();
	    depth++;/

	    if(leftChild == NULL && rightChild == NULL){
	        return 0;
	    }

	    if(leftChild == NULL){
	        return 1+rightChild->getDepth();
	    }
	    if(rightChild == NULL){
	        return 1+leftChild->getDepth();
	    }
	    return 1+max(leftChild->getDepth(), rightChild->getDepth());
	    }

}


inline void Arbre :: display() {
	cout<< skillname << skillpoint << endl;
	leftChild=NULL;
	leftChild.display;
	rightChild.display;
	rightChild=NULL;


}
