# WOW Repairs by Auto Squad
Authors: [Alliyah Munir](https://github.com/AlliyahMunir) &  [Michael Vong](https://github.com/michaelvong)

## Project Description 
WOW Repairs is an auto shop that sells goods and services to the customers. Customers will be able to shop interactively with us.
## Our Purpose
We believe that creating a repair shop program with a variety of services that can be addressed through an input/output interface can make it easier for customers to receive assistance. Furthermore, incorporating multiple design patterns to create a shop seems like an intriguing and fun process for the AutoSquad! 

## Implemented Techonology
The languages/tools/technology we plan on using include the language of C++ programming as the chosen language and github as a tool, with the technology being the use of a terminal such as Putty. 

## Project Outcome
The input/output of our project will begin with a menu board of pricing, services, and goods, followed by IO Interface with customers allowing them to input which service(s) they would like to receive. Afterwards, the customer will be shown their order and total cost overview. Once the AutoSquad has completed all repairs, the customer will be able to pay, and receive a receipt. Customers may also steal or leave at checkout if they'd like. 

## Design Pattern Choices
The two design patterns that will be implemented in this project will be the Visitor Pattern and Composite Pattern.

Michael: My design pattern will be the Composite pattern and Visitor Pattern. Using the visitor pattern, I will use the visitor to replicate a customer. The visitor will hold information about the order and will be able to display a menu. The visitor will also be able to visit other classes to fill the information about the customer's order. On the other hand, I will utilize the Composite Pattern to create the order itself. Similar to our expression tree lab, rather than operands and operators, the pattern will hold items and orders.

## Class Diagram
![Screenshot (825)](https://cdn.discordapp.com/attachments/655307425888469002/785774483097124894/composite_pattern.JPG)

![Screenshot (826)](https://cdn.discordapp.com/attachments/655307425888469002/785774493770448916/visitor_pattern.JPG)

[View Diagram and Description Here](https://docs.google.com/document/d/1r5McTF5HdG24z4X2r0Srnoq6CkGPn9DPynZUNP4gzy8/edit)

 > ## Phase III
 > You will need to schedule a check-in with the TA (during lab hours or office hours). Your entire team must be present. 
 > * Before the meeting you should perform a sprint plan like you did in Phase II
 > * In the meeting with your TA you will discuss: 
 >   - How effective your last sprint was (each member should talk about what they did)
 >   - Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 >   - Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 >   - What tasks you are planning for this next sprint.

 > ## Final deliverable
 > All group members will give a demo to the TA during lab time. The TA will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Kanban board. 
 ## Screenshots
       First Run
![Screenshot (827)](https://cdn.discordapp.com/attachments/655307425888469002/785786718048878632/project_output_1.JPG)
![Screenshot (828)](https://cdn.discordapp.com/attachments/655307425888469002/785786728014413834/project_output_2.JPG)
       Second Run
![Screenshot (829)](https://cdn.discordapp.com/attachments/655307425888469002/785786740202930216/project_output_3.JPG)
       Third Run
![Screenshot (830)](https://cdn.discordapp.com/attachments/655307425888469002/785786751582601287/project_output_4.JPG)
![Screenshot (831)](https://cdn.discordapp.com/attachments/655307425888469002/785786762818486312/project_output_5.JPG)
       Fourth Run
![Screenshot (832)](https://cdn.discordapp.com/attachments/655307425888469002/785786773003173918/project_output_6.JPG)
 ## Installation/Usage
       To run the program, I needed to include multiple c++ libraries. These libraries include "cstdlib", "iomanip", namespace std, "iostream" and all the header files along   with the source files include in the repository. While running the program, the program will output instructions for the user to follow making it fairly simple to follow along. All user input for the program will include the numbers 1-9 and nothing else.
 ## Testing
        A lot of the testing was trial and error through a main source file. Making many minor changes at a time, running the program and seeing if the results match the expected results. I also created a testing file where all the unit tests were place in the file and tested.
 ## Resources
        Many of the resources I used were previous labs and slides provided from the professor.

 
