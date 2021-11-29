/*
 * Author: Ampersand & Drofseh
 * Destroy a bush
 *
 * Arguments:
 * -
 *
 * Return Value:
 * -
 *
 * Example:
 * [] call dro_clear_cut_fnc_cutBushOrTree
 */

private _position0 = AGLToASL positionCameraToWorld [0, 0, 0];
private _position1 = AGLToASL positionCameraToWorld [0, 0, 2];
private _intersections = lineIntersectsSurfaces [_position0, _position1, cameraOn, objNull, true, 1, "VIEW"];

if (_intersections isEqualTo []) exitWith {
    [
        ["There's nothing there to cut down."],
        true
        ] call CBA_fnc_notify;
};

private _intersection = _intersections # 0;

_intersection params ["_intersectPosASL", "_surfaceNormal", "_intersectObj", "_parentObject"];

if (_intersectObj isEqualTo objNull && {_parentObject isEqualTo objNull}) exitWith {
    [
        ["There's nothing there to cut down."],
        true
    ] call CBA_fnc_notify;
};

if !((nearestTerrainObjects [ _intersectObj , ["BUSH"], 0]) isEqualTo []) exitWith {
    if !([player,false] call dro_clear_cut_fnc_canClear) exitWith {
        [
            ["You don't have the tools to do this."],
            true
            ] call CBA_fnc_notify;
    };

    [player,"AinvPknlMstpSlayWrflDnon_medicOther"] remoteExec ["playMove"];

    [
        10,
        [_intersectObj],
        {
            (_this select 0 select 0) setDamage 1;
        },
        {
            [
                ["You stopped cutting."],
                true
            ] call CBA_fnc_notify;
        },
        "Cutting down bush."
    ] call ace_common_fnc_progressBar;

    _intersection
};

if !((nearestTerrainObjects [ _intersectObj , ["SMALL TREE"], 0]) isEqualTo [] ) exitWith {
    if !([player,true] call dro_clear_cut_fnc_canClear) exitWith {
        [
            ["You don't have the tools to do this."],
            true
        ] call CBA_fnc_notify;
    };

    [player,"AmovPercMstpSnonWnonDnon"] remoteExec ["playMove"];

    [
        15,
        [_intersectObj],
        {
            (_this select 0 select 0) setDamage 1;
        },
        {
            [
                ["You stopped cutting."],
                true
            ] call CBA_fnc_notify;
        },
        "Cutting down small tree."
    ] call ace_common_fnc_progressBar;

    _intersection
};

if !((nearestTerrainObjects [ _intersectObj , ["TREE"], 0]) isEqualTo [] ) exitWith {
    if !([player,true] call dro_clear_cut_fnc_canClear) exitWith {
        [
            ["You don't have the tools to do this."],
            true
        ] call CBA_fnc_notify;
    };

    [player,"AmovPercMstpSnonWnonDnon"] remoteExec ["playMove"];

    [
        30,
        [_intersectObj],
        {
            (_this select 0 select 0) setDamage 1;
        },
        {
            [
                ["You stopped cutting."],
                true
            ] call CBA_fnc_notify;
        },
        "Cutting down large tree."
    ] call ace_common_fnc_progressBar;

    _intersection
};

_intersection
