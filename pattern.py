class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        words = s.split()
        if len(pattern) != len(words):
            return False
        word_to_char = {}
        char_to_word = {}
        for char, word in zip(pattern, words):
            if char in char_to_word:    
                if char_to_word[char] != word:
                    return False
            else: 
                    char_to_word[char]=word
            if word in word_to_char:
                if word_to_char[word]!=char:
                    return False
            else:
                    word_to_char[word]=char
        return True
 
