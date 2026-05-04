class Templates {
    
    class OPTRE_Base
    {   
        requiredAddons[] = {"OPTRE_Core"};
        logo = QPATHTOFOLDER(A3\Data_F\Flags\Flag_blue_CO.paa);
        basepath = QPATHTOFOLDER(Templates\Templates\OPTRE);
        priority = 16;
    };

    //UNSC TEMPLATES

    class Optre_UNSC_Temperate : OPTRE_Base
    {
        basepath = QPATHTOFOLDER(Templates\OPTRE); //the path to the folder the template is located in, this translates to "\x\A3AE\addons\templates\Templates\Vanilla"
        side = "Occ"; //the side the faction defaults to, one of the following: Inv, Occ, Reb, Civ
        logo = QPATHTOFOLDER(x\a3ae_optre\addons\Templates\Templates\OPTRE\images\flag_unsc_ca.paa);
        flagTexture = "x\a3ae_optre\addons\Templates\Templates\OPTRE\images\flag_unsc_ca.paa"; //path to an icon to be displayed in the selector
        name = "OPTRE UNSC"; //the name shown in the selector
        file = "Optre_AI_UNSC_Temperate"; //the template file name
        climate[] = {"temperate"};
        description = "United Nations Space Command";
    };

    class Optre_UNSC_Arid : Optre_UNSC_Temperate
    {
        name = "OPTRE Arid UNSC"; //the name shown in the selector
        file = "Optre_AI_UNSC_Arid"; //the template file name
        climate[] = {"arid"};
        description = "United Nations Space Command - Hot Climates";
    };

    //INSURECTIONIST TEMPLATES

    class Optre_INNIE_Temperate: OPTRE_Base
    {
        basepath = QPATHTOFOLDER(Templates\OPTRE); //the path to the folder the template is located in, this translates to "\x\A3AE\addons\templates\Templates\Vanilla"
        side = "Inv"; //the side the faction defaults to, one of the following: Inv, Occ, Reb, Civ
        logo = QPATHTOFOLDER(x\a3ae_optre\addons\Templates\Templates\OPTRE\images\flag_insurrection_ca.paa);
        flagTexture = "x\a3ae_optre\addons\Templates\Templates\OPTRE\images\flag_insurrection_ca.paa"; //path to an icon to be displayed in the selector
        name = "OPTRE Insurrection"; //the name shown in the selector
        file = "Optre_AI_INNIE_Temperate"; //the template file name
        climate[] = {"temperate"};
        
        description = "Insurrectionist Forces";
    };

    class Optre_INNIE_Arid: Optre_INNIE_Temperate
    {

        name = "OPTRE Arid Insurrection"; //the name shown in the selector
        file = "Optre_AI_INNIE_Arid"; //the template file name
        climate[] = {"arid"};
        description = "Insurrectionist Forces - Deathworlders"
    };

    //REBEL TEMPLATES

    class Optre_VM_Temperate : OPTRE_Base
    {
        basepath = QPATHTOFOLDER(Templates\OPTRE); //the path to the folder the template is located in, this translates to "\x\A3AE\addons\templates\Templates\Vanilla"
        side = "Reb"; //the side the faction defaults to, one of the following: Inv, Occ, Reb, Civ
        flagTexture = "A3\Data_F\Flags\Flag_red_CO.paa"; //path to an icon to be displayed in the selector
        logo = QPATHTOFOLDER(A3\Data_F\Flags\Flag_red_CO.paa);
        name = "OPTRE VM"; //the name shown in the selector
        file = "Optre_Reb_VM"; //the template file name
        maps[] = {}; //if this template should be prioritized on any maps (case sensetive to worldName)
        description = "Venezian Movement";
    };

    //CIVILIAN TEMPLATES

    class Optre_Civ: OPTRE_Base
    {
        basepath = QPATHTOFOLDER(Templates\OPTRE); //the path to the folder the template is located in, this translates to "\x\A3AE\addons\templates\Templates\Vanilla"
        side = "Civ"; //the side the faction defaults to, one of the following: Inv, Occ, Reb, Civ
        logo = QPATHTOFOLDER(A3\Data_F\Flags\Flag_blue_CO.paa);
        flagTexture = "A3\Data_F\Flags\Flag_blue_CO.paa"; //path to an icon to be displayed in the selector
        name = "OPTRE Colonists"; //the name shown in the selector
        file = "Optre_Civ_Colonial"; //the template file name
        maps[] = {}; //if this template should be prioritized on any maps (case sensetive to worldName)
        description = "Colonial Civilians";
    };

};
