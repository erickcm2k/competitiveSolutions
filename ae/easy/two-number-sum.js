// Brute force solution
// O(n^2) Time | O(1) Space
function twoNumberSum(array, targetSum) {
  let numbers = [];
  for (let i = 0; i < array.length - 1; i++) {
    for (let j = i + 1; j < array.length; j++) {
      if (array[i] + array[j] === targetSum) {
        return [array[i], array[j]];
      }
    }
  }
  return numbers;
}

// Best solution
// O(n) Time | O(n) Space
function twoNumberSum(array, targetSum) {
  const hashTable = {};
  for (let i = 0; i < array.length; i++) {
    let x = array[i];
    let y = targetSum - x;

    if (hashTable[y]) {
      return [x, y];
    } else {
      hashTable[x] = true;
    }
    console.log(hashTable);
  }

  return [];
}

const array = [3, 5, -4, 8, 11, 1, -1, 6];
const target = 10;
var x = twoNumberSum(array, target);
console.log("Result");
console.log(x);
