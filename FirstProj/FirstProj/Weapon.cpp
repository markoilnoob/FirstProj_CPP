#include "Weapon.h"
using namespace std;

int Weapon::GetDamage() const
{
	cout << "Weapon Damage: " << w_Damage << endl;
	return w_Damage;
}

void Weapon::ToString() const
{
	cout << "Info:" << endl;
	cout << "Weapon name: " << w_Name << endl;
	cout << "Weapon type: " << w_Type << endl;
	cout << "Weapon mag size: " << w_MagSize << endl;
	cout << "Weapon reload time: " << w_ReloadTime << endl;
	cout << "Weapon is jammed: " << w_IsJammed << endl;
	cout << "Weapon damage: " << w_Damage << endl;
}
