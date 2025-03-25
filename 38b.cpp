#include <iostream>
#include <string>
int main()
{
    bool board[8][8] = {};
    int rookCoord[2];
    int knightCoord[2];
    std::string rook, knight;
    std::cin >> rook;
    std::cin >> knight;
    rookCoord[1] = rook[1] - '1';
    knightCoord[1] = knight[1] - '1';
    rookCoord[0] = rook[0] - 'a';
    knightCoord[0] = knight[0] - 'a';
    //std::cout << rookCoord[0] << rookCoord[1] << " " << knightCoord[0] << knightCoord[1] << std::endl;
    //Eliminating Rook Possibilities
    for(int i = 0; i < 8; i++)
    {
        board[i][rookCoord[1]] = 1;
        board[rookCoord[0]][i] = 1;
    }
    if(rookCoord[0] >= 1 && rookCoord[1] >= 2)
    {
        board[rookCoord[0]-1][rookCoord[1]-2] = 1;
    }
    if(rookCoord[0] >= 2 && rookCoord[1] >= 1)
    {
        board[rookCoord[0]-2][rookCoord[1]-1] = 1;
    }
    if(rookCoord[0] >= 1 && rookCoord[1] <= 5)
    {
        board[rookCoord[0]-1][rookCoord[1]+2] = 1;
    }
    if(rookCoord[0] >= 2 && rookCoord[1] <= 6)
    {
        board[rookCoord[0]-2][rookCoord[1]+1] = 1;
    }
    if(rookCoord[0] <= 6 && rookCoord[1] >= 2)
    {
        board[rookCoord[0]+1][rookCoord[1]-2] = 1;
    }
    if(rookCoord[0] <= 5 && rookCoord[1] >= 1)
    {
        board[rookCoord[0]+2][rookCoord[1]-1] = 1;
    }
    if(rookCoord[0] <= 6 && rookCoord[1] <= 5)
    {
        board[rookCoord[0]+1][rookCoord[1]+2] = 1;
    }
    if(rookCoord[0] <= 5 && rookCoord[1] <= 6)
    {
        board[rookCoord[0]+2][rookCoord[1]+1] = 1;
    }

    //Eliminating Knight Possibilities
    board[knightCoord[0]][knightCoord[1]] = 1;
    if(knightCoord[0] >= 1 && knightCoord[1] >= 2)
    {
        board[knightCoord[0]-1][knightCoord[1]-2] = 1;
    }
    if(knightCoord[0] >= 2 && knightCoord[1] >= 1)
    {
        board[knightCoord[0]-2][knightCoord[1]-1] = 1;
    }
    if(knightCoord[0] >= 1 && knightCoord[1] <= 5)
    {
        board[knightCoord[0]-1][knightCoord[1]+2] = 1;
    }
    if(knightCoord[0] >= 2 && knightCoord[1] <= 6)
    {
        board[knightCoord[0]-2][knightCoord[1]+1] = 1;
    }
    if(knightCoord[0] <= 6 && knightCoord[1] >= 2)
    {
        board[knightCoord[0]+1][knightCoord[1]-2] = 1;
    }
    if(knightCoord[0] <= 5 && knightCoord[1] >= 1)
    {
        board[knightCoord[0]+2][knightCoord[1]-1] = 1;
    }
    if(knightCoord[0] <= 6 && knightCoord[1] <= 5)
    {
        board[knightCoord[0]+1][knightCoord[1]+2] = 1;
    }
    if(knightCoord[0] <= 5 && knightCoord[1] <= 6)
    {
        board[knightCoord[0]+2][knightCoord[1]+1] = 1;
    }

    //Print board
    /*
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            std::cout << board[i][j];
        }
        std::cout << std::endl;
    }
    */
    int totalOptions = 0;
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            if (!board[i][j])
            {
                totalOptions++;
            }
        }
    }
    std::cout << totalOptions;
    return 0;
}