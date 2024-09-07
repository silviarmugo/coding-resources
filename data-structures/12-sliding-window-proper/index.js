function maxSubArraySum (arr, n){
    //initialize maxSum & temp to 0
    let max = 0;
    let sum = 0;
    //Ensure the window size does not exceed the array length
    if (n > arr.length) return null; 
    //iterate over each element in the array based on the window
    for (let i = 0; i < n; i++){
        //for each iteration, accumulate the max
        max += arr[i];
    }
    //outside the loop, st the sum to max
    sum = max;
    //iterate over the element starting from index n
    for (let i = n; i < arr.length; i++){
        //for each iteration, get the temp and max
        sum = sum - arr[i - n] + arr[i];
        max = Math.max(max, sum);
    }
    return max;
}
console.log(maxSubArraySum([1, 2, 5, 2, 8, 1, 5]), 4);