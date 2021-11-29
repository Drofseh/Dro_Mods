/*
 * Author: Falcon & TinfoilHate & Drofseh
 * Description: Allows a small patch of clutter to be cut/removed
 *
 * Arguments:
 * None
 *
 * Return value:
 * None
 *
 * Public: No
 */

if !([player,false] call dro_clear_cut_fnc_canClear) exitWith {
    [
        ["You don't have the tools to do this."],
        true
    ] call CBA_fnc_notify;
};

dro_clear_cut_cutGrassDone = false;

private _cutGrassEH = player addEventHandler ["AnimDone", {
    if (_this select 1 == "AinvPknlMstpSnonWnonDnon_medic0") then {
        dro_clear_cut_cutGrassDone = true;
    };
}];

[player,"AinvPknlMstpSnonWnonDnon_medic0"] remoteExec ["playMove"];

[
    {dro_clear_cut_cutGrassDone},
    {
        private _cutter = "ClutterCutter_small_EP1" createVehicle getPosATL player;

        _cutter setPosATL (player modelToWorld [0,1,0]);
        player removeEventHandler ["AnimDone",_this];

        dro_clear_cut_cutGrassDone = false;
    },
    _cutGrassEH
] call CBA_fnc_waitUntilAndExecute;
