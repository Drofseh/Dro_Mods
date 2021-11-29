class CfgPatches {
    class dro_map_share {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.32;
        requiredAddons[] = {"Extended_Eventhandlers","ACE_Common"};
        version = "0.1";
        author = "Falcon/TinfoilHate/Drofseh";
    };
};

class CfgFunctions {
    class dro_map_share {
        tag = "dro_map_share";
        file = "\dro_map_share\functions";
        class functions {
            class viewMap {};
        };
    };
};

class CfgVehicles {
    class Man;
    class CAManBase : Man {
        class ACE_Actions {
            class ACE_MainActions {
                class dro_map_share {
                    displayName = "View Map";
                    condition = "!('ItemMap' in assignedItems player) && {'ItemMap' in assignedItems _target} && {side player == side _target} && {_target distance player <= 3 || {vehicle player == vehicle _target}}";
                    statement = "call dro_map_share_fnc_viewMap";
                    showDisabled = 0;
                };
            };
        };
    };
};
