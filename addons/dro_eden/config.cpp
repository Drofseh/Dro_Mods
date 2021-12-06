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
            x = "((getResolution select 2) * 0.5 * pixelW) - (360 * 0.5) * (pixelW * (pixelGridNoUIScale / 2) * 0.5)";
            y = "0.5 - (safezoneH min (360 * (pixelH * (pixelGridNoUIScale / 2) * 0.5))) * 0.5 + 10 * (pixelH * (pixelGridNoUIScale / 2) * 0.5)";
            w = "360 * (pixelW * (pixelGridNoUIScale / 2) * 0.5)";
            h = "(safezoneH min (360 * (pixelH * (pixelGridNoUIScale / 2) * 0.5))) - (10 + 5) * (pixelH * (pixelGridNoUIScale / 2) * 0.5)";
        };
        class BackgroundButtons : ctrlStaticFooter {
            x = "((getResolution select 2) * 0.5 * pixelW) - (360 * 0.5) * (pixelW * (pixelGridNoUIScale / 2) * 0.5)";
            y = "0.5 + (safezoneH min (360 * (pixelH * (pixelGridNoUIScale / 2) * 0.5))) * 0.5 - 2 * (5 + 1) * (pixelH * (pixelGridNoUIScale / 2) * 0.5)";
            w = "360 * (pixelW * (pixelGridNoUIScale / 2) * 0.5)";
            h = "(5 + 2) * (pixelH * (pixelGridNoUIScale / 2) * 0.5)";
        };
        delete BackgroundWorld;
        /*
        class BackgroundWorld : ctrlStaticOverlay {
            x = "((getResolution select 2) * 0.5 * pixelW) + (360 * 0.5 - 1) * (pixelW * (pixelGridNoUIScale / 2) * 0.5) - ((120 - 32) * (pixelW * (pixelGridNoUIScale / 2) * 0.5))";
            y = "0.5 - (safezoneH min (360 * (pixelH * (pixelGridNoUIScale / 2) * 0.5))) * ((120 - 32) * (pixelH * (pixelGridNoUIScale / 2) * 0.5)) * (pixelH * (pixelGridNoUIScale / 2) * 0.5)";
            w = "(140 - 2) * (pixelW * (pixelGridNoUIScale / 2) * 0.5) - ((120 - 32) * (pixelW * (pixelGridNoUIScale / 2) * 0.5))";
            h = "(120 - 2) * (pixelH * (pixelGridNoUIScale / 2) * 0.5) - ((120 - 32) * (pixelH * (pixelGridNoUIScale / 2) * 0.5))";
        };
        */
    };
    class controls {
        class Title : ctrlStaticTitle {
            x = "((getResolution select 2) * 0.5 * pixelW) - (360 * 0.5) * (pixelW * (pixelGridNoUIScale / 2) * 0.5)";
            y = "0.5 - (safezoneH min (360 * (pixelH * (pixelGridNoUIScale / 2) * 0.5))) * 0.5 + 5 * (pixelH * (pixelGridNoUIScale / 2) * 0.5)";
            w = "360 * (pixelW * (pixelGridNoUIScale / 2) * 0.5)";
            h = "5 * (pixelH * (pixelGridNoUIScale / 2) * 0.5)";
        };
        class IslandsBox : ctrlListbox {
            x = "((getResolution select 2) * 0.5 * pixelW) - (360 * 0.5 - 1) * (pixelW * (pixelGridNoUIScale / 2) * 0.5)";
            y = "0.5 - (safezoneH min (360 * (pixelH * (pixelGridNoUIScale / 2) * 0.5))) * 0.5 + 11 * (pixelH * (pixelGridNoUIScale / 2) * 0.5)";
            w = "(360 * 3/4 - 33) * (pixelW * (pixelGridNoUIScale / 2) * 0.5)";
            h = "(safezoneH min (360 * (pixelH * (pixelGridNoUIScale / 2) * 0.5))) - (24) * (pixelH * (pixelGridNoUIScale / 2) * 0.5)";
        };
        class NameBackground : ctrlStatic {
            x = "((getResolution select 2) * 0.5 * pixelW) + (360 * 0.5 - 1) * (pixelW * (pixelGridNoUIScale / 2) * 0.5) - (120 * (pixelW * (pixelGridNoUIScale / 2) * 0.5))";
            y = "0.5 - (safezoneH min (360 * (pixelH * (pixelGridNoUIScale / 2) * 0.5))) * 0.5 + 11 * (pixelH * (pixelGridNoUIScale / 2) * 0.5)";
            w = "(120 * (pixelW * (pixelGridNoUIScale / 2) * 0.5))";
            h = "2 * 5 * (pixelH * (pixelGridNoUIScale / 2) * 0.5)";
        };
        class Name : ctrlStatic {
            x = "((getResolution select 2) * 0.5 * pixelW) + (360 * 0.5 - 1) * (pixelW * (pixelGridNoUIScale / 2) * 0.5) - (120 * (pixelW * (pixelGridNoUIScale / 2) * 0.5))";
            y = "0.5 - (safezoneH min (360 * (pixelH * (pixelGridNoUIScale / 2) * 0.5))) * 0.5 + 11 * (pixelH * (pixelGridNoUIScale / 2) * 0.5)";
            w = "(120 * (pixelW * (pixelGridNoUIScale / 2) * 0.5))";
            h = "5 * (pixelH * (pixelGridNoUIScale / 2) * 0.5)";
        };
        class Author : ctrlStatic {
            x = "((getResolution select 2) * 0.5 * pixelW) + (360 * 0.5 - 1) * (pixelW * (pixelGridNoUIScale / 2) * 0.5) - (120 * (pixelW * (pixelGridNoUIScale / 2) * 0.5))";
            y = "0.5 - (safezoneH min (360 * (pixelH * (pixelGridNoUIScale / 2) * 0.5))) * 0.5 + 16 * (pixelH * (pixelGridNoUIScale / 2) * 0.5)";
            w = "(120 * (pixelW * (pixelGridNoUIScale / 2) * 0.5))";
            h = "5 * (pixelH * (pixelGridNoUIScale / 2) * 0.5)";
        };
        class IslandPanorama : ctrlStaticPicture {
            x = "((getResolution select 2) * 0.5 * pixelW) + (360 * 0.5 - 1) * (pixelW * (pixelGridNoUIScale / 2) * 0.5) - (120 * (pixelW * (pixelGridNoUIScale / 2) * 0.5))";
            y = "0.5 - (safezoneH min (360 * (pixelH * (pixelGridNoUIScale / 2) * 0.5))) * 0.5 + 21 * (pixelH * (pixelGridNoUIScale / 2) * 0.5)";
            w = "(120 * (pixelW * (pixelGridNoUIScale / 2) * 0.5))";
            h = "(120 * (pixelH * (pixelGridNoUIScale / 2) * 0.5))";
        };

        delete World;
        delete WorldLat;
        delete WorldLng;
        /*
        class World : ctrlStaticPicture {
            x = "((getResolution select 2) * 0.5 * pixelW) + (360 * 0.5 - 1) * (pixelW * (pixelGridNoUIScale / 2) * 0.5) - ((120 - 32) * (pixelW * (pixelGridNoUIScale / 2) * 0.5))";
            y = "0.5 - (safezoneH min (360 * (pixelH * (pixelGridNoUIScale / 2) * 0.5))) * ((120 - 32) * (pixelH * (pixelGridNoUIScale / 2) * 0.5)) * (pixelH * (pixelGridNoUIScale / 2) * 0.5)";
            w = "(140 - 2) * (pixelW * (pixelGridNoUIScale / 2) * 0.5) - ((120 - 32) * (pixelW * (pixelGridNoUIScale / 2) * 0.5))";
            h = "(120 - 2) * (pixelH * (pixelGridNoUIScale / 2) * 0.5) - ((120 - 32) * (pixelH * (pixelGridNoUIScale / 2) * 0.5))";
        };
        class WorldLng : ctrlStatic {
            x = "((getResolution select 2) * 0.5 * pixelW) + (360 * 0.5 - 1) * (pixelW * (pixelGridNoUIScale / 2) * 0.5) - ((120 - 32) * (pixelW * (pixelGridNoUIScale / 2) * 0.5))";
            y = "0.5 - (safezoneH min (360 * (pixelH * (pixelGridNoUIScale / 2) * 0.5))) * ((120 - 32) * (pixelH * (pixelGridNoUIScale / 2) * 0.5)) * (pixelH * (pixelGridNoUIScale / 2) * 0.5)";
            w = "(140 - 2) * (pixelW * (pixelGridNoUIScale / 2) * 0.5) - ((120 - 32) * (pixelW * (pixelGridNoUIScale / 2) * 0.5))";
            h = "(120 - 2) * (pixelH * (pixelGridNoUIScale / 2) * 0.5) - ((120 - 32) * (pixelH * (pixelGridNoUIScale / 2) * 0.5))";
        };
        class WorldLat : WorldLng {
            x = "((getResolution select 2) * 0.5 * pixelW) + (360 * 0.5 - 1) * (pixelW * (pixelGridNoUIScale / 2) * 0.5) - ((120 - 32) * (pixelW * (pixelGridNoUIScale / 2) * 0.5))";
            y = "0.5 - (safezoneH min (360 * (pixelH * (pixelGridNoUIScale / 2) * 0.5))) * ((120 - 32) * (pixelH * (pixelGridNoUIScale / 2) * 0.5)) * (pixelH * (pixelGridNoUIScale / 2) * 0.5)";
            w = "(140 - 2) * (pixelW * (pixelGridNoUIScale / 2) * 0.5) - ((120 - 32) * (pixelW * (pixelGridNoUIScale / 2) * 0.5))";
            h = "(120 - 2) * (pixelH * (pixelGridNoUIScale / 2) * 0.5) - ((120 - 32) * (pixelH * (pixelGridNoUIScale / 2) * 0.5))";
        };
        */

        class ButtonContinue : ctrlButtonOK {
            x = "((getResolution select 2) * 0.5 * pixelW) + (360 * 0.5 - 50 - 2) * (pixelW * (pixelGridNoUIScale / 2) * 0.5)";
            y = "0.5 + (safezoneH min (360 * (pixelH * (pixelGridNoUIScale / 2) * 0.5))) * 0.5 - (2 * 5 + 1) * (pixelH * (pixelGridNoUIScale / 2) * 0.5)";
            w = "25 * (pixelW * (pixelGridNoUIScale / 2) * 0.5)";
            h = "5 * (pixelH * (pixelGridNoUIScale / 2) * 0.5)";
        };
        class ButtonPurchase : ctrlShortcutButtonSteam {
            x = "((getResolution select 2) * 0.5 * pixelW) + (360 * 0.5 - 60 - 2) * (pixelW * (pixelGridNoUIScale / 2) * 0.5)";
            y = "0.5 + (safezoneH min (360 * (pixelH * (pixelGridNoUIScale / 2) * 0.5))) * 0.5 - (2 * 5 + 1) * (pixelH * (pixelGridNoUIScale / 2) * 0.5)";
            w = "35 * (pixelW * (pixelGridNoUIScale / 2) * 0.5)";
            h = "5 * (pixelH * (pixelGridNoUIScale / 2) * 0.5)";
        };
        class ButtonCancel : ctrlButtonCancel {
            x = "((getResolution select 2) * 0.5 * pixelW) + (360 * 0.5 - 25 - 1) * (pixelW * (pixelGridNoUIScale / 2) * 0.5)";
            y = "0.5 + (safezoneH min (360 * (pixelH * (pixelGridNoUIScale / 2) * 0.5))) * 0.5 - (2 * 5 + 1) * (pixelH * (pixelGridNoUIScale / 2) * 0.5)";
            w = "25 * (pixelW * (pixelGridNoUIScale / 2) * 0.5)";
            h = "5 * (pixelH * (pixelGridNoUIScale / 2) * 0.5)";
        };
    };
};

class Display3DENSave {
    class ControlsBackground {
        class Background : ctrlStaticBackground {
            x = "((getResolution select 2) * 0.5 * pixelW) - (360 * 0.5) * (pixelW * (pixelGridNoUIScale / 2) * 0.5)";
            y = "0.5 - (safezoneH min (360 * (pixelH * (pixelGridNoUIScale / 2) * 0.5))) * 0.5 + 10 * (pixelH * (pixelGridNoUIScale / 2) * 0.5)";
            w = "360 * (pixelW * (pixelGridNoUIScale / 2) * 0.5)";
            h = "(safezoneH min (360 * (pixelH * (pixelGridNoUIScale / 2) * 0.5))) - (10 + 5) * (pixelH * (pixelGridNoUIScale / 2) * 0.5)";
        };
        class BackgroundFilter : ctrlStatic {
            x = "((getResolution select 2) * 0.5 * pixelW) - (360 * 1/4 - 1) * (pixelW * (pixelGridNoUIScale / 2) * 0.5)";
            y = "0.5 - (safezoneH min (360 * (pixelH * (pixelGridNoUIScale / 2) * 0.5))) * 0.5 + (12 + 5) * (pixelH * (pixelGridNoUIScale / 2) * 0.5)";
            w = "(360 * 3/4 - 2) * (pixelW * (pixelGridNoUIScale / 2) * 0.5)";
            h = "5 * (pixelH * (pixelGridNoUIScale / 2) * 0.5)";
        };
        class BackgroundFiles : ctrlStaticOverlay {
            x = "((getResolution select 2) * 0.5 * pixelW) - (360 * 1/4 - 1) * (pixelW * (pixelGridNoUIScale / 2) * 0.5)";
            y = "0.5 - (safezoneH min (360 * (pixelH * (pixelGridNoUIScale / 2) * 0.5))) * 0.5 + (12 + 5) * (pixelH * (pixelGridNoUIScale / 2) * 0.5)";
            w = "(360 * 3/4 - 2) * (pixelW * (pixelGridNoUIScale / 2) * 0.5)";
            h = "(safezoneH min (360 * (pixelH * (pixelGridNoUIScale / 2) * 0.5))) - (23 + 5 * 3 + 3) * (pixelH * (pixelGridNoUIScale / 2) * 0.5)";
        };
        class BackgroundButtons : ctrlStaticFooter {
            x = "((getResolution select 2) * 0.5 * pixelW) - (360 * 0.5) * (pixelW * (pixelGridNoUIScale / 2) * 0.5)";
            y = "0.5 + (safezoneH min (360 * (pixelH * (pixelGridNoUIScale / 2) * 0.5))) * 0.5 - 2 * (5 + 1) * (pixelH * (pixelGridNoUIScale / 2) * 0.5)";
            w = "360 * (pixelW * (pixelGridNoUIScale / 2) * 0.5)";
            h = "(5 + 2) * (pixelH * (pixelGridNoUIScale / 2) * 0.5)";
        };
    };
    class Controls {
        class Title : ctrlStaticTitle {
            x = "((getResolution select 2) * 0.5 * pixelW) - (360 * 0.5) * (pixelW * (pixelGridNoUIScale / 2) * 0.5)";
            y = "0.5 - (safezoneH min (360 * (pixelH * (pixelGridNoUIScale / 2) * 0.5))) * 0.5 + 5 * (pixelH * (pixelGridNoUIScale / 2) * 0.5)";
            w = "360 * (pixelW * (pixelGridNoUIScale / 2) * 0.5)";
            h = "5 * (pixelH * (pixelGridNoUIScale / 2) * 0.5)";
        };
        class Search : ctrlEdit {
            x = "((getResolution select 2) * 0.5 * pixelW) + (360 * 1/4 - 5 - 1) * (pixelW * (pixelGridNoUIScale / 2) * 0.5)";
            y = "0.5 - (safezoneH min (360 * (pixelH * (pixelGridNoUIScale / 2) * 0.5))) * 0.5 + (11) * (pixelH * (pixelGridNoUIScale / 2) * 0.5)";
            w = "(360 / 4) * (pixelW * (pixelGridNoUIScale / 2) * 0.5)";
            h = "5 * (pixelH * (pixelGridNoUIScale / 2) * 0.5)";
        };
        class SearchButton : ctrlButtonSearch {
            x = "((getResolution select 2) * 0.5 * pixelW) + (360 * 1/2 - 5 - 1) * (pixelW * (pixelGridNoUIScale / 2) * 0.5)";
            y = "0.5 - (safezoneH min (360 * (pixelH * (pixelGridNoUIScale / 2) * 0.5))) * 0.5 + (11) * (pixelH * (pixelGridNoUIScale / 2) * 0.5)";
            w = "5 * (pixelW * (pixelGridNoUIScale / 2) * 0.5)";
            h = "5 * (pixelH * (pixelGridNoUIScale / 2) * 0.5)";
        };
        class Folders : ctrlTree {
            x = "((getResolution select 2) * 0.5 * pixelW) - (360 * 0.5 - 1) * (pixelW * (pixelGridNoUIScale / 2) * 0.5)";
            y = "0.5 - (safezoneH min (360 * (pixelH * (pixelGridNoUIScale / 2) * 0.5))) * 0.5 + 11 * (pixelH * (pixelGridNoUIScale / 2) * 0.5)";
            w = "(360 * 1/4 - 1) * (pixelW * (pixelGridNoUIScale / 2) * 0.5)";
            h = "(safezoneH min (360 * (pixelH * (pixelGridNoUIScale / 2) * 0.5))) - (23 + 2 * 5 + 2) * (pixelH * (pixelGridNoUIScale / 2) * 0.5)";
        };
        class Files : ctrlListNBox {
            x = "((getResolution select 2) * 0.5 * pixelW) - (360 * 1/4 - 1) * (pixelW * (pixelGridNoUIScale / 2) * 0.5)";
            y = "0.5 - (safezoneH min (360 * (pixelH * (pixelGridNoUIScale / 2) * 0.5))) * 0.5 + (12 + 5 * 2) * (pixelH * (pixelGridNoUIScale / 2) * 0.5)";
            w = "(360 * 3/4 - 2) * (pixelW * (pixelGridNoUIScale / 2) * 0.5)";
            h = "(safezoneH min (360 * (pixelH * (pixelGridNoUIScale / 2) * 0.5))) - (23 + 4 * 5 + 3) * (pixelH * (pixelGridNoUIScale / 2) * 0.5)";
        };
        class Filter : ctrlListNBox {
            x = "((getResolution select 2) * 0.5 * pixelW) - (360 * 1/4 - 1) * (pixelW * (pixelGridNoUIScale / 2) * 0.5)";
            y = "0.5 - (safezoneH min (360 * (pixelH * (pixelGridNoUIScale / 2) * 0.5))) * 0.5 + (12 + 5) * (pixelH * (pixelGridNoUIScale / 2) * 0.5)";
            w = "(360 * 3/4 - 2) * (pixelW * (pixelGridNoUIScale / 2) * 0.5)";
            h = "5 * (pixelH * (pixelGridNoUIScale / 2) * 0.5)";
        };
        class NameText : ctrlStatic {
            x = "((getResolution select 2) * 0.5 * pixelW) - (360 * 0.5 - 1) * (pixelW * (pixelGridNoUIScale / 2) * 0.5)";
            y = "0.5 + (safezoneH min (360 * (pixelH * (pixelGridNoUIScale / 2) * 0.5))) * 0.5 - (4 * 5 + 3) * (pixelH * (pixelGridNoUIScale / 2) * 0.5)";
            w = "(360 * 1/4 - 1) * (pixelW * (pixelGridNoUIScale / 2) * 0.5)";
            h = "5 * (pixelH * (pixelGridNoUIScale / 2) * 0.5)";
        };
        class Name : ctrlEdit {
            x = "((getResolution select 2) * 0.5 * pixelW) - (360 * 1/4 - 1) * (pixelW * (pixelGridNoUIScale / 2) * 0.5)";
            y = "0.5 + (safezoneH min (360 * (pixelH * (pixelGridNoUIScale / 2) * 0.5))) * 0.5 - (4 * 5 + 3) * (pixelH * (pixelGridNoUIScale / 2) * 0.5)";
            w = "(360 * 3/4 - 2) * (pixelW * (pixelGridNoUIScale / 2) * 0.5)";
            h = "5 * (pixelH * (pixelGridNoUIScale / 2) * 0.5)";
        };
        class BinarizeText : ctrlStatic {
            x = "((getResolution select 2) * 0.5 * pixelW) - (360 * 0.5 - 1) * (pixelW * (pixelGridNoUIScale / 2) * 0.5)";
            y = "0.5 + (safezoneH min (360 * (pixelH * (pixelGridNoUIScale / 2) * 0.5))) * 0.5 - (3 * 5 + 3) * (pixelH * (pixelGridNoUIScale / 2) * 0.5)";
            w = "(360 * 1/4 - 1) * (pixelW * (pixelGridNoUIScale / 2) * 0.5)";
            h = "5 * (pixelH * (pixelGridNoUIScale / 2) * 0.5)";
        };
        class Binarize : ctrlCheckbox {
            x = "((getResolution select 2) * 0.5 * pixelW) - (360 * 1/4) * (pixelW * (pixelGridNoUIScale / 2) * 0.5)";
            y = "0.5 + (safezoneH min (360 * (pixelH * (pixelGridNoUIScale / 2) * 0.5))) * 0.5 - (3 * 5 + 3) * (pixelH * (pixelGridNoUIScale / 2) * 0.5)";
            w = "5 * (pixelW * (pixelGridNoUIScale / 2) * 0.5)";
            h = "5 * (pixelH * (pixelGridNoUIScale / 2) * 0.5)";
        };
        class ButtonOK : ctrlButtonOK {
            x = "((getResolution select 2) * 0.5 * pixelW) + (360 * 0.5 - 50 - 2) * (pixelW * (pixelGridNoUIScale / 2) * 0.5)";
            y = "0.5 + (safezoneH min (360 * (pixelH * (pixelGridNoUIScale / 2) * 0.5))) * 0.5 - (2 * 5 + 1) * (pixelH * (pixelGridNoUIScale / 2) * 0.5)";
            w = "25 * (pixelW * (pixelGridNoUIScale / 2) * 0.5)";
            h = "5 * (pixelH * (pixelGridNoUIScale / 2) * 0.5)";
        };
        class ButtonPurchase : ctrlShortcutButtonSteam {
            x = "((getResolution select 2) * 0.5 * pixelW) + (360 * 0.5 - 60 - 2) * (pixelW * (pixelGridNoUIScale / 2) * 0.5)";
            y = "0.5 + (safezoneH min (360 * (pixelH * (pixelGridNoUIScale / 2) * 0.5))) * 0.5 - (2 * 5 + 1) * (pixelH * (pixelGridNoUIScale / 2) * 0.5)";
            w = "35 * (pixelW * (pixelGridNoUIScale / 2) * 0.5)";
            h = "5 * (pixelH * (pixelGridNoUIScale / 2) * 0.5)";
        };
        class ButtonCancel : ctrlButtonCancel {
            x = "((getResolution select 2) * 0.5 * pixelW) + (360 * 0.5 - 25 - 1) * (pixelW * (pixelGridNoUIScale / 2) * 0.5)";
            y = "0.5 + (safezoneH min (360 * (pixelH * (pixelGridNoUIScale / 2) * 0.5))) * 0.5 - (2 * 5 + 1) * (pixelH * (pixelGridNoUIScale / 2) * 0.5)";
            w = "25 * (pixelW * (pixelGridNoUIScale / 2) * 0.5)";
            h = "5 * (pixelH * (pixelGridNoUIScale / 2) * 0.5)";
        };
    };
};
