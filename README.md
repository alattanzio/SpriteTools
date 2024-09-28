# SpriteTools - Unreal Engine 5.4

Simple Plugin for Unreal 5.4 created to correct the Pivot Offset problem in Unreal Paper 2D sprites.

## Setup & Usage

Add to the Plugins folder of your Unreal project.
I haven't tested on previous versions of Unreal, but it might just work!

## The Problem
It is obvious when we have to flip sprites. Rotation / Scale are relative to the Pivot:

![image](https://github.com/user-attachments/assets/8d184237-f665-4f28-a9c4-ff5fa47a68d6)

## Solution:

Use the Property Matrix to change the Pivot for all the sprites. However cannot be done, since the CUSTOM pivot is relative to the Atlas texture.
It means that we will have to set the pivot manually for each sprite.

## Our Solution:

### Enable the Plugin (if not enabled automatically)
![image](https://github.com/user-attachments/assets/d6a1d94d-9d8e-40bf-a8f7-6352689f3b8f)

### Select the Paper2D Sprites:
![image](https://github.com/user-attachments/assets/39645957-4468-4d91-a387-e185b56c9922)

### Run the Scripted editor function to adjust the pivot:
![image](https://github.com/user-attachments/assets/0474e6ac-90e5-4a38-b528-ac120dce8c48)


## Result
The pivot is now set at the Origin!

![image](https://github.com/user-attachments/assets/ca63309d-0e47-4116-8e2f-87416a2b75de)


## Follow and get Updates

Follow me for more updates related to this plugin:
https://x.com/alattanzio

## Licensing

SpriteTools is available under The MIT License. 
This means SpriteTools is free for commercial and non-commercial use. 
Attribution is not required, but appreciated. 
