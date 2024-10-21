void swap(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

/**
 * Function to partition the array and return the pivot index
 * arr: input array
 * low: starting index for partitioning
 * high: end index for partitioning
 */
int partition(int arr[], int low, int high) {
    // intialize pivot
    int pivot = arr[high];  // Pivot is the last element
    
    // initialize i
    // remember i tracks the boundary between smaller elements and rest
    int i = low;  // Start at 'low'
    
    // the j "explorer" loop
    // remember j compares each element with pivot and swaps with i
    for (int j = low; j < high; ++j) {
        if (arr[j] <= pivot) {
            swap(arr[i], arr[j]);  // Swap arr[i] and arr[j]
            ++i;  // Increment i to track the boundary
        }
    }
    swap(arr[i], arr[high]);  // Place the pivot in its correct position
    // return the index of pivot
    return i;
}

/**
 * Recursive function to perform QuickSort
 * arr: input array
 * low: starting index for sorting
 * high: end index for sorting
 */
void quickSort(int arr[], int low, int high) {
    // check for base condition 
    if (low < high) {
        // Partition the array and get the pivot index
        int pi = partition(arr, low, high);

        // Recursively sort the two halves
        quickSort(arr, low, pi - 1);  // Left half
        quickSort(arr, pi + 1, high);  // Right half
    }
}