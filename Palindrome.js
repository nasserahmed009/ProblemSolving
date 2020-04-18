// "Dad" returns true
// "code" returns false


const checkPalindrome = (word) => {
    const wordLength = word.length;
    word = word.toLowerCase();

    for (let i = 0; i < (wordLength - i - 1); i++) {
        if (word[i] != word[wordLength - i - 1]) return false;
    }
    return true;
};

// Should return true
console.log(checkPalindrome('Racecar'));
console.log(checkPalindrome('Civic'));
console.log(checkPalindrome('Deified'));

// Should return false
console.log(checkPalindrome('Code'));
console.log(checkPalindrome('Boy'));