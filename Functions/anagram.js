const isAnagram = (first, second) => {
  if (first.length !== second.length) {
    return false;
  }
  //Initialise an empty object
  const lookup = {};
  //storing first string letter occurences in lookup object
  for (let i in first) {
    let letter = first[i];
    //if letter exists increment,otherwise set to 1
    lookup[letter] ? lookup[letter] + 1 : (lookup[letter] = 1);
  }
  console.log(lookup);
  //loop over second string and compare each character to our lookup object
  for(let i in second){
      let letter=second[i];
      //can't find letter or letter is zero than its not an anagram
      if(!lookup[letter]){
          return false;
      }else{
          lookup[letter]-=1;
      }
  }
  return true;
};

let a=isAnagram('cinema','iceman')
console.log(a);