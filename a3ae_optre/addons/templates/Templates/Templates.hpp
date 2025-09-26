class Templates {
    class Vanilla_Base; //import Vanilla_Base from A3A to use with defining a new vanilla template

    class Vanilla_AAF { // overwrite existing template
        basepath = QPATHTOFOLDER(Templates\Vanilla);
        file = "Vanilla_AI_AAF";
    };

    class Optre_UNSC : Vanilla_Base
    {
        basepath = QPATHTOFOLDER(Templates\OPTRE); //the path to the folder the template is located in, this translates to "\x\A3AE\addons\templates\Templates\Vanilla"
        side = "Occ"; //the side the faction defaults to, one of the following: Inv, Occ, Reb, Civ
        flagTexture = "A3\Data_F\Flags\Flag_CSAT_CO.paa"; //path to an icon to be displayed in the selector
        name = "A3 UNSC"; //the name shown in the selector
        file = "Optre_AI_UNSC"; //the template file name
        maps[] = {}; //if this template should be prioritized on any maps (case sensetive to worldName)
    };

    class Optre_VM : Vanilla_Base
    {
        basepath = QPATHTOFOLDER(Templates\OPTRE); //the path to the folder the template is located in, this translates to "\x\A3AE\addons\templates\Templates\Vanilla"
        side = "Reb"; //the side the faction defaults to, one of the following: Inv, Occ, Reb, Civ
        flagTexture = "A3\Data_F\Flags\Flag_CSAT_CO.paa"; //path to an icon to be displayed in the selector
        name = "A3 Venezian Movement"; //the name shown in the selector
        file = "Optre_Reb_VM"; //the template file name
        maps[] = {}; //if this template should be prioritized on any maps (case sensetive to worldName)
    };
};
