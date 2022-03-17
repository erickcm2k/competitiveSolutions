// Prueba
// ()()))))

// ((()))

const isValid = (str) => {
  const stack = [];

  if (str.length === 0) {
    return false;
  }

  for (let i = 0; i < str.length; i++) {
    // Escenario 1: La pila está vacía y hay un símbolo de cerradura
    if (str[i] === ")" && stack.length === 0) {
      return false;
    }

    // Escenario 2: Encontramos un símbolo de apertura
    else if (str[i] === "(") {
      stack.push("(");
    }

    // Escenario 3: Encontramos un símbolo de cerradura. Hay elementos en la pila.
    else if (str[i] === ")") {
      stack.pop();
    }
  }
  // Si la pila está vacía al terminar, quiere decir que está balanceada, caso contrario
  // faltaron paréntesis de cierre.
  if (stack.length === 0) {
    return true;
  } else {
    return false;
  }
};

console.log(isValid("(((())()))((()))((()(())(())))"));
