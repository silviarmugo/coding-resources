function solution(arr1, arr2) {
    //check if the two arrays are of the same size
    if (arr1.length !== arr2.length) return false;
    
    //iterate over the first array
    for (i = 0; i <= arr1.length; i++){
        // let correctIndex = arr2.indexOf(arr1[i] * arr1[i]);
        // if (correctIndex === -1) {
        //     return false;
        // }
        for (j = 0; j < arr2.length; j++) {
            if ( arr1[i] * arr1[i] == arr2[i]) {
                return false
            }         
        }
        return true;
    }
    return false;

}
console.log(solution([3, 1, 2], [1, 4, 9]));