from abc import ABCMeta, abstractmethod
from random import randint


class Account(metaclass=ABCMeta):
    @abstractmethod
    def createAccount():
        return 0

    @abstractmethod
    def authenticate():
        return 0

    @abstractmethod
    def widthdraw():
        return 0

    @abstractmethod
    def deposit():
        return 0

    @abstractmethod
    def displayBalance():
        return 0


class SavingsAccount(Account):
    def __init__(self):
        # [key][0] => name ; [key][1] => balance
        self.savingsAccounts = {}

    def createAccount(self, name, initialDeposit):
        self.accountNumber = randint(10000, 99999)
        self.savingsAccounts[self.accountNumber] = [name, initialDeposit]
        print(
            f'Account creation has been successful. Your account number is: {self.accountNumber}')

    def authenticate(self, name, accountNumber):
        if accountNumber in self.savingsAccounts.keys():
            if self.savingsAccounts[accountNumber][0] == name:
                print('Authentication Successful')
                self.accountNumber = accountNumber
                return True
            else:
                print('Authentication Failed')
                return False
        else:
            print('Authentication Failure')
            return False

    def withdraw(self, withdrawalAmount):
        if withdrawalAmount > self.savingsAccounts[self.accountNumber][1]:
            print('Insufficient Balance')
        else:
            self.savingsAccounts[self.accountNumber][1] -= withdrawalAmount
            print('Withdrawal was successful.')
            self.displayBalance()

    def deposit(self, depositAmount):
        self.savingsAccounts[self.accountNumber][1] += depositAmount
        print('Deposit was successful.')
        self.displayBalance()

    def displayBalance(self):
        print(
            f'Available balance: {self.savingsAccounts[self.accountNumber][1]}')


savingsAccount = SavingsAccount()
while True:
    print('Enter 2 to access an existing account')
    print('Enter 1 to create new account')
    print('Enter 3 to exit')
    userChoice = int(input())
    if userChoice is 1:
        print('Enter your name: ')
        name = input()
        print('enter the initial deposit: ')
        deposit = int(input())
        savingsAccount.createAccount(name, deposit)
    elif userChoice is 2:
        print('enter your name: ')
        name = input()
        print('enter your account number: ')
        accountNumber = int(input())
        authenticationStatus = savingsAccount.authenticate(name, accountNumber)
        if authenticationStatus is True:
            while True:
                print('Enter 1 to withdraw')
                print('Enter 2 to deposit')
                print('Enter 3 to display available balance')
                print('Enter 4 to go back to the previous menu')
                userChoice = int(input())
                if userChoice is 1:
                    print('Enter a withdrawal amount')
                    withdrawalAmount = int(input())
                    savingsAccount.widthdraw(withdrawalAmount)
                elif userChoice is 2:
                    print('Enter an amount to be desposited')
                    depositAmount = int(input())
                    savingsAccount.deposit(depositAmount)
                elif userChoice is 3:
                    savingsAccount.displayBalance()
                elif userChoice is 4:
                    break
    elif userChoice is 3:
        quit()
