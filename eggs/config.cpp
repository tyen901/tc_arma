#define _ARMA_

class CfgPatches
{
	class TC_EGGS
	{
		units[] = {};
		weapons[] = { Throw };
		requiredVersion = 0.1;
		requiredAddons[] = { "A3_Characters_F" };
	};
};

class CfgWeapons
{
	class Default;
	class GrenadeLauncher;

	class Throw : GrenadeLauncher 
	{
        muzzles[] =
        {
            "EggMuzzle"
        };
		class ThrowMuzzle: GrenadeLauncher{};
		
		class EggMuzzle: ThrowMuzzle
		{
			magazines[] = {
				"AnEgg"
			};
		};
    };
};

class CfgAmmo
{
    class Default;
	class Grenade: Default
	{
		deflecting = 7;
		deflectionSlowDown = 0.5;
    };
	class GrenadeHand: Grenade{};
	class GrenadeFreshEgg: GrenadeHand
	{
        /*
        - Impact grenade
        - Slightly larger blast radius than the Frag Grenade
        - Slightly heavier than the Frag Grenade
        */
		hit = 8;
		indirectHit = 8;
		indirectHitRange = 7;
		dangerRadiusHit = 65;
		suppressionRadiusHit = 27;
		typicalspeed = 20;
		model = "\tc\eggs\data\egg_throw.p3d";
		deflecting = 7;
		fuseDistance = 0;
        explosionTime = -1;
		timeToLive = 18;
	};
};

class CfgMagazines
{
	class Default;
	class CA_Magazine : Default {};
	class HandGrenade : CA_Magazine {};
	class AnEgg: HandGrenade
	{
		author = "Tyen";
		mass = 12;
		displayName = "Egg (Size 7)";
		picture = "\tc\eggs\logo.paa";
		model = "\tc\eggs\data\egg.p3d";
		ammo = GrenadeFreshEgg;
		displayNameShort = "Egg";
	};
};
