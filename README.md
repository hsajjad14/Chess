# Chess
Chess game implemented in C++. First will make a simple text-based visual, then when the main systems work, will implement a proper gui interface.

##### Implementation details
[Chess game](https://en.wikipedia.org/wiki/Chess) consists of two players, a board, and 16 pieces for each player (32 pieces in total).

##### Steps
- make the main runnable class. To run the actual game
- make pieces class 

##### Pieces
Have a base Piece class, and all the pieces inherit from it.

##### Board
The board will be layed out like:
|       | **0** | **1** | **2** | **3** | **4** | **5** | **6** | **7** |
| ----- | ----- | ----- | ----- | ----- | ----- | ----- | ----- | ----- |
| **7** | 7,0   |       |       | 7,3   |       |       |       |       |
| **6** | 6,0   |       |       | 6,3   |       |       |       |       |
| **5** | 5,0   |       |       | 5,3   |       |       |       |       |
| **4** | 4,0   |       |       | 4,3   |       |       |       |       |
| **3** | 3,0   | 3,1   | 3,2   | 3,3   | 3,4   | 3,5   | 3,6   | 3,7   |
| **2** | 2,0   |       |       | 2,3   |       |       |       |       |
| **1** | 1,0   |       |       | 1,3   |       |       |       |       |
| **0** | 0,0   | 0,1   | 0,2   | 0,3   | 0,4   | 0,5   | 0,6   | 0,7   |

The board class will hold a hashmap of positions mapped to tiles. The tiles will hold the pieces.

