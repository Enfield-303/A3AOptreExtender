//OPTRE - config.cpp

#include "..\script_component.hpp"

class CfgPatches 
{
    class PATCHNAME(OPTRE)
    {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"A3_Data_F_AoW_Loadorder"};
        author = AUTHOR;
        authors[] = { AUTHORS };
        authorUrl = "";
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

class CfgMagazines
{
    class RPG32_F;
    class a3ae_optre_MAMRAM_HEDP : RPG32_F
    {
        descriptionshort = "High-Explosive-Dual-Purpose"
        displayname = "MRAM-HEDP";
        displaynameshort = "HEDP";
    }

    class RPG32_HE_F;
    class a3ae_optre_MAMRAM_Therm : RPG32_HE_F
    {
        descriptionshort = "High-Explosive-Thermobaric"
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
    };
};