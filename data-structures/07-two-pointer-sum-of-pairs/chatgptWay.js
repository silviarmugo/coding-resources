function findFirstZeroSumPair(arr) {
    // Create an object to store visited numbers
    var seenNumbers = {};

    // Iterate through the array
    for (var i = 0; i < arr.length; i++) {
        var current = arr[i];
        var target = -current; // The number needed to sum to zero with the current number

        // Check if the target number has already been seen
        if (seenNumbers[target] !== undefined) {
            return [target, current]; // Return the pair that sums to zero
        }

        // Mark the current number as seen
        seenNumbers[current] = true;
    }

    // If no pair is found, return null
    return null;
}

// Example Usage
console.log(findFirstZeroSumPair([3, 1, -4, 2, 8, -1])); // Should return [-1, 1]
console.log(findFirstZeroSumPair([1, 2, 3, -2, -1]));    // Should return [-2, 2]
console.log(findFirstZeroSumPair([1, 2, 3, 4, 5]));       // Should return null

