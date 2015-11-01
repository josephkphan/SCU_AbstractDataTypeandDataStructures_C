/*
 * File:	deque.h
 *
 *		Edited by: Joseph Phan
 *
 * Copyright:	2015, Darren C. Atkinson
 *
 * Description:	This file contains the public function declarations for a
 *		deque abstract data type for integers.  A deque is a
 *		doubly-ended queue, in which items can only be added to or
 *		removed from the front or rear of the list.
 */

# ifndef DEQUE_H
# define DEQUE_H

class Deque {
	struct node {
		int data;
		node *next;
		node *prev;
};
    int count;
    node *head;

    public:
		Deque();
		~Deque();
	    void addFirst(int x);
		void addLast(int x);
		int removeFirst();
		int removeLast();
		int getFirst();
		int getLast();
		int size();
};

# endif /* DEQUE_H */
