#include<iostream>
#include"reclists.hpp"
#include"solutions.hpp"

// Get a list from the user for a specific purpose,
// and output that list
list get_list(std::string purpose) {
    std::cout << "Enter a list for " << purpose << ": ";
    list p = read_list();
    std::cout << "Echoing the list that you entered below." << std::endl;
    write_list(p);
    return p;
}

void testNumNodesAtTheTopLevel() {
    // Test this numNodesAtTheTopLevel 3 times.

    auto p = get_list("testing numNodesAtTheTopLevel");
    std::cout << "The number of atoms at the top-level is " << numNodesAtTheTopLevel(p) << std::endl;

    p = get_list("testing numAtomsAtTheTopLevel");
    std::cout << "The number of atoms at the top-level is " << numNodesAtTheTopLevel(p) << std::endl;

    p = get_list("testing numAtomsAtTheTopLevel");
    std::cout << "The number of atoms at the top-level is " << numNodesAtTheTopLevel(p) << std::endl;

}

int main()
{

    testNumNodesAtTheTopLevel();

    return 0;
}