function sumZero(arr){
    //initialize two; left and right
    let left = 0; right = arr.length - 1;
    //while left pointer is less than the right
    while (left < right) {
        //Get the sum at currenet left and right pointer
        let sum = arr[left] + arr[right];
        //if the sum is zero, return the value at current left
        if (sum === 0){
            return [arr[left], arr[right]]
        } else if (sum > 0){
            //if the sum is greater than zero, decrement the right index
            right--;
        } else {
            //else increment left index.
            left++;
        }
    }
}
console.log(sumZero([-13, 5, 13, 2, 6, -17, -2, -11, 0, 1, 12, 3, 4]));