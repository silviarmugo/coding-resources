function binarySearch(array, value){
    //create a left at index 0 and a right pointer at index array.length - 1
    let left = 0; 
    let right = array.length - 1;
    //get the middle index
    let pivot = Math.floor((left + right) / 2);
    //while the left pointer is less than the right pointer and 
     //the element at the middle indexis not equal to the value
    while (left < right && array[pivot] !== value){
        //check if the value is less than the element at the middle index
        if (value < array[pivot]) {
            //if yes, the right pointer is equal to middleIndex - 1
            right = pivot - 1;
        }
        else {
            //else the left pointer is middleIndex + 1
            left = pivot + 1;
        }
        //recalculate the middle index
        pivot = Math.floor((left + right) / 2);
    }
    
        //check if the element at the middle index is equal to the value. 
        if (array[pivot] === value){
            //if yes, return the middle value,
            return pivot 
        } else {
            //else return -1
            return -1
        }

}
console.log(binarySearch([2,5,6,9,13,15,28,30], 15));