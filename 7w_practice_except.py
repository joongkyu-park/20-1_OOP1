class FourCal:
    def __init__(self, first, second):
        self.first = first
        self.second = second
    def setdata(self, first, second):
        self.first = first
        self.second = second
    def sum(self):
        return self.first + self.second
    def sub(self):
        return self.first - self.second
    def mul(self):
        return self.first * self.second
    def div(self):
        return self.first / self.second

class UpgradFourCal(FourCal):
    def div(self):
        try :
            return self.first / self.second
        except:
            print('0으로 나눌 수 없습니다.\nsecond를 바꾸세요')

'''
a = FourCal(4,2)
print(a.div())

b = FourCal(4,0)
print(b.div())
'''

c = UpgradFourCal(4,2)
print(c.div())

d = UpgradFourCal(4,0)
print(d.div())
