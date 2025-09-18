class Solution(object):
    def findWordsContaining(self, words, x):
        my_list = []
        index = 0
        for madina in words:
            for c in madina:
                if (c == x):
                    my_list.append(index)
                    break
            index += 1
        return my_list
