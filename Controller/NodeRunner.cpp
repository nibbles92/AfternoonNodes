/*
 * NodeRunner.cpp
 *
 *  Created on: Jan 27, 2016
 *      Author: droc6148
 */

#include "NodeController.h"
#include <iostream>
#include <stdlib.h>


using namespace std;

int main()
{
	NodeController * baseController = new NodeController();
	baseController->start();
	return 0;
}


