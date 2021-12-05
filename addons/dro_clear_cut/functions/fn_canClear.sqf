/*
 *Author: Drofseh
 *Check if the unit has the required tools
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Require ToolKit <BOOL>
 *
 * Return Value:
 * BOOL
 *
 * Example:
 * [player,true] call dro_clear_cut_fnc_canClear
 */

params ["_player","_ToolKit"];

private _items = [_player] call ace_common_fnc_uniqueItems;
private _return = false;

if (_ToolKit) then {
    if (
        "ToolKit" in _items
        || {"LIB_ToolKit" in _items}
    ) then {
        _return = true
    };
} else {
    if (
        "ACE_EntrenchingTool" in _items
        || {"ToolKit" in _items}
        || {"LIB_ToolKit" in _items}
    ) then {
        _return = true
    };
};

_return
