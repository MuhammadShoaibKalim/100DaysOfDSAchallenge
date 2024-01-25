





int countOccurrences(int arr[], int n, int key) {
    int firstIndex = firstOcc(arr, n, key);

    if (firstIndex == -1) {
        // Key not found
        return 0;
    }

    int lastIndex = lastOcc(arr, n, key);

    return lastIndex - firstIndex + 1;
}

int main() {
    int even[6] = {0, 1, 2, 3, 4, 4};
    int key = 4;

    int occurrences = countOccurrences(even, 6, key);