/*
Syntax:
unordered_map<string, string>New_map(old_map);
*/

// C++ program to implement
// the above approach
#include <iostream>
#include <unordered_map>
using namespace std;

// Driver code
int main() 
{
    // Initialize an unordered_map 
    // using default constructor
    unordered_map<string,string>old_map;
  
    // Adding key-value pairs using 
    // subscript([]) and assignment(=) 
    // operators
    old_map["Ground"] = "Grass";
    old_map["Floor"] = "Cement";
    old_map["Table"] = "Wood";
  
  
    // Create a new_map where contents of 
    // the previous map will be copied using
    // copy constructor
    unordered_map<string, string>New_map(old_map);
  
    // Traverse through the unordered_map
    for(auto x: New_map)
    {
       cout << x.first << "->" <<
               x.second <<endl;
    }
    return 0;
}