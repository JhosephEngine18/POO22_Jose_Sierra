/*
Universidad Amerike
Author: José Sierra
Pratice#:22
Date: 08/04/25
Description: This code uses one class to show and edit a players statistics
*/

#include <iostream>
using namespace std;

class Player
{
  string name;
  int LifePoints, Money, Speed;
  
  public:

  void SetName(string PlayerName)
  {
    name = PlayerName;
  }
  string GetName()
  {
    return name;
  }

  void SetLife(int Life)
  {
    LifePoints = Life;
  }

  int GetLife()
  {
    return LifePoints;
  }

  void SetMoney(int GameMoney)
  {
    Money = GameMoney;
  }

  int GetMoney()
  {
    return Money;
  }

  void SetSpeed(int Velocity)
  {
    Speed = Velocity;
  }

  int GetSpeed()
  {
    return Speed;
  }

};

int main()
{
    int NewMoney, NewSpeed, NewLife;
    bool Answer;
    NewMoney = 50;
    NewSpeed = 20;
    NewLife = 100;
    
    Player Player1;
    Player1.SetName("Carlos");
    Player1.SetMoney(NewMoney);
    Player1.SetSpeed(NewSpeed);
    Player1.SetLife(NewLife);
    cout << "The Players Name is " << Player1.GetName() << "\n";
    cout << "The Players Life is " << Player1.GetLife() << "\n";
    cout << "The Players Speed is " << Player1.GetSpeed() << "\n";
    cout << "The Players Money is " << Player1.GetMoney() << "\n";

    cout << "Would you like to edit these values?" << "\n";
    cout << "Yes = 1 | No = 0" << "\n";
    cin >> Answer;

    if (Answer)
    {
        cout << "Set LifePoints" << "\n";
        cin >> NewLife;
        cout << "Set Money" << "\n";
        cin >> NewMoney;
        cout << "Set Speed" << "\n";
        cin >> NewSpeed;

      Player1.SetName("Carlos");
      Player1.SetMoney(NewMoney);
      Player1.SetSpeed(NewSpeed);
      Player1.SetLife(NewLife);
      cout << "The Players Name is " << Player1.GetName() << "\n";
      cout << "The Players Life is " << Player1.GetLife() << "\n";
      cout << "The Players Speed is " << Player1.GetSpeed() << "\n";
      cout << "The Players Money is " << Player1.GetMoney() << "\n";
    }
    


    return 0;
}