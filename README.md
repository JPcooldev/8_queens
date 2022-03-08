# 8 queens chess problem

We specify the size of chessboard and then try to create set for possible sollutions.
That means deployment of queens at such way that no queen is located at square threatened by previous queens.

 Columns start from 0 on the left and then lines 0-7 
 
 <img src="https://github.com/JPcooldev/8_queens/blob/main/chessboard.png" width="400">
 
 ## Showcase of deployment
 
Queen (red square) threatens whole column and line which she lies on, and also diagonals (grey squares).

Here we placed queen to the left corner. 
Another queen can be placed to other column but cannot be placed on the same line or on the line bellow because this square is also threatened by the first queen.

 <img src="https://github.com/JPcooldev/8_queens/blob/main/chessboard2.png" width="400">
