/*********************************************************************
*
* 	Classification and Regression Tree (CART) V1.0
* 
* 	Author: Lingbo Zhang
*	11/22/2017 at Massachusetts Institute of Technology
*	Email: lingboz2015@gmail.com
* 
**********************************************************************/
#pragma once

#include<iostream>
#include<fstream>
#include<sstream>
#include<algorithm>
#include<vector>
#include<unordered_map>
#include<unordered_set>
#include<string>
#include<math.h>
#include<cstdlib>

#define version        "V1.0"
#define version_date   "2017-11-25"

using namespace std;

class Node{
	
	Node* left;
	Node* right;
	int featureIndex;
	float splitValue;
	float classResult;
	//default constructor
	Node(){
		left=nullptr;
		right=nullptr;
		featureIndex=-1;
		splitValue=NULL;
		classResult=NULL;	
	}
	// destructor
	~Node(){
		if (left!=nullptr){
			delete left;
			left=nullptr;
		}
		if (right!=nullptr){
			delete right;
			right=nullptr;
		}
	}
};


struct CART_data{
	
       vector< vector<float> > trainData;
       vector< vector<float> > testData;
       int featureNum;
//      members for the classification tree
//       unordered_set<int> classSet;
//       unordered_map<int,int> classCount; 
};

class CART{
	
protected:
	Node* root;
	CART_data data;	
//      CART settings:
        const float TEST_RATIO=0.2;
public:
	CART();
	~CART();
	void Learn(string sampleFile,int flag);
//	void Evaluate();
//	float Predict();
	
protected:
	void OutputData(CART_data& data);
	int Read_sampleFile(string sampleFile,CART_data& data);
};
