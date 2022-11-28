
#include <iostream>
using namespace std;

// The target of "linear search" is to find the index of a specific element in an array.
// If the element is not found, the "linear search" function shall return -1
int linear_search(int _arr[], int _number_of_arr_elements, int _target_element)
{
    for(int cnt=0; cnt<=_number_of_arr_elements-1; cnt++) {
        // Go through elements one by one, till one of 2 events happen:
        // -----------------------------------------------------------
        // 1.) We find the items we are searching for, so we return its "index".
        // 2.) We reach the end of the array, and we don't find the item that 
        //     we are searching for, so we return -1

        if(_arr[cnt] == _target_element) {
            return cnt;
        }
    }

    // If we reach this point of the code, then it means that we were not able to find
    // the element in the array. So we know that our target element does not exist in 
    // the array, so we should return -1
    return -1;
}

int main() {
	
    int g_array[] = {10, 67, 7, 8, 65, 19, 20, 35, 56, 14};

    // number of elements in an array = (size of the array) / (size of 1 element in the array)
    // For example, if an array is 10 bytes, and the size of each element in the array 
    // is 2 bytes, then the number of elements in the array is 10 / 2 = 5 elements
    int number_of_arr_elements = sizeof(g_array) / sizeof(g_array[0]);

    int target_element;
    cin >> target_element; // getting target element from user

    int index = linear_search(g_array, number_of_arr_elements, target_element);
    
    if(index != -1) {
        cout << target_element << " is found at index " << index << endl;
    }
    else {
        cout << target_element << " is NOT found in the array" << endl;
    }

	return 0;
}
