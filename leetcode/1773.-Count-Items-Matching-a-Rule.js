// https://leetcode.com/problems/count-items-matching-a-rule/submissions/

const countMatches = (items, ruleKey, ruleValue) => {
  let matchCount = 0;

  items.forEach((element) => {
    let index;
    switch (ruleKey) {
      case "type":
        index = 0;
        break;
      case "color":
        index = 1;
        break;
      case "name":
        index = 2;
        break;
      default:
        throw new Error();
    }
    element[index] === ruleValue && matchCount++;
  });
  return matchCount;
};

// console.log(countMatches(items, ruleKey, ruleValue));
console.log(
  countMatches(
    [
      ["phone", "blue", "pixel"],
      ["computer", "silver", "lenovo"],
      ["phone", "gold", "iphone"],
    ],
    "color",
    "silver"
  )
);
