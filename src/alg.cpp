int cbinsearch(int *arr, int size, int value) {
    int left = 0;
    int right = size - 1;
    int count = 0;
    int middle;
    while (left < right) {
        middle = (left + right)/2;
        if (arr[middle] < value)
            left = middle + 1;
        else 
            right = middle - 1;
        if (arr[middle] == value) {
            while (arr[middle] == value) {
                count++;
                left++;
            }
        }
        if (count)
            return count;
        else
            return 0;
    }
}
