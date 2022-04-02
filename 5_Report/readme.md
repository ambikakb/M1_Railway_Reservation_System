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

# ARCHITECTURE

## IMPLEMENTATION

![rrs3](https://user-images.githubusercontent.com/101825270/159976097-d382900b-efef-4042-9faa-cb07f54551ac.jpeg)

## HIGH LEVEL USER CASE DIAGRAM

![rrs2](https://user-images.githubusercontent.com/101825270/159976079-c2f267ae-632d-47ac-b2fd-68468d748540.jpg)

## LOW LEVEL USER CASE DIAGRAM
![rrs1](https://user-images.githubusercontent.com/101825270/159976047-8efa207e-f3f2-4681-aa53-19aa124c6a23.jpeg)

##  Here are the below steps to run the code

 * For Running and Building the code
   * Type make run in terminal
 * For Running the Building tests
   * Type make run_test in terminal
 * For static analysis
   * Type make static_analysis in terminal
 * For dynamic analysis
   * Type make dynamic_analysis in terminal
 * For code coverage
   * Type make coverage in terminal
 * For cleaning
   * Type make clean in terminal
  
  
## Usage of Pointers

## Pointers:
* The Pointer in C, is a variable that stores address of another variable.
*  A pointer can also be used to refer to another pointer function.
*   A pointer can be incremented/decremented, i.e., to point to the next/ previous memory location. The purpose of pointer is to save memory space and achieve faster execution time.
Like variables, pointers in C programming have to be declared before they can be used in your program. Pointers can be named anything you want as long as they obey C’s naming rules. A pointer declaration has the following form.

 syntax:
data_type * pointer_variable_name;

* Types of Pointers in C:
1.Null Pointer
2.Void Pointer
3.Wild pointer
4.Dangling pointer

## Usage of Preprocessor :

* The C preprocessor is a macro processor that is used automatically by the C compiler to transform your program before actual compilation. It is called a macro processor because it allows you to define macros, which are brief abbreviations for longer constructs.

*The C preprocessor provides four separate facilities that you can use as you see fit:

* Inclusion of header files. These are files of declarations that can be substituted into your program.

## Function Pointer
* In the C function pointer is used to resolve the run time-binding. 
* A function pointer is a pointer that stores the address of the function and invokes the function whenever required.
*  In C, we can use function pointers to avoid code redundancy.

## Struct

* A structure is a key word that create user defined data type in C. A structure creates a data type that can be used to group items of possibly different types into a single type.

* ‘struct’ keyword is used to create a structure. 

* A structure variable can either be declared with structure declaration or as a separate declaration like basic types.
* Structure members cannot be initialized with declaration. 

## Typedef

* typedef, which we can use to give a type a new name. Following is an example to define a term BYTE for one-byte numbers.After this type definition, the identifier BYTE can be used as an abbreviation for the type unsigned char
* Syntax: typedef data_type new_name

# TEST PLAN:

## High Level Test Plan

| Test ID |	Description |	Expected Input |	Expected Output |	Actual Output |	Type Of Test |
| ------- | ----------- | -------------- | ---------------- | ------------- | ------------ |
| H_01 |	Check if the User selects an option from the available choices, and if want to add record of the Customer give the details like id,Name,bill,permanent address,present Address,phone number,e-mail	| User's choice an integer and character |	SUCCESS |	SUCCESS	 | Requirement based |
| H_02 | Check if the User selects an option from the available choices, and if want to delete record of the Customer  give the details like id	| User's choice, an integer |	SUCCESS |	SUCCESS |	Requirement based |
| H_03	| If record is only present in File, then delete from File	| user choice as an integer |	PASS |	SUCCESS	| Technical |
| H_04 | 	Check if the user want to see the Complete list of the Customer, then select the option as display	| Display in a file	| SUCCESS	| SUCCESS |	Required based |
| H_05 |	Check if the user want to display basic information then give Customer id if present in the list will give details else it will display the message as "ERROR RECORD NOT FOUND"	| Users choice as an integer	| SUCCESS |	SUCCESS |	Required based |
| H_06	| Check if the system asks the user for repeating the process and exits the system when choosed	| User's choice |	SUCCESS |	SUCCESS	| Scenario based |

## Low Level Test Plan

| Test ID |	Description |	Expected Input |	Expected Output |	Actual Output |	Type Of Test |
| ------- | ----------- | -------------- | ---------------- | ------------- | ------------ |
| L_01	| When choosing from the options, check if the input is valid or invalid |	User's Choice	| Invalid Message/ Invoke the process	| SUCCESS	 | Scenario based |
| L_02	| Check that the details of the record	| user choice |	SUCCESS |	SUCCESS |	Scenario based |
| L_03	| Check user's choice when selects dispaly list of the Employee	| SUCCESS |	SUCCESS |	SUCCESS	| Scenario based |
| L_04	| If the Record is already exist	| user gives  integer as emp id	|Already Exists	| Already Exists |	Scenario based |

## Usage of Unit Testing-Frameworks

* Unity Test Framework (UTF) enables Unity users to test their code in both Edit Mode and Play Mode, and also on target platforms such as Standalone, Android, iOS, etc.
* UTF uses a Unity integration of NUnit library, which is an open-source unit testing library for .Net languages.
* It is possible to extend the Unity Test Framework (UTF) in many ways, for custom workflows for your projects and for other packages to build on top of UTF.

## Best Practices

*  Checked all the possibilities of output
*  Mentioned all the inputs for better understanding
* Presented in tabular form for easy understanding
* Both High level and low level Test plans are shown
* 

