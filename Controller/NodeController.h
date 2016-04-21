/*
 * NodeController.h
 *
 *  Created on: Jan 27, 2016
 *      Author: droc6148
 */

#ifndef CONTROLLER_NODECONTROLLER_H_
#define CONTROLLER_NODECONTROLLER_H_

#include <string>
#include "../Model/CTECArray.cpp"
#include "../Model/Node.cpp"
#include "../Model/ArrayNode.cpp"
#include "../Model/Timer.h"
#include "../Model/CTECList.cpp"

using namespace std;

class NodeController
{
private:
	CTECArray<int> * notHipsterInts;
	CTECList<int> * numbers;
	Timer arrayTimer;
    void sortData();
	void testList();
    
    void swap(int first, int second);
    void quicksort(int first, int last);
    int parttion(int first, int last);
    void doQuick();
    
    int * mergeData;
    void doMergesort();
    void mergesort(int data [], int size);
    void merge(int data [], int sizeOne, int sizeTwo);

public:
	NodeController();
	virtual ~NodeController();
	void start();
};

#endif /* CONTROLLER_NODECONTROLLER_H_ */
