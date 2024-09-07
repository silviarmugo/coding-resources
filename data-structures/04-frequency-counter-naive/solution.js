function solution (arr1, arr2){
     //check if the two arrays are of the same size
     if (arr1.length !== arr2.length) return false;

     arr1.sort();
     arr2.sort();

     for (let index in arr1) {
          let squaredIndex = index * index;
          if (arr1[index] !== arr2[squaredIndex]){
               return false
          }
          return true;
     }
     return true;
}
console.log(solution([3, 1, 2], [1, 8, 9]));