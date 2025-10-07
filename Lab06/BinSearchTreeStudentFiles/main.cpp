#include <iostream>
#include <fstream>
#include "BinSearchTree.hpp"

int main( int argc, char *argv[] ) {
    // Use this as a starting point to test the functions
    // that you add to BinSearchTree.


    if( argc != 2 ) {
        std::cout << "usage: executable name-of-input-file\n";
        exit(1);
    }
    std::fstream inputStream;
    inputStream.open(argv[1], std::ios::in);
    if(!inputStream.is_open()) {
        std::cout << "Unable to open the input file " <<
                  argv[1] << std::endl;
        std::cout << "Terminating...\n";
        exit(2);
    }


    BinSearchTree *tree = new BinSearchTree();
    int aValue;
    while( inputStream >> aValue )
        tree->insert( aValue );

    // The size() function has not been implemented yet. It currently returns 0
    // so the program can compile and run. Your first task is to write a proper
    // recursive implementation of find(). Once that is done, move on to writing
    // the recursive version of size().

    std::cout << "The size of the tree is " << tree->size() << "." << std::endl;

    return 0;
}
