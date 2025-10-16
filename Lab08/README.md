# Lab 08 -- Heap-ordered, Complete Tree-based, Priority Queue
## CS 315 — Priority Queue Lab (Min‑Heap)
Introduction
Today’s lab is about priority queues implemented as a binary min‑heap. You’ll first get comfortable with what a heap looks like and feels like by building one on paper. Then you’ll switch to code and complete two short methods so the program can sort numbers using your heap.

Just as before, you’ll work in pairs. For the paper part, turn in one solution per group with both names on every page. For the code part, you may pair‑program, but each student uploads their own file to the LMS (same final code is fine—put both names in the header).

What you will do
Part 1 (on paper): Build a min‑heap by inserting numbers from a file and then perform a few delete‑min operations. You’ll keep both views in sync: the complete-tree diagram and the array (vector) representation.
Part 2 (in CLion): Finish three functions—insert, and deleteMin, and findMin—in an array‑backed heap class. When they’re correct, the program will print the input numbers in non‑decreasing order.
Goals
By the end of this lab, you should be able to: 

Explain the two heap rules: heap order (parent ≤ children) and completeness (fill levels left‑to‑right). 
Move comfortably between the tree view of a heap and its array (vector) view.
Implement percolate‑up (for insert) and percolate‑down (for delete‑min), and know they’re O(log n).
Use CLion to build/run a small project and sanity‑check output against a file.
 

Support Material
Download the starter CLion project Download Download the starter CLion project. It already compiles and runs. Inside you’ll find:

PriorityQueue.hpp / PriorityQueue.cpp — an array‑backed min‑heap class with three methods to finish.
main.cpp — reads numbers from a file, inserts them into the heap, and then prints them using repeated deleteMin().
inputValues.txt — the exact input you’ll use for both the paper and code parts.
 

Part 1 — On Paper (with checkpoints)
Use the numbers from inputValues.txt in order.

A. Build the heap (inserts)
Insert the first 20 numbers in the input file, in the order that they appear, into each of the following two structures.

1. Tree view: insert the value in a new node and add it to a complete tree, which is empty at the start, to maintain a complete binary tree, heap-ordered queue.

2. Vector view: insert the same value in the matching array representation of the heap.

Checkpoint: After the first five inserts, show your tree and vector to the instructor before continuing.

After having check with the instructor, continue until all values are inserted. You should now have a completed tree diagram and a matching vector.

Checkpoint: Check with the instructor once this phase is over.

B. Do five delete‑mins
Starting from your completed heap:

1. Perform five deleteMin operations one at a time.

2. For each delete, show:

            - the value removed,

            - the move of the last element to the root,

            - the moving of the values down the complete tree until the process ends.

             - the moving of the value in the vector until the process ends.

Turn‑in for Part 1: Submit one paper per group with both names on every page. 

Part 2 — Implementation (CLion)
Open the project in CLion. You’ll complete three methods in PriorityQueue:

insert(int v) — append to the end and sift up until the heap value property holds.
deleteMin() — calling this function when the queue is empty should terminate the program. Use assert (include cassert) to handle the empty. Otherwise, delete the min value and make the necessary moves to restore the value property of the heap. 
int findMin() — returns the minimum value from the heap.
Recall the algorithm from the lecture: assuming 
 to be the index of an element in the vector, its parent is stored at 
 and its left and right children are at 
 and 
, respectively. Of course, the element at index 1 doesn't have a parent and the elements whose indices are larger than 
where 
 is the number of elements in the queue, do not have any children. 

Run it: main.cpp reads inputValues.txt, inserts values form the input file into the queue, then prints values using repeated deleteMin(). If your heap is correct, the lines print in non‑decreasing order.

 

Helpful tips
Draw small examples. A 7–10 element heap is perfect for debugging by hand.
Duplicates are fine. Your comparisons should still work (use <, not <=, to avoid useless swaps).
Edge cases: empty heap delete, single element insert/delete.
What to submit
Part 1 (paper): One submission per group of two; names on every page. 

Part 2 (code): Each student uploads individually to the Canvas:

             - PriorityQueue.cpp 
             - Include a header comment with both partners’ names.

 

Quick reference (time complexities)
findMin: O(1)
insert: O(log n)
deleteMin: O(log n)
Building via successive inserts: O(n log n) (vs. off-line heapify at O(n) — not required here)
