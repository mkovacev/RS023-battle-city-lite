#include "include/game.h"


Game::Game()
    : matrixOfLevel(26, QVector<int>(26))
{

}

void Game::initializeGame()
{
    _activeLevel = 1;
    loadLevel(1);

    _numOfLifes = 3; //TODO: make macro and consider other number

    //createNpcs(); TODO Ivana: implementiraj

    //
}

void Game::loadLevel(int levelNum)
{
    QString path = QStringLiteral("levels/%1.txt").arg(levelNum);
    std::ifstream in(path.toStdString(), std::ifstream::in);
    char c;
    for(int i=0;i<26;i++)
    {
        for(int j=0;j<26;j++)
        {
            in >> c;
            matrixOfLevel[i][j] = c - '0'; // Read data into matrix
        }
    }
    in.close(); // Close the file
}
