const subtractProductAndSum = (n) => {
  const numStr = n
    .toString()
    .split("")
    .map((e) => parseInt(e));

  const sum = numStr.reduce((accum, current) => accum + current);
  const prod = numStr.reduce((accum, current) => accum * current);
  return prod - sum;
};

console.log(subtractProductAndSum(234));
