// O(n) time | O(n) space
const getNewLetter = (letter, key) => {
  const newLetterCode = letter.charCodeAt() + key;
  return newLetterCode <= 122 // If incrementated code is less than 122 (z), return the character.
    ? String.fromCharCode(newLetterCode)
    : String.fromCharCode(96 + (newLetterCode % 122));
};

const caesarCipherEncryptor = (string, key) => {
  const newLetters = [];
  const newKey = key % 26;
  for (const letter of string) {
    newLetters.push(getNewLetter(letter, newKey));
  }
  return newLetters.join("");
};

const string = "xyz";
const increment = 3;

console.log(caesarCipherEncryptor(string, increment));
