/**
 * @param {string} word
 * @return {boolean}
 */
var detectCapitalUse = function(word) {
    if(word.toLowerCase()===word || word.toUpperCase()===word || ((word.charAt(0).toUpperCase())+(word.toLowerCase().slice(1)))===word) return true;
    
    return false;
};