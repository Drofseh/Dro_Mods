/*
 * Author: Falcon/TinfoilHate/Drofseh
 * Description: Allows you to use someone else's map when near them
 *
 * Arguments:
 * 0: target <Object>
 * 1: viewer <Object>
 *
 * Return value:
 * None
 *
 * Public: No
 */

params ["_target", "_player"];

player linkItem "ItemMap";
openMap true;

[
    {
        !visibleMap || {(_this select 0) distance (_this select 1) > 3}
    },
    {
        openMap false;
        player unlinkItem "ItemMap";
    },
    [_target,_player]
] call CBA_fnc_waitUntilAndExecute;
