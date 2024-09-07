function solution(arr1, arr2) {
    // If the lengths of the arrays are not the same, return false
    if (arr1.length !== arr2.length) {
        return false;
    }

    // Create objects to count the frequency of each number in both arrays
    let count1 = {};
    let count2 = {};

    // Populate the count objects for arr1 and arr2
    for (let num of arr1) {
        count1[num] = (count1[num] || 0) + 1;
    }

    for (let num of arr2) {
        count2[num] = (count2[num] || 0) + 1;
    }

    // Check if every number in arr1 has its square in arr2 with the same frequency
    for (let num in count1) {
        if (count1[num] !== count2[num ** 2]) {
            return false;
        }
    }

    return true;
}

// Example Usage
console.log(solution([1, 2, 3], [1, 4, 9]));  // Should return true
console.log(solution([1, 2, 3], [1, 9, 4]));  // Should return true
console.log(solution([1, 2, 3], [1, 4, 4]));  // Should return false
