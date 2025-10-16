//
// Created by Kooshesh on 10/15/25.
//

#include<cassert>
#include "PriorityQueue.hpp"

PriorityQueue::PriorityQueue() = default;

bool PriorityQueue::insert(int v) {
    return false;
}

void PriorityQueue::deleteMin() {
    assert(!empty());
}

int PriorityQueue::findMin() const {
    assert(!empty());
    return 0;
}

bool PriorityQueue::empty() const {
    return heap.empty();
}

unsigned long PriorityQueue::size() {
    return static_cast<unsigned long>(heap.size());
}

