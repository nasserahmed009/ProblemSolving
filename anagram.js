// anagram('Ab bc', 'cbab') return true

const anagram = (word1, word2) => {
    word1 = word1.toLowerCase();
    word2 = word2.toLowerCase();
    const word1Dic = {};
    const word2Dic = {};
    const numberOfIterations = Math.max(word1.length, word2.length);
    const regex = /[-!$%^&*()_+|~=`{}\[\]:";'<>?,.\/]/;


    for (let i = 0; i < numberOfIterations; i++) {

        if (word1[i] && word1[i] != ' ' && !regex.test(word1[i])) {
            if (!word1Dic.hasOwnProperty(word1[i])) word1Dic[word1[i]] = 1;
            else word1Dic[word1[i]] += 1;
        }

        if (word2[i] && word2[i] != ' ' && !regex.test(word2[i])) {
            if (!word2Dic.hasOwnProperty(word2[i])) word2Dic[word2[i]] = 1;
            else word2Dic[word2[i]] += 1;
        }
    }

    if (Object.keys(word1Dic).length != Object.keys(word2Dic).length) return false;

    for (let letter of Object.keys(word1Dic)) {
        if (word1Dic[letter] != word2Dic[letter]) return false;
    }

    return true;
};



console.log(anagram('Ab bc', 'cbba'));
console.log(anagram('Abbc', 'cbba'));
console.log(anagram('Abbc', 'cba'));