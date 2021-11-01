class Bank():
    userCount = 0
    bankMoney = 0

    def __init__(self, name, s_money=0):
        self.name = name
        self.money = s_money
        Bank.userCount += 1
        Bank.bankMoney += s_money
        print('{}님 가입을 환영합니다. 잔액은 {}원입니다.'.format(self.name, self.money))

class Piggybank(Bank):
    def printPiggybank():
        print("-"*40)
        print("PiggyBank 유저수 :", Piggybank.userCount)
        print("PiggyBank 현금보유량 :", Piggybank.bankMoney)
        print("-"*40)

    def deposit(self, depMoney=0):
        self.money += depMoney
        print("{}님 {}원 입금되었습니다. 잔액은 {}원입니다.".format(self.name, depMoney, self.money))
        Piggybank.bankMoney += depMoney

    def withdraw(self, witMoney=0):
        if witMoney < self.money:
            self.money -= witMoney
            print("{}님 {}원 출금되었습니다. 잔액은 {}원 입니다.".format(self.name, witMoney, self.money))
            Piggybank.bankMoney -= witMoney
        else:
            print("{}님 잔액이 모자랍니다.".format(self.name))
        


a = Piggybank('a', 500)
b = Piggybank('b', 0)

a.deposit(1000)
b.deposit(600)
b.withdraw(700)
b.withdraw(500)

Piggybank.printPiggyBank()
