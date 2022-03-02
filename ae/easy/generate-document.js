function getFrequencyObject(word) {
  const freqObj = {};
  const wordArray = word.split("");
  wordArray.forEach((character) => {
    if (freqObj[character]) {
      freqObj[character] = freqObj[character] + 1;
    } else {
      freqObj[character] = 1;
    }
  });
  return freqObj;
}
// n = characters length, m = document length
// O(n + m) Time | O(n + m) Space
function generateDocument(characters, document) {
  // In this case, it's impossible to generate a document.
  if (characters.length < document.length) {
    return false;
  }

  // Step 1: Get frequency object from characters and document
  const charactersFreqObj = getFrequencyObject(characters);
  const documentFreqObj = getFrequencyObject(document);

  //   Step 2: Get keys from characters
  //   const charactersKeys = Object.keys(charactersFreqObj);
  const documentKeys = Object.keys(documentFreqObj);

  // Step 3: Compare the frequency for each character in both objects.
  for (let i = 0; i < documentKeys.length; i++) {
    if (
      charactersFreqObj[documentKeys[i]] < documentFreqObj[documentKeys[i]] ||
      charactersFreqObj[documentKeys[i]] === undefined
    ) {
      return false;
    }
  }

  return true;
}

// const characters = "abcabc";
// const document = "aabbccc";

// const characters = "Bste!hetsi ogEAxpelrt x ";
// const document = "AlgoExpert is the Best!";

const characters = "a hsgalhsa sanbjksbdkjba kjx";
const document = "";

console.log(generateDocument(characters, document));
