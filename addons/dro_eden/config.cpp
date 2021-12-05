class CfgPatches {
    class Dro_Eden {
        author = "Drofseh";
        name = "Dro's Eden Changes";
        url = "https://github.com/Drofseh/Dro-Mods";
        requiredAddons[] =  {"A3_3DEN"};
        requiredVersion = 0.1;
        units[] =  {};
        weapons[] = {};
    };
};

class ctrlButtonCancel;
class ctrlButtonOK;
class ctrlButtonSearch;
class ctrlCheckbox;
class ctrlControlsGroupNoScrollbars;
class ctrlEdit;
class ctrlListbox;
class ctrlListNBox;
class ctrlMenu;
class ctrlMenuStrip;
class ctrlShortcutButton;
class ctrlShortcutButtonSteam;
class ctrlStatic;
class ctrlStaticBackground;
class ctrlStaticBackgroundDisable;
class ctrlStaticBackgroundDisableTiles;
class ctrlStaticFooter;
class ctrlStaticOverlay;
class ctrlStaticPicture;
class ctrlStaticTitle;
class ctrlTree;
class DisplaySimulated;

class Display3DEN {
    class Controls {
        class ButtonPlay : ctrlShortcutButton {
            shortcuts[]= {"0x00050000 + 0",57};
        };
        class MenuStrip : ctrlMenuStrip {
            class Items {
                class MissionPreviewSP {
                    shortcuts[]={};
                };
            };
        };
        class PanelRight : ctrlControlsGroupNoScrollbars {
            class Controls {
                class PanelRightCreate : ctrlControlsGroupNoScrollbars {
                    class Controls {
                        class Create : ctrlControlsGroupNoScrollbars {
                            class Controls {
                                class CreateObjectWEST : ctrlTree {defaultItem[] = {};};
                                class CreateObjectEAST : CreateObjectWEST {defaultItem[] = {};};
                                class CreateObjectGUER : CreateObjectWEST {defaultItem[] = {};};
                                class CreateObjectCIV : CreateObjectWEST {defaultItem[] = {};};
                                class CreateObjectEMPTY : CreateObjectWEST {defaultItem[] = {};};
                                class CreateGroupWEST : CreateObjectEMPTY {defaultItem[] = {};};
                                class CreateGroupEAST : CreateObjectEMPTY {defaultItem[] = {};};
                                class CreateGroupGUER : CreateObjectEMPTY {defaultItem[] = {};};
                                class CreateObjectLogic : CreateObjectEMPTY {defaultItem[] = {};};
                                class CreateMarkerIcon : CreateObjectEMPTY {defaultItem[] = {};};
                            };
                        };
                    };
                };
            };
        };
    };
};

class Display3DENPlace : DisplaySimulated {
    class ControlsBackground {
        class PanelRightCreate : ctrlControlsGroupNoScrollbars {
            class Controls {
                class Create : ctrlControlsGroupNoScrollbars {
                    class Controls {
                        class CreateObjectWEST : ctrlTree {defaultItem[] = {};};
                        class CreateObjectEAST : CreateObjectWEST {defaultItem[] = {};};
                        class CreateObjectGUER : CreateObjectWEST {defaultItem[] = {};};
                        class CreateObjectCIV : CreateObjectWEST {defaultItem[] = {};};
                        class CreateObjectEMPTY : CreateObjectWEST {defaultItem[] = {};};
                        class CreateGroupWEST : CreateObjectEMPTY {defaultItem[] = {};};
                        class CreateGroupEAST : CreateObjectEMPTY {defaultItem[] = {};};
                        class CreateGroupGUER : CreateObjectEMPTY {defaultItem[] = {};};
                        class CreateTrigger : CreateObjectEMPTY {defaultItem[] = {};};
                        class CreateObjectLogic : CreateObjectEMPTY {defaultItem[] = {};};
                        class CreateObjectModule : CreateObjectEMPTY {defaultItem[] = {};};
                        class CreateMarkerIcon : CreateObjectEMPTY {defaultItem[] = {};};
                        class CreateMarkerArea : CreateObjectEMPTY {defaultItem[] = {};};
                    };
                };
            };
        };
    };
};

class Display3DENNew : DisplaySimulated {
    class controlsBackground {
        class Background : ctrlStaticBackground {
            x = "((getResolution select 2) * 0.5 * pixelW) - (360 * 0.5) * (pixelW * pixelGrid * 0.50)";
            y = "0.5 - (safezoneH min (360 * (pixelH * pixelGrid * 0.50))) * 0.5 + 10 * (pixelH * pixelGrid * 0.50)";
            w = "360 * (pixelW * pixelGrid * 0.50)";
            h = "(safezoneH min (360 * (pixelH * pixelGrid * 0.50))) - (10 + 5) * (pixelH * pixelGrid * 0.50)";
        };
        delete BackgroundWorld;
        class BackgroundButtons : ctrlStaticFooter {
            x = "((getResolution select 2) * 0.5 * pixelW) - (360 * 0.5) * (pixelW * pixelGrid * 0.50)";
            y = "0.5 + (safezoneH min (360 * (pixelH * pixelGrid * 0.50))) * 0.5 - 2 * (5 + 1) * (pixelH * pixelGrid * 0.50)";
            w = "360 * (pixelW * pixelGrid * 0.50)";
            h = "(5 + 2) * (pixelH * pixelGrid * 0.50)";
        };
    };
    class controls {
        class Title : ctrlStaticTitle {
            x = "((getResolution select 2) * 0.5 * pixelW) - (360 * 0.5) * (pixelW * pixelGrid * 0.50)";
            y = "0.5 - (safezoneH min (360 * (pixelH * pixelGrid * 0.50))) * 0.5 + 5 * (pixelH * pixelGrid * 0.50)";
            w = "360 * (pixelW * pixelGrid * 0.50)";
            h = "5 * (pixelH * pixelGrid * 0.50)";
        };
        class IslandsBox : ctrlListbox {
            x = "((getResolution select 2) * 0.5 * pixelW) - (360 * 0.5 - 1) * (pixelW * pixelGrid * 0.50)";
            y = "0.5 - (safezoneH min (360 * (pixelH * pixelGrid * 0.50))) * 0.5 + 11 * (pixelH * pixelGrid * 0.50)";
            w = "(360 * 3/4 - 2) * (pixelW * pixelGrid * 0.50)";
            h = "(safezoneH min (360 * (pixelH * pixelGrid * 0.50))) - (23 + 5 * 3 + 3) * (pixelH * pixelGrid * 0.50)";
        };
        delete World;
        delete WorldLat;
        delete WorldLng;
        class NameBackground : ctrlStatic {
            x = "((getResolution select 2) * 0.5 * pixelW) + (240 * 0.5) * (pixelW * pixelGrid * 0.50) - ((120 - 32) * (pixelW * pixelGrid * 0.50))";
            y = "0.5 - (120 * 0.5 - 10) * (pixelH * pixelGrid * 0.50)";
            w = "((120 - 32) * (pixelW * pixelGrid * 0.50))";
            h = "2 * 5 * (pixelH * pixelGrid * 0.50)";
        };
        class Name : ctrlStatic {
            x = "((getResolution select 2) * 0.5 * pixelW) + (240 * 0.5) * (pixelW * pixelGrid * 0.50) - ((120 - 32) * (pixelW * pixelGrid * 0.50))";
            y = "0.5 - (120 * 0.5 - 10) * (pixelH * pixelGrid * 0.50)";
            w = "((120 - 32) * (pixelW * pixelGrid * 0.50))";
            h = "5 * (pixelH * pixelGrid * 0.50)";
        };
        class Author : ctrlStatic {
            x = "((getResolution select 2) * 0.5 * pixelW) + (240 * 0.5) * (pixelW * pixelGrid * 0.50) - ((120 - 32) * (pixelW * pixelGrid * 0.50))";
            y = "0.5 - (120 * 0.5 - 10 - 5) * (pixelH * pixelGrid * 0.50)";
            w = "((120 - 32) * (pixelW * pixelGrid * 0.50))";
            h = "5 * (pixelH * pixelGrid * 0.50)";
        };
        class IslandPanorama : ctrlStaticPicture {
            x = "((getResolution select 2) * 0.5 * pixelW) + (240 * 0.5) * (pixelW * pixelGrid * 0.50) - ((120 - 32) * (pixelW * pixelGrid * 0.50))";
            y = "0.5 - (120 * 0.5 - 10 - 2 * 5) * (pixelH * pixelGrid * 0.50)";
            w = "((120 - 32) * (pixelW * pixelGrid * 0.50))";
            h = "((120 - 32) * (pixelH * pixelGrid * 0.50))";
        };
        class ButtonContinue : ctrlButtonOK {
            x = "((getResolution select 2) * 0.5 * pixelW) + (360 * 0.5 - 50 - 2) * (pixelW * pixelGrid * 0.50)";
            y = "0.5 + (safezoneH min (360 * (pixelH * pixelGrid * 0.50))) * 0.5 - (2 * 5 + 1) * (pixelH * pixelGrid * 0.50)";
            w = "25 * (pixelW * pixelGrid * 0.50)";
            h = "5 * (pixelH * pixelGrid * 0.50)";
        };
        class ButtonPurchase : ctrlShortcutButtonSteam {
            x = "((getResolution select 2) * 0.5 * pixelW) + (360 * 0.5 - 60 - 2) * (pixelW * pixelGrid * 0.50)";
            y = "0.5 + (safezoneH min (360 * (pixelH * pixelGrid * 0.50))) * 0.5 - (2 * 5 + 1) * (pixelH * pixelGrid * 0.50)";
            w = "35 * (pixelW * pixelGrid * 0.50)";
            h = "5 * (pixelH * pixelGrid * 0.50)";
        };
        class ButtonCancel : ctrlButtonCancel {
            x = "((getResolution select 2) * 0.5 * pixelW) + (360 * 0.5 - 25 - 1) * (pixelW * pixelGrid * 0.50)";
            y = "0.5 + (safezoneH min (360 * (pixelH * pixelGrid * 0.50))) * 0.5 - (2 * 5 + 1) * (pixelH * pixelGrid * 0.50)";
            w = "25 * (pixelW * pixelGrid * 0.50)";
            h = "5 * (pixelH * pixelGrid * 0.50)";
        };
    };
};

class Display3DENSave {
    class ControlsBackground {
        class Background : ctrlStaticBackground {
            x = "((getResolution select 2) * 0.5 * pixelW) - (360 * 0.5) * (pixelW * pixelGrid * 0.50)";
            y = "0.5 - (safezoneH min (360 * (pixelH * pixelGrid * 0.50))) * 0.5 + 10 * (pixelH * pixelGrid * 0.50)";
            w = "360 * (pixelW * pixelGrid * 0.50)";
            h = "(safezoneH min (360 * (pixelH * pixelGrid * 0.50))) - (10 + 5) * (pixelH * pixelGrid * 0.50)";
        };
        class BackgroundFilter : ctrlStatic {
            x = "((getResolution select 2) * 0.5 * pixelW) - (360 * 1/4 - 1) * (pixelW * pixelGrid * 0.50)";
            y = "0.5 - (safezoneH min (360 * (pixelH * pixelGrid * 0.50))) * 0.5 + (12 + 5) * (pixelH * pixelGrid * 0.50)";
            w = "(360 * 3/4 - 2) * (pixelW * pixelGrid * 0.50)";
            h = "5 * (pixelH * pixelGrid * 0.50)";
        };
        class BackgroundFiles : ctrlStaticOverlay {
            x = "((getResolution select 2) * 0.5 * pixelW) - (360 * 1/4 - 1) * (pixelW * pixelGrid * 0.50)";
            y = "0.5 - (safezoneH min (360 * (pixelH * pixelGrid * 0.50))) * 0.5 + (12 + 5) * (pixelH * pixelGrid * 0.50)";
            w = "(360 * 3/4 - 2) * (pixelW * pixelGrid * 0.50)";
            h = "(safezoneH min (360 * (pixelH * pixelGrid * 0.50))) - (23 + 5 * 3 + 3) * (pixelH * pixelGrid * 0.50)";
        };
        class BackgroundButtons : ctrlStaticFooter {
            x = "((getResolution select 2) * 0.5 * pixelW) - (360 * 0.5) * (pixelW * pixelGrid * 0.50)";
            y = "0.5 + (safezoneH min (360 * (pixelH * pixelGrid * 0.50))) * 0.5 - 2 * (5 + 1) * (pixelH * pixelGrid * 0.50)";
            w = "360 * (pixelW * pixelGrid * 0.50)";
            h = "(5 + 2) * (pixelH * pixelGrid * 0.50)";
        };
    };
    class Controls {
        class Title : ctrlStaticTitle {
            x = "((getResolution select 2) * 0.5 * pixelW) - (360 * 0.5) * (pixelW * pixelGrid * 0.50)";
            y = "0.5 - (safezoneH min (360 * (pixelH * pixelGrid * 0.50))) * 0.5 + 5 * (pixelH * pixelGrid * 0.50)";
            w = "360 * (pixelW * pixelGrid * 0.50)";
            h = "5 * (pixelH * pixelGrid * 0.50)";
        };
        class Search : ctrlEdit {
            x = "((getResolution select 2) * 0.5 * pixelW) + (360 * 1/4 - 5 - 1) * (pixelW * pixelGrid * 0.50)";
            y = "0.5 - (safezoneH min (360 * (pixelH * pixelGrid * 0.50))) * 0.5 + (11) * (pixelH * pixelGrid * 0.50)";
            w = "(360 / 4) * (pixelW * pixelGrid * 0.50)";
            h = "5 * (pixelH * pixelGrid * 0.50)";
        };
        class SearchButton : ctrlButtonSearch {
            x = "((getResolution select 2) * 0.5 * pixelW) + (360 * 1/2 - 5 - 1) * (pixelW * pixelGrid * 0.50)";
            y = "0.5 - (safezoneH min (360 * (pixelH * pixelGrid * 0.50))) * 0.5 + (11) * (pixelH * pixelGrid * 0.50)";
            w = "5 * (pixelW * pixelGrid * 0.50)";
            h = "5 * (pixelH * pixelGrid * 0.50)";
        };
        class Folders : ctrlTree {
            x = "((getResolution select 2) * 0.5 * pixelW) - (360 * 0.5 - 1) * (pixelW * pixelGrid * 0.50)";
            y = "0.5 - (safezoneH min (360 * (pixelH * pixelGrid * 0.50))) * 0.5 + 11 * (pixelH * pixelGrid * 0.50)";
            w = "(360 * 1/4 - 1) * (pixelW * pixelGrid * 0.50)";
            h = "(safezoneH min (360 * (pixelH * pixelGrid * 0.50))) - (23 + 2 * 5 + 2) * (pixelH * pixelGrid * 0.50)";
        };
        class Files : ctrlListNBox {
            x = "((getResolution select 2) * 0.5 * pixelW) - (360 * 1/4 - 1) * (pixelW * pixelGrid * 0.50)";
            y = "0.5 - (safezoneH min (360 * (pixelH * pixelGrid * 0.50))) * 0.5 + (12 + 5 * 2) * (pixelH * pixelGrid * 0.50)";
            w = "(360 * 3/4 - 2) * (pixelW * pixelGrid * 0.50)";
            h = "(safezoneH min (360 * (pixelH * pixelGrid * 0.50))) - (23 + 4 * 5 + 3) * (pixelH * pixelGrid * 0.50)";
        };
        class Filter : ctrlListNBox {
            x = "((getResolution select 2) * 0.5 * pixelW) - (360 * 1/4 - 1) * (pixelW * pixelGrid * 0.50)";
            y = "0.5 - (safezoneH min (360 * (pixelH * pixelGrid * 0.50))) * 0.5 + (12 + 5) * (pixelH * pixelGrid * 0.50)";
            w = "(360 * 3/4 - 2) * (pixelW * pixelGrid * 0.50)";
            h = "5 * (pixelH * pixelGrid * 0.50)";
        };
        class NameText : ctrlStatic {
            x = "((getResolution select 2) * 0.5 * pixelW) - (360 * 0.5 - 1) * (pixelW * pixelGrid * 0.50)";
            y = "0.5 + (safezoneH min (360 * (pixelH * pixelGrid * 0.50))) * 0.5 - (4 * 5 + 3) * (pixelH * pixelGrid * 0.50)";
            w = "(360 * 1/4 - 1) * (pixelW * pixelGrid * 0.50)";
            h = "5 * (pixelH * pixelGrid * 0.50)";
        };
        class Name : ctrlEdit {
            x = "((getResolution select 2) * 0.5 * pixelW) - (360 * 1/4 - 1) * (pixelW * pixelGrid * 0.50)";
            y = "0.5 + (safezoneH min (360 * (pixelH * pixelGrid * 0.50))) * 0.5 - (4 * 5 + 3) * (pixelH * pixelGrid * 0.50)";
            w = "(360 * 3/4 - 2) * (pixelW * pixelGrid * 0.50)";
            h = "5 * (pixelH * pixelGrid * 0.50)";
        };
        class BinarizeText : ctrlStatic {
            x = "((getResolution select 2) * 0.5 * pixelW) - (360 * 0.5 - 1) * (pixelW * pixelGrid * 0.50)";
            y = "0.5 + (safezoneH min (360 * (pixelH * pixelGrid * 0.50))) * 0.5 - (3 * 5 + 3) * (pixelH * pixelGrid * 0.50)";
            w = "(360 * 1/4 - 1) * (pixelW * pixelGrid * 0.50)";
            h = "5 * (pixelH * pixelGrid * 0.50)";
        };
        class Binarize : ctrlCheckbox {
            x = "((getResolution select 2) * 0.5 * pixelW) - (360 * 1/4) * (pixelW * pixelGrid * 0.50)";
            y = "0.5 + (safezoneH min (360 * (pixelH * pixelGrid * 0.50))) * 0.5 - (3 * 5 + 3) * (pixelH * pixelGrid * 0.50)";
            w = "5 * (pixelW * pixelGrid * 0.50)";
            h = "5 * (pixelH * pixelGrid * 0.50)";
        };
        class ButtonOK : ctrlButtonOK {
            x = "((getResolution select 2) * 0.5 * pixelW) + (360 * 0.5 - 50 - 2) * (pixelW * pixelGrid * 0.50)";
            y = "0.5 + (safezoneH min (360 * (pixelH * pixelGrid * 0.50))) * 0.5 - (2 * 5 + 1) * (pixelH * pixelGrid * 0.50)";
            w = "25 * (pixelW * pixelGrid * 0.50)";
            h = "5 * (pixelH * pixelGrid * 0.50)";
        };
        class ButtonPurchase : ctrlShortcutButtonSteam {
            x = "((getResolution select 2) * 0.5 * pixelW) + (360 * 0.5 - 60 - 2) * (pixelW * pixelGrid * 0.50)";
            y = "0.5 + (safezoneH min (360 * (pixelH * pixelGrid * 0.50))) * 0.5 - (2 * 5 + 1) * (pixelH * pixelGrid * 0.50)";
            w = "35 * (pixelW * pixelGrid * 0.50)";
            h = "5 * (pixelH * pixelGrid * 0.50)";
        };
        class ButtonCancel : ctrlButtonCancel {
            x = "((getResolution select 2) * 0.5 * pixelW) + (360 * 0.5 - 25 - 1) * (pixelW * pixelGrid * 0.50)";
            y = "0.5 + (safezoneH min (360 * (pixelH * pixelGrid * 0.50))) * 0.5 - (2 * 5 + 1) * (pixelH * pixelGrid * 0.50)";
            w = "25 * (pixelW * pixelGrid * 0.50)";
            h = "5 * (pixelH * pixelGrid * 0.50)";
        };
    };
};
