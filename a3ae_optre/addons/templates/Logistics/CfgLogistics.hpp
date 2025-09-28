#define TRIPLES(var1,var2,var3) A3A_Logistics##_##var2##_##var3

class A3A_Logistics_Nodes
{
    class A3A_Logistics_Nodes_Base; //import base class
    #include "Nodes\OptreNodes.hpp" //hpp file for your mods vehicle nodes
};

class A3A_Logistics_Cargo
{
    class A3A_Logistics_Cargo_Base //import base class;
    #include "Cargo\OptreCargo.hpp" //hpp file for your mods cargo definitions
};

//re-define the triples macro (this is only for external mods)
#undef TRIPLES(var1,var2,var3)