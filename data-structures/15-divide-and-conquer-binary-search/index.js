function search(arr, val){
    //initialize min and max index
    let min = 0; 
    let max = arr.length - 1;
    //while min is less or equal to max index
    while (min <= max) {
        //get the middle index
        let middle = Math.floor((max + min) / 2);
        //if value at middle index is less than val, then min index = middle index + 1
        if (arr[middle] < val) {
            min = middle + 1;
        }
        //if the value at middle index is greater than val, max index = middle - 1
        else if (arr[middle > val]){
            max = middle - 1;
        }
        //else return the middle index
        else {
            return middle;
        }

    }   
    return -1;
}
console.log(search([1, 2, 3, 5, 6, 8, 9, 12, 15, 16, 29], 15));
