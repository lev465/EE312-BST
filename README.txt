BST312.h

Luis Vazquez
EE312 Spring 2020

BST312 serves as a template for creating a binary search tree with item types that have <,> and = operators overriden.

Upon creation of the tree, if the value of an added item is greater than the current node's value, it will be added to the left branch. Otherwise, if the value is greater or equal to that of the current node, it will be added to the right branch. 

To use the BST template, simply include it into the driver program as:
	#include "BST312.h"

Use of this template requires C++11. To run:

	module load gcc
	g++ -std=c++11 <DRIVERPROGRAM>

where DRIVERPROGRAM is the name of the driver using the template.

This template can be found on git at the following link:

https://github.com/lev465/EE312-BST

