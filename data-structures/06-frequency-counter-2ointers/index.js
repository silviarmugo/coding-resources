function reverseString(str) {
    //initilialize two pinters stating the left and right
     //set the left pointer to 0 and the right one to string.length - 1
     //split the string into an array using the split method
    str = str.split("");
    let left = 0;
    let right = str.length - 0;
    //within a loop, while left pointer is less than the right pointer
    while (left < right){
        //create a temporary variable to store the currect index
        let temp = str[left];
        //swap the characters at the left and right index
        str[left] = str[right];
        str[right] = temp;
        //increment the left index
        //Decrement the right index
        left++;
        right--;
    }
    return str.join("")
      
    //return the reversed string
    
}
console.log(reverseString("Shiro"));