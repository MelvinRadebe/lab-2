// size_capacity.cpp
// Vector size versus capacity

#include <vector>
#include <iostream>

using namespace std;
// Vector capacity is the amount of memory it constains
// vectors size is the contigous data that is stored in it


//The size of a vector refers to the number of elements it currently contains.
//It represents the actual count of elements that have been added to the vector.

//The capacity of a vector, on the other hand, is the amount of space allocated to store elements.
int main()
{
    vector<int> vec;
    cout << "vec: size: " << vec.size() 
         << " capacity: " << vec.capacity() << endl;

    for(int i = 0; i < 24; i++) {
        vec.push_back(i);
        cout << "vec: size: " << vec.size() 
             << " capacity: " << vec.capacity() << endl;
    }

    return 0;
}
