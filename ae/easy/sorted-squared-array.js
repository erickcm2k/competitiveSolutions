// Time O(nlogn) | Space O(n)

function sortedSquaredArray(array) {
  const squaredArray = array.map((num) => num * num);
  squaredArray.sort((a, b) => a - b);
  return squaredArray;
}

// Do not edit the line below.
exports.sortedSquaredArray = sortedSquaredArray;
