//********************************************************
// File name:  SortableArray.h
// Author:     chadd williams
// Date:       7/5/2013
// Class:      CS380
// Assignment: Basic Sorting
// Purpose:    To define the header file for a sortable array
//********************************************************

#ifndef _SortableArray_H_
#define _SortableArray_H_
#include <iostream>
#include <vector>

#include "Student.h"

class SortAlgorithm;

class SortableArray 
{

public:
	
	// constructor
	SortableArray();

	// destructor
	virtual ~SortableArray();

	// adds a new element to the back of the array
	virtual bool pushBack(Student *val);

	// returns the number of elements in the array
	virtual int	count() const;

	// returns the ith element of the array
	virtual Student * getItem(int index) const;

	// set an item at a given location
	virtual bool setItem(int index, Student *pItem);

	// deallocate all items pointed to by the array
	virtual void deallocateItems();

	// sets the sort algorithm to be used
	void setSortBehavior(SortAlgorithm *sortAlgorithm) 
		{mpSortBehavior = sortAlgorithm;};

	// Invoke sort algorithm on the array
	void sort();
	
	//////////////////////

	// clears the array 
	virtual void clear();

	// Provide an << operator
	friend std::ostream & operator << (std::ostream &os, const SortableArray &array);

private:

	SortAlgorithm *mpSortBehavior;
	std::vector<Student*> m_arrayData;

};

#endif
