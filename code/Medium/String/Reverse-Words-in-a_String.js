//leetcode.com/problems/reverse-words-in-a-string/

/**
//  * @param {string} s
//  * @return {string}
 */
https: var reverseWords = function (s) {
  let str = s.split(" ");
  let newstr = [];

  for (let i = str.length - 1; i >= 0; i--) {
    if (str[i] != "") {
      newstr.push(str[i]);
    }
  }

  return newstr.join(" ");
};
