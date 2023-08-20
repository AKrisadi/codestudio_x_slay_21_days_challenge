#include <bits/stdc++.h> 
#include <vector>

vector < int > termsOfAP(int x) {
    // Write your code here.
    vector <int> sol; //create solution vector

    int cur_trm = 0,index = 1; // to keep track of current term and index

    while( sol.size() != x) // loop till solution in not filled with desired elements

    {

        cur_trm = (3 * index) + 2; // count current term

        if (cur_trm % 4 != 0 ) sol.emplace_back(cur_trm); //is condition is mate inserte element into vector

        index++; // increase index

    }

    return sol; // return solution
}
