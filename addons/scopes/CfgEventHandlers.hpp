class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preInit));
    };
};

class Extended_PostInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_postInit));
    };
};

class Extended_Fired_EventHandlers {
    class CAManBase {
        class ADDON {
            fired = QUOTE(_this call FUNC(firedEH););
        };
    };
};