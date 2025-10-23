#pragma once
#include <iostream>

class Weapon
{
	private:
		std::string w_Name;
		std::string w_Type;
		int w_MagSize;
		float w_ReloadTime;
		bool w_IsJammed;
		int w_Damage;
	
	public:
	
		Weapon(std::string name, std::string type, int magSize, float reloadTime, bool isJammed, int damage)
		{
			w_Name = name;
			w_Type = type;
			w_MagSize = magSize;
			w_ReloadTime = reloadTime;
			w_IsJammed = isJammed;
			w_Damage = damage;
		}
	
		int GetDamage() const;
		void ToString() const;
};
