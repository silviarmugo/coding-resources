function charCount(str) {
    //initialize an empty object to keep track of string count
    let result = {};  //iterate over each character in the string.
    for (let i = 0; i < str.length; i++) {
      //using regular expressions(Regex)
      //1. convert each character to lower case.
      let char = str[i].toLowerCase();
      if (/[a-z0-9!@]/.test(char)) {
        //2. if the character is in the object, increment the character count by 1
        //3. if the character is not in the object, set the character count to 1
        //4. if the character is not a letter or a number, dont do anything.      
        // if (result[char] > 0) {
        //   result[char]++;
        // } else {
        //   result[char] = 1;
        // }
        result[char] = ++result[char] || 1;
        //result[char] = result[char] > 0 ? ++result[char] : 1;
      }
    }
    //return the object at the end
    return result;
  }
  function main() {
    console.log(charCount("Hello! world! My Phone number is 123456@"));
  }
  main();