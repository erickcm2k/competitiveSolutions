function nodeDepths(root, depth = 0) {
  if (root === null) {
    return 0;
  } else {
    return (
      depth +
      nodeDepths(root.left, depth + 1) +
      nodeDepths(root.right, depth + 1)
    );
  }
}
