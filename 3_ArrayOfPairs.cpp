/*
Syntax:
unordered_map<string, string>New_map(old_arr, old_arr + n); 
*/
/*
In the case of the vector of pairs, use the inbuilt iterators to copy contents from the vector of pairs into the new unordered_map.
Syntax:-
unordered_map<int, int>New_map(old_vector.begin(), old_vector.end());
 */

// C++ program to implement 
// the above approach
#include <bits/stdc++.h>
using namespace std;

// Driver code
int main() 
{
    // Initialize an array of pair 
    // of strings
    pair<string,string>old_arr[] = 
    {
      make_pair("Ground", "Grass"),
      make_pair("Floor", "Cement"),
      make_pair("Table", "Wood")
    };
  
    int n = (sizeof(old_arr) / 
             sizeof(old_arr[0]));
  
    // Adding these key-value pairs using 
    // the pairs stored in the array of pairs    
    unordered_map<string, 
                  string>New_map(old_arr,
                                 old_arr + n);
  
    // Traverse through the unordered_map
    for(auto x: New_map)
    {
       cout << x.first << "->" << 
               x.second <<endl;
    } 
    return 0;
}


