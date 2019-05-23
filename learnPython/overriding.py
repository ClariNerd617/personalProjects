class Employee:
    def setNumberOfWorkingHours(self):
        self.numberOfWorkingHours = 40

    def displayNumberOfWorkingHours(self):
        print(self.numberOfWorkingHours)

class Trainee(Employee):
    def setNumberOfWorkingHours(self):
        self.numberOfWorkingHours = 45

    def resetNumberOfWorkingHours(self):
        super().setNumberOfWorkingHours()

emp = Employee()
emp.setNumberOfWorkingHours()
print('Number of working hours of employee: ', end = ' ')
emp.displayNumberOfWorkingHours()
train = Trainee()
train.setNumberOfWorkingHours()
print('Number of working hours of trainee: ', end = ' ')
train.displayNumberOfWorkingHours()
train.resetNumberOfWorkingHours()
train.displayNumberOfWorkingHours()