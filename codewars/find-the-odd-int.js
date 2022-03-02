const getOddAppearingNumber = (A) => {
  let result;
  const numberCounter = {};

  A.forEach((num) => {
    if (numberCounter[num]) {
      numberCounter[num]++;
    } else {
      numberCounter[num] = 1; // Creates the key if it does not exist.
    }
  });
  for (let num in numberCounter) {
    if (numberCounter[num] % 2 == 1) {
      result = num;
    }
  }
  return Number(result);
};
