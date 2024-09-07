function maxSubArraySum(arr, n){
    //ensure the window size does not exceed array length
    if (n > arr.length) return null;

    //initiliaze max value to 0
    let max = 0;
    //iterate over the outer loop
    for (let i = 0; i < arr.length - n + 1; i++) {
        //within the outer loop, set the sum value to 0
        let sum = 0;
            //iterate over the inner loop starting from index 0
            for (let j = 0; j < n; j++){
               //increment the sum value at position i and j
               sum = sum + arr[i + j];
            }
            //outside the inner loop, check if sum is greater than the max
            if (sum > max){
                //if yes, set max as the new sum
                max = sum;
            }
            return max;
    }
}
console.log(maxSubArraySum([1, 2, 5, 2, 8, 1, 5], 2));