class Templates {
    
    class OPTRE_Base
    {   
        requiredAddons[] = {"OPTRE_Core"};
        logo = QPATHTOFOLDER(Templates\Templates\OPTRE\images\flag_mod_ca.paa);
        basepath = QPATHTOFOLDER(Templates\Templates\OPTRE);
        priority = 16;
    };

    class Optre_UNSC : OPTRE_Base
    {
        basepath = QPATHTOFOLDER(Templates\OPTRE); //the path to the folder the template is located in, this translates to "\x\A3AE\addons\templates\Templates\Vanilla"
        side = "Occ"; //the side the faction defaults to, one of the following: Inv, Occ, Reb, Civ
        flagTexture = "A3\Data_F\Flags\Flag_NATO_CO.paa"; //path to an icon to be displayed in the selector
        name = "A3 UNSC"; //the name shown in the selector
        file = "Optre_AI_UNSC"; //the template file name
        maps[] = {}; //if this template should be prioritized on any maps (case sensetive to worldName)
        description = "United Nations Space Command";
    };

    class Optre_VM : OPTRE_Base
    {
        basepath = QPATHTOFOLDER(Templates\OPTRE); //the path to the folder the template is located in, this translates to "\x\A3AE\addons\templates\Templates\Vanilla"
        side = "Reb"; //the side the faction defaults to, one of the following: Inv, Occ, Reb, Civ
        flagTexture = "A3\Data_F\Flags\Flag_CSAT_CO.paa"; //path to an icon to be displayed in the selector
        name = "A3 VM"; //the name shown in the selector
        file = "Optre_Reb_VM"; //the template file name
        maps[] = {}; //if this template should be prioritized on any maps (case sensetive to worldName)
        description = "Venezian Movement";
    };

    class Optre_INNIE: OPTRE_Base
    {
        basepath = QPATHTOFOLDER(Templates\OPTRE); //the path to the folder the template is located in, this translates to "\x\A3AE\addons\templates\Templates\Vanilla"
        side = "Inv"; //the side the faction defaults to, one of the following: Inv, Occ, Reb, Civ
        flagTexture = "A3\Data_F\Flags\Flag_CSAT_CO.paa"; //path to an icon to be displayed in the selector
        name = "A3 Insurrection"; //the name shown in the selector
        file = "Optre_AI_INNIE"; //the template file name
        maps[] = {}; //if this template should be prioritized on any maps (case sensetive to worldName)
        description = "Insurrectionist Forces";
    };

    class Optre_Civ: OPTRE_Base
    {
        basepath = QPATHTOFOLDER(Templates\OPTRE); //the path to the folder the template is located in, this translates to "\x\A3AE\addons\templates\Templates\Vanilla"
        side = "Civ"; //the side the faction defaults to, one of the following: Inv, Occ, Reb, Civ
        flagTexture = "A3\Data_F\Flags\Flag_CSAT_CO.paa"; //path to an icon to be displayed in the selector
        name = "A3 Colonists"; //the name shown in the selector
        file = "Optre_Civ_Colonial"; //the template file name
        maps[] = {}; //if this template should be prioritized on any maps (case sensetive to worldName)
        description = "Colonial Civilians";
    };

};
