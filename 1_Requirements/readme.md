# INTRODUCTION

*  Railway ticket booking system is implemented by C programming.
*  It is as same as one can see while we are going for online ticket booking. 
*  The following series of steps are being followed while booking a railway ticket in this software.
*  The first step is to provide the total number of passengers and submit all the necessary details of the passengers.
*  The next step is to enter the source and destination.
*  A list of available trains will appear. Among them, the user has to choose one.
*  The ticket value will be evaluated. The system will ask to enter the seat choice by showing the seat matrix. At last, a receipt will be generated on the screen.
## OBJECTIVE

### Approach:

* The first step is to implement a structure for taking the details of the passengers, like name, gender, and age.
* Five functions are defined void details(int), void add_node(char, char, int), int seat(int), int cal(int, int, int), void bill(int, int) to work smoothly.
* There are three elements in the structure like two strings one for taking passenger name and gender and one integer for taking passenger age. Also, a structure pointer will be used which helps to link the next node of another passenger. It is similar to the linked list.
* Character arrays are defined and some integer arrays are defined globally.
* Take the number of passengers as input and these details are sent to the details() function.
* Execute a for loop to take details of each passenger. The details inputted by the user will be sent to the add_node() function.
* In the add_node function, every detail will store in a node for each passenger. These nodes will link each other. This is based on the linked list concept.
* Take the input for source place, destination place and it will give some choice of trains available. Based on that user has to give a choice. Then call the cal() function.
* In cal() function, the user has to give a choice for sleeper or a.c. class. If the user chooses a.c. class another three options will open where the user has to give another choice based on that the system will add 18% GST on the amount and make total amount.
* Call the seat() function where a seat matrix will be given to the user and the user has to choose a seat same with the number of passengers.
* At last, call the bill() function where the total bill amount with all the necessary details will be displayed.



## 4W's and 1'H
### WHO:
* The adults can reserve the tickets; thus, we can save the time.

### WHAT:
* By reserving the tickets we can make sure of our plan. Instead of wasting our time to get ticket at the que reservation of tickets is being considered as affordable and safe.

### WHEN: 
* At anytime as we planned for travelling. 

### WHERE:
* In the case of getting ticket.

### HOW:
* Through online by using mobile phone ,laptop or computer.



## SWOT ANALYSIS

### STRENGTH
* Easy implementation
* Less time complexity
* Seat confirmation.

### WEAKNESS:
* Network issue

### OPPORTUNITIES:
* This model can used to create other reservations like bus etc..,

### THREAT:
* Due to network issue ,sometimes it is not possible place ticket.


## High Level Requirements

| Test ID |	Description |	Type Of Test |
| ------- | ------------- | ------------ |
| H_01 |	Check if the User selects an option from the available choices, and if want to add record of the Customer give the details like id,Name,bill,permanent address,present Address,phone number,e-mail | Requirement based 
| H_02 | Check if the User selects an option from the available choices, and if want to delete record of the Customer  give the details like id	|	Requirement based |
| H_03	| If record is only present in File, then delete from File	| Technical |
| H_04 | 	Check if the user want to see the Complete list of the Customer, then select the option as display |	Required based 

## Low Level Requirements

| Test ID |	Description |	Type Of Test |
| ------- |  -------------- | ------------ |
| L_01	| When choosing from the options, check if the input is valid or invalid | Scenario based |
| L_02	| Check that the details of the record	 |	Scenario based |
| L_03	| Check user's choice when selects dispaly list of the Employee | Scenario based |
| L_04	| If the Record is already exist |	Scenario based |


