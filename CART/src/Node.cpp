/*********************************************************************
*
* 	Classification and Regression Tree (CART) V1.0
* 
* 	Author: Lingbo Zhang
*	11/22/2017 at Massachusetts Institute of Technology
*	Email: lingboz2015@gmail.com
* 
**********************************************************************/
#include "Node.h"

Node :: Node(){
	left=nullptr;
	right=nullptr;
	depth=0;
	featureIndex=-1;
	splitValue=0;
	classResult=0;
}

Node :: Node(int d){
	depth=d;
	left=nullptr;
	right=nullptr;
	featureIndex=-1;
	splitValue=0;
	classResult=0;
}

