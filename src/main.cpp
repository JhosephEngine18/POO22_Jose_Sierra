/*
Universidad Amerike
Author: José Sierra
Pratice#:22
Date: 08/04/25
Description: This code uses one class to show and edit a players statistics
*/

#include <iostream>
using namespace std;
int NewMoney, NewSpeed, NewLife;

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

  void IncreaseofStadistics(float Money, int Speed, int Life)
  {
    NewMoney = NewMoney + Money;
    NewSpeed = NewSpeed + Speed;
    NewLife = NewLife + Life;
  }
  

};

int main()
{
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

    Player1.IncreaseofStadistics(100, 40, 200);

    cout << "The New Players Life is " << Player1.GetLife() << "\n";
    cout << "The New Players Speed is " << Player1.GetSpeed() << "\n";
    cout << "The New Players Money is " << Player1.GetMoney() << "\n";

    return 0;
}