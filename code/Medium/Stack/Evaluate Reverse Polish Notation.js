// https://leetcode.com/problems/evaluate-reverse-polish-notation/
/**
 * @param {string[]} tokens
 * @return {number}
 */
var evalRPN = function (tokens) {
  let arr = [];

  for (let i = 0; i < tokens.length; i++) {
    if (tokens[i] == "+") {
      let a = arr[arr.length - 1];
      arr.pop();
      let b = arr[arr.length - 1];
      arr.pop();

      arr.push(b + a);
    } else if (tokens[i] == "-") {
      let a = arr[arr.length - 1];
      arr.pop();
      let b = arr[arr.length - 1];
      arr.pop();
      arr.push(b - a);
    } else if (tokens[i] == "/") {
      let a = arr[arr.length - 1];
      arr.pop();
      let b = arr[arr.length - 1];
      arr.pop();

      arr.push(parseInt(b / a));
    } else if (tokens[i] == "*") {
      let a = arr[arr.length - 1];
      arr.pop();
      let b = arr[arr.length - 1];
      arr.pop();

      arr.push(b * a);
    } else {
      arr.push(tokens[i] * 1);
    }
  }
  return arr[0];
};
