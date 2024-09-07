function maxSubArraySum(arr, n) {
    if (n > arr.length) {
        return null; // If n is greater than the array length, return null
    }

    // Initialize the maximum sum with the sum of the first n elements
    let maxSum = 0;
    for (let i = 0; i < n; i++) {
        maxSum += arr[i];
    }

    let tempSum = maxSum;
    // Slide the window over the array and calculate the sum
    for (let i = n; i < arr.length; i++) {
        tempSum = tempSum - arr[i - n] + arr[i];
        maxSum = Math.max(maxSum, tempSum);
    }

    return maxSum;
}
