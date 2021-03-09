const arr = [-2, 0, 10, -19, 4, 6, -8];

const checkIfExist = function (arr) {
  for (let i = 0; i < arr.length; i++) {
    for (let j = 0; j < arr.length; j++) {
      if ((arr[i] === arr[j] * 2 || arr[i] === arr[j] * 2) && j !== i) {
        return true;
      }
    }
  }
  return false;
};

console.log(checkIfExist(arr));
