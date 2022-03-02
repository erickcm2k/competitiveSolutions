// O(nlogn) Time || O(1) space
function classPhotos(redShirtHeights, blueShirtHeights) {
  if (redShirtHeights.length !== blueShirtHeights.length) {
    return false;
  }

  redShirtHeights.sort().reverse();
  blueShirtHeights.sort().reverse();

  const backRowColor =
    redShirtHeights[0] > blueShirtHeights[0] ? "red" : "blue";
  const arrayLength = redShirtHeights.length;

  for (let i = 0; i < arrayLength; i++) {
    let maxRedShirthHeight = redShirtHeights[i];
    let maxBlueShirthHeight = blueShirtHeights[i];

    if (backRowColor === "blue") {
      if (maxRedShirthHeight >= maxBlueShirthHeight) return false;
    } else {
      if (maxBlueShirthHeight >= maxRedShirthHeight) return false;
    }
  }

  return true;
}

// Do not edit the line below.
exports.classPhotos = classPhotos;
