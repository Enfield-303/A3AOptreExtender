#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"A3A_core"};
        author = AUTHOR;
        authors[] = { AUTHORS };
        authorUrl = "";
        VERSION_CONFIG;
    };
};

class CfgMagazines
{
    class RPG32_F;
    class a3ae_optre_MAMRAM_HEDP : RPG32_F
    {
        descriptionshort = "High-Explosive-Dual-Purpose";
        displayname = "MRAM-HEDP";
        displaynameshort = "HEDP";
    }

    class RPG32_HE_F;
    class a3ae_optre_MAMRAM_Therm : RPG32_HE_F
    {
        descriptionshort = "High-Explosive-Thermobaric";
        displayname = "MRAM-HETB";
        displaynameshort = "Thermobaric";
    }
};

class CfgVehicles
{
    class O_MBT_02_railgun_F;
    class a3ae_optre_Futura : O_MBT_02_railgun_F
    {
        textureList[] = {"Grey",1};
	    hiddenSelectionsTextures[] ={"a3\Armor_F_Decade\MBT_02\Data\MBT_02_body_expo_CO.paa","a3\Armor_F_Decade\MBT_02\Data\MBT_02_turret_expo_CO.paa","a3\Armor_F_Decade\MBT_02\Data\MBT_02_expo_CO.paa","A3\Armor_F\Data\camonet_CSAT_HEX_Green_CO.paa"};
    }
};

class CfgWeapons 
{
    class launch_RPG32_green_F;
    class a3ae_optre_MAMRAM : launch_RPG32_green_F
    {
        descriptionshort = "Misraiah Armory Multi Role Assault Munition";
        displayname = "MAMRAM";
        magazines[] = {"a3ae_optre_MAMRAM_HEDP","a3ae_optre_MAMRAM_Therm"};
    }

    class SMG_03C_hex;
    class a3ae_optre_SG1 : SMG_03C_hex
    {
        descriptionshort = "SharpGrater - 1";
        displayname = "SG-1";
        magazines[] = {"50Rnd_570x28_SMG_03"};
    }

    class arifle_SDAR_F;
    class a3ae_optre_protoDMR : arifle_SDAR_F
    {
        descriptionshort = "DMR";
        displayname = "M390";
        magazines[] = {"20Rnd_556x45_UW_mag"};
    }
};

class A3A {
    class Loadouts
    {
        class CASPlane
        {
            class baseCAS;
            class B_Plane_Fighter_01_F : baseCAS {
                loadout[] = {"PylonRack_Missile_AGM_02_x1","PylonRack_Missile_AGM_02_x1","PylonRack_Bomb_SDB_x4","PylonRack_Bomb_SDB_x4","PylonMissile_Missile_BIM9X_x1","PylonMissile_Missile_BIM9X_x1","","","PylonRack_Bomb_SDB_x4","PylonRack_Bomb_SDB_x4","PylonMissile_Bomb_GBU12_x1","PylonMissile_Bomb_GBU12_x1"};
                mainGun[] = {"weapon_Fighter_Gun20mm_AA"};
                rocketLauncher[] = {"OPTRE_missiles_Anvil1"};
                missileLauncher[] = {"OPTRE_missiles_Scorpion"};
            };
            class OPTRE_UNSC_hornet_ins : baseCAS {
                loadout[] = {"OPTRE_16Rnd_Anvil1_missiles","OPTRE_8Rnd_C2GMLS_missiles"};
                mainGun[] = {"OPTRE_GUA23A"};
                rocketLauncher[] = {"OPTRE_missiles_Anvil1"};
                missileLauncher[] = {"OPTRE_missiles_C2GMLS"};
            };            
        };
        class CAPPlane
        {
            class baseCAP;
            class B_Plane_Fighter_01_Stealth_F : baseCAP {
                loadout[] = {"PylonMissile_Missile_BIM9X_x1","PylonMissile_Missile_BIM9X_x1","PylonMissile_Missile_AMRAAM_D_INT_x1","PylonMissile_Missile_AMRAAM_D_INT_x1","PylonMissile_Missile_AMRAAM_D_INT_x1","PylonMissile_Missile_AMRAAM_D_INT_x1","PylonMissile_Missile_AMRAAM_D_INT_x1","PylonMissile_Missile_AMRAAM_D_INT_x1"};
            };
            class OPTRE_UNSC_hornet_ins : baseCAP {
                loadout[] = {"OPTRE_8Rnd_C2GMLS_missiles","OPTRE_8Rnd_C2GMLS_missiles"};
            };
            class OPTRE_UNSC_hornet_CAP : OPTRE_UNSC_hornet_ins {
            };            
        };
    };
};

#include "CfgMarkers.hpp"