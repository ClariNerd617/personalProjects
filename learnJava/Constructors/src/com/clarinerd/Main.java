package com.clarinerd;

public class Main {

    public static void main(String[] args) {
        /*Account bobsAccount = new Account(); // 12345, 0.00, Bob Brown, myemail@bob.com
        // (603) 566-8408

        System.out.println(bobsAccount.getNumber());
        System.out.println(bobsAccount.getBalance());*/

        /*bobsAccount.setNumber("12345");
        bobsAccount.setBalance(0.00);
        bobsAccount.setCustomerName("Bob Brown");
        bobsAccount.setCustomerEmailAddress("myemail@bob.com");
        bobsAccount.setCustomerPhoneNumber("(603) 566-8408");*/ // use a constructor instead

      /*  bobsAccount.withdrawal(100.0);

        bobsAccount.deposit(50.0);
        bobsAccount.withdrawal(100.0);
        bobsAccount.deposit(51.0);
        bobsAccount.withdrawal(100.0);

        Account timsAccount = new Account("Tim", "tim@email.com", "12345");
        System.out.printf(timsAccount.getNumber() + " name " + timsAccount.getCustomerName());*/

        VipPerson person1 = new VipPerson();
        System.out.println(person1.getName());

        VipPerson person2 = new VipPerson("Bob", 25000.00);
        System.out.println(person2.getName());

        VipPerson person3 = new VipPerson("Tim", 100.00, "tim@email.com");
        System.out.println(person3.getName());
        System.out.println(person3.getEmailAddress());
    }
}
