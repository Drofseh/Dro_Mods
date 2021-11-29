
class CfgPatches {
    class dro_clear_cut {
        author = "Ampersand & Drofseh & Falcon & TinfoilHate";
        requiredAddons[] = {"ace_trenches"};
        requiredVersion = 0.6;
        units[] = {};
        version = 1.0.0;
        versionAr[] = {1, 0, 0};
        versionStr = 1.0.0;
        weapons[] = {};
    };
};

class CfgFunctions {
    class dro_clear_cut {
        tag = "dro_clear_cut";
        file = "\dro_clear_cut\functions";
        class functions {
            class canClear{};
            class cutGrass{};
            class cutBushOrTree{};
        };
    };
};

class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ACE_Equipment {
                class dro_clear_cut {
                    displayName = "Clear Foliage";
                    showDisabled = 0;

                    class dro_clear_cut_cutGrass {
                        displayName = "Clear Grass";
                        statement = "[{[] call dro_clear_cut_fnc_cutGrass},[]] call CBA_fnc_execNextFrame"; //wait a frame to handle "Do When releasing action menu key" option
                        showDisabled = 0;
                    };
                    class dro_clear_cut_cutBushOrTree {
                        displayName = "Cut Down Bush or Tree";
                        statement = "[{[] call dro_clear_cut_fnc_cutBushOrTree},[]] call CBA_fnc_execNextFrame";
                        showDisabled = 0;
                    };
                };
            };
        };
    };
};
