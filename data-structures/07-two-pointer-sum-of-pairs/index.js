function sumZero(arr) {
    //iterate over each element of the outer loop
    for (i = 0; i < arr.length; i++){
        for (j = i + 1; j < arr.length; j++) {
            if (arr[i] + arr[j] === 0) {
                return [arr[i], arr[j]];
            }
        }
    }
    //iterate over elements in the inner loop starting from index + 1
    //if the sum of elements in the inner and outer loop is 0, 
    //return an array of the inner and outer loop
}
console.log(sumZero([-2, 0, 1, 2, 3]));