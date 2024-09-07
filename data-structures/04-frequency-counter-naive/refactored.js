function solution(arr1, arr2) {
    // If the lengths of the arrays are not the same, return false
    if (arr1.length !== arr2.length) {
        return false;
    }
    let frequencyCounter1 = {};
    let frequencyCounter2 = {};
    
    for (value of arr1){
        if (frequencyCounter1[value] > 0) {
            frequencyCounter1[value]++;
        } else {
            frequencyCounter1[value] = 1;
        }
    }
    console.log(frequencyCounter1);
    for (value of arr2){
        if (frequencyCounter2[value] > 0) {
            frequencyCounter2[value]++;
        } else {
            frequencyCounter2[value] = 1;
        }
    }
    // console.log(frequencyCounter2);
    // for (let key in frequencyCounter1) {
    //     let squaredKey = key * key;
    //     if (!(key * key in frequencyCounter2)) {
    //         return false;
    // }
    //     if (arr1[key] !== arr2[squaredKey]) {
    //         return false;
    //     }
    // }
    // return true;
    for (let key in frequencyCounter1) {
        //console.log(key);
        if (!(key * key in frequencyCounter2)) {
            return false;
        }
        if (frequencyCounter2[key * key] !== frequencyCounter1[key]) {
            return false;
        }
    }
    return true;
}
console.log(solution([3, 1, 2], [1, 4, 9]));