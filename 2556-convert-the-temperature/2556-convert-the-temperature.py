class Solution(object):
    def convertTemperature(self, celsius):
        my_list = []
        my_list.append(celsius + 273.15)
        my_list.append(celsius * 1.8 + 32)
        return my_list