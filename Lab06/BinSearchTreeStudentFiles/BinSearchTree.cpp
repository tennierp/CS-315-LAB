// Created by Ali Kooshesh on 10/1/25.

#include "BinSearchTree.hpp"
#include <iostream>

BinSearchTree::BinSearchTree(): root{nullptr} {}

TreeNode *BinSearchTree::insert( TreeNode *root, int v ) {
    if( root == nullptr )
        return new TreeNode( v );
    if( root->value() < v )
        root->rightSubtree( insert( root->rightSubtree(), v ) );
    else
        root->leftSubtree( insert( root->leftSubtree(), v ) );
    return root;
}

bool BinSearchTree::insert(int v) {
    // Insert v in the tree if it is not already a member.
    // Return true if the value was indeed inserted into the tree.
    // Otherwise, return false.

    if( ! find(v) ) {
        root = insert(root, v);
        return true;
    }
    return false;
}

int BinSearchTree::size() {
    // Write this function first!
    return size(root);
}

bool BinSearchTree::find(int v) {
    // You need to write a recursive implementation for this function.
    // Right now, it returns false so that insert can do its job.
    // That means, it will add duplicates to the tree, which is not desirable.

    return find(root, v);
}

BinSearchTree::~BinSearchTree() {
    // This function should delete every node in the tree.
    // To do that, you will have to recursively traverse the tree, using
    // a post-order traversal.
    destroy(root);
}

bool BinSearchTree::find(TreeNode *root, int v) {
    // You need to write a recursive implementation for this function.
    // Right now, it returns false so that insert can do its job.
    // That means, it will add duplicates to the tree, which is not desirable.

    if (root == nullptr) {
        return false;
    }

    if (root->value() == v) {
        return true;
    }

    if (root->value() > v) {
        return find(root->leftSubtree(), v);
    }

    return find(root->rightSubtree(), v);
}

int BinSearchTree::size(TreeNode *root) {
    if (root == nullptr) {
        return 0;
    }

    return 1 + size(root->leftSubtree()) + size(root->rightSubtree());
}

bool BinSearchTree::iterFind(int v) {
    return iterFind(root, v);
}

bool BinSearchTree::iterFind(TreeNode* root, int v) {
    while (root != nullptr && root->value() != v) {
        if (root->value() > v) {
            root = root->leftSubtree();
        } else {
            root = root->rightSubtree();
        }
    }

    return root != nullptr;
}

void BinSearchTree::inorderListing() {
    inorderListing(root);
}

void BinSearchTree::inorderListing(TreeNode *root) {
    if (root == nullptr) {
        return;
    }

    inorderListing(root->leftSubtree());
    std::cout << root->value() << " " << std::endl;
    inorderListing(root->rightSubtree());
}

int BinSearchTree::maxDepth() {
    return maxDepth(root);
}

int BinSearchTree::maxDepth(TreeNode* root) {
    if (root == nullptr) {
        return 0;
    }

    return 1 + std::max(maxDepth(root->leftSubtree()), maxDepth(root->rightSubtree()));
}

void BinSearchTree::iterInsert(int v) {
    if (find(v)) return;
    iterInsert(root, v);
}

void BinSearchTree::iterInsert(TreeNode*& root, int v) {
    if (root == nullptr) {
        root = new TreeNode(v);
        return;
    }

    TreeNode* current = root;
    TreeNode* parent = nullptr;

    while (current != nullptr) {
        parent = current;
        if (current->value() > v) {
            current = current->leftSubtree();
        } else {
            current = current->rightSubtree();
        }
    }

    TreeNode* newNode = new TreeNode(v);
    if ( parent->value() > v) {
        parent->leftSubtree(newNode);
    } else {
        parent->rightSubtree(newNode);
    }
}

void BinSearchTree::destroy(TreeNode *root) {
    if (root == nullptr) {
        return;
    }

    destroy(root->leftSubtree());
    destroy(root->rightSubtree());

    delete root;
}