<div align="center"> 

## TIC-TAC-TOE 

![-----------------------------------------------------](https://raw.githubusercontent.com/andreasbm/readme/master/assets/lines/rainbow.png)

<img alt="c++" height="100" width="100" src="/imagenes/tictactoe.gif"/>

</div>

#### Index
- [Code Tic Tac Toe](https://github.com/UP210374/UP210374_CPP/blob/main/Cuatri/U3/TIC%20TAC%20TOE.cpp)
- [Instructions for executin and use](https://github.com/UP210374/UP210374_CPP/tree/main/Cuatri/U3#instructions-for-execution-and-use)
- [Flowchart](https://github.com/UP210374/UP210374_CPP/tree/main/Cuatri/U3#flowchart)
- [Testing and explanation](https://github.com/UP210374/UP210374_CPP/tree/main/Cuatri/U3#testing-and-explanation)
- [Conclusion](https://github.com/UP210374/UP210374_CPP/tree/main/Cuatri/U3#conclusion)
  
### Instructions for execution and use

Depending on your operating system you have to follow the following steps to be able to use this code:

### Windox

1. Download or clone my repo with the following command in the terminal:
   
>       git clone https://github.com/UP210374/UP210374_CPP.git

2. Download and install the compiler in this link https://sourceforge.net/projects/mingw/files/OldFiles/
3. Open the terminal at the direction of the file with the command:

>       cd C:\Documents\...

4. To compile use command:

>       gcc  TIC TAC TOE.cpp -o TIC TAC TOE.exe

5. To run type this code:

>       TIC TAC TOE.exe

### Linux

1. Download or clone my repo with the following command in the terminal:
   
>       git clone https://github.com/UP210374/UP210374_CPP.git

1. Install GNU c/c++ compiler, open the terminal and type:

>       $ sudo apt-get update
>       $ sudo apt-get install build-essential manpages-dev

3. To compile this program, type:

>       gcc TIC TAC TOE.cpp -o TIC TAC TOE

4. To run this program, type:

>       ./TIC TAC TOE

[Return to index](#index)

### Flowchart

<div align="center"> 

<img alt="c++" height="500" width="800" src="/imagenes/Diagrama en blanco.png"/>

[Check them out!](https://lucid.app/lucidchart/e1b5ac26-4430-4f3d-a910-44f91089d47e/edit?beaconFlowId=1F5D55E5891A0B79&invitationId=inv_cabe0ea4-ec45-47cc-85eb-e41b8bd6ca48&page=0_0#) 

</div>

[Return to index](#index)

### Testing and explanation

### Considerations

1. Please read carefully all instructions :D
2. Type a y to enter the game or if you don't want to play type an x
3. Do not write letters, only numbers 1-9
4. In single player mode the player is "O" and the PC is "X"
5. In multiplayer mode player 1 is "O" and player two is "X"

<div align="center"> 

### Player vs Player 

</div>

I will run the player-to-player mode as it is quite simple because both users enter a sample value and a value to be displayed.

First the player is given the option to play or quit the game and then the menu for the mode he/she wants to play in is shown. 

<div align="center"> 

<img alt="c++" height="250" width="250" src="/imagenes/primera parte pvsp.png"/>

</div>

To start playing the game, the drawing of the cat is shown with the number of each square, the user is given the option to choose which game he/she wants to play, after the first player has chosen his/her game, the next player switches to the next one and chooses his/her game again. 

<div align="center"> 

<img alt="c++" height="250" width="250" src="/imagenes/parte dos pvsp.png"/>

</div>

In each move selected by the player before showing his game on the board, the selected game is cleaned and placed on the board to show the next player the next moves to choose and from there select his new game.

<div align="center"> 

<img alt="c++" height="250" width="250" src="/imagenes/parte 3 pvsp.png"/>

</div>

Continues to give both players the option to choose the play until a winner is found. 

<div align="center"> 

<img alt="c++" height="250" width="250" src="/imagenes/parte 5 pvsp.png"/>

</div>

Each time a player selects and places his move, it is evaluated whether there is a winner or not and if a winner is found, a message is printed to the player indicated that he is the winner, in this case it is player number 2 who won. 

<div align="center"> 

<img alt="c++" height="250" width="250" src="/imagenes/parte final pvsp.png"/>

</div>

If no winner is found, both players are drafted and the game is over. 

On the other hand, when playing in player vs. PC mode, the procedure is very similar, only that the PC, each time he has to select his game, must first evaluate where he wins and where the opposite player (the person) wins in order to obtain the best game and avoid the person to win easily, and so on, until he finds a winner or not. 


[Return to index](#index)

### Conclusion 

I was honestly a victim of this game, I faced too many obstacles from creating the cat drawing to the artificial intelligence that was applied to the player vs. machine game mode. But most of the challenges I faced were because I wanted it to look pretty to the eye of anyone, where I was developing more problems because once I had the drawing of the cat then was how to place the number of box is among more things. Once I faced this the A.I. was another big challenge but I started playing in the notebook and see what we do while we play which is to see how "I" win and how to make the opponent lose where we evaluate both to then make the decision, so that's how I started to make the part of A.I. I made a function to evaluate the best game of himself but also of the other person and the rest is history as my peace of mind :D
I consider that I missed to work on what happened if the user made a mistake and typed another option that was not allowed but for the same reason this game is for those who read instruction by instruction not for those of prope well no. (bad joke).
Regardless of the challenges and difficulties that I had to develop this code I liked the results obtained because they were considerably the expected fulfilling what was required, as well as I had fun to cry and then laugh at the mistakes for what I cried. 
I learned a lot in this unit about how functions work and how they help you not to repeat code and make your code more efficient. I also learned that a calm person is more likely to come up with a solution to a problem than to cry while doing the work. 

[Return to index](#index)
