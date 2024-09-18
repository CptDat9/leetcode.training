class Solution:
    def findWords(self, words: List[str]) -> List[str]:
        row1 = set("qwertyuiop")
        row2 = set("asdfghjkl")
        row3 = set("zxcvbnm")
        def can_type_in_one_row(word):
            lowercase_word=set(word.lower())
            return lowercase_word <= row1 or lowercase_word <= row2 or lowercase_word <= row3
        return [word for word in words if can_type_in_one_row(word)]
        
