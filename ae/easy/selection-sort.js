// O(n^2) Time | O(1) Space

const nums = [8, 5, 2, 9, 5, 6, 3];

function selectionSort(array) {
    for (let i = 0; i < array.length; i++) {
      let minIndex = i;
      for (let j = i + 1; j < array.length; j++) {
        if (array[j] < array[minIndex]) {
          minIndex = j;
        }
      }
      if (i != minIndex) {
        let temp = array[i];
        array[i] = array[minIndex];
        array[minIndex] = temp;
      }
    }
      return array;
  }

console.table(nums);
selectionSort(nums);
console.table(nums);
