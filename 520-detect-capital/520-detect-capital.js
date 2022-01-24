/**
 * @param {string} word
 * @return {boolean}
 */
var detectCapitalUse = function(word) {
    if(word.toLowerCase()===word) return true;
    if(word.toUpperCase()===word) return true;
    if((word.charAt(0).toUpperCase()+word.toLowerCase().slice(1))===word) return true;
    return false;
};