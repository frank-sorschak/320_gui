/* Define header for application - AppBuilder 2.03  */

/* 'base' Window link */
extern const int ABN_base;
#define ABW_base                             AbGetABW( ABN_base )
extern const int ABN_TestButton;
#define ABW_TestButton                       AbGetABW( ABN_TestButton )
extern const int ABN_Bar1;
#define ABW_Bar1                             AbGetABW( ABN_Bar1 )
extern const int ABN_FuelLabel;
#define ABW_FuelLabel                        AbGetABW( ABN_FuelLabel )
extern const int ABN_SpeedMeter;
#define ABW_SpeedMeter                       AbGetABW( ABN_SpeedMeter )
extern const int ABN_GearMeter;
#define ABW_GearMeter                        AbGetABW( ABN_GearMeter )
extern const int ABN_CoolantLabel;
#define ABW_CoolantLabel                     AbGetABW( ABN_CoolantLabel )
extern const int ABN_TitleLabel;
#define ABW_TitleLabel                       AbGetABW( ABN_TitleLabel )
extern const int ABN_OilLabel;
#define ABW_OilLabel                         AbGetABW( ABN_OilLabel )
extern const int ABN_BreakIndicator;
#define ABW_BreakIndicator                   AbGetABW( ABN_BreakIndicator )
extern const int ABN_BreakLabel;
#define ABW_BreakLabel                       AbGetABW( ABN_BreakLabel )
extern const int ABN_UpdateTimer;
#define ABW_UpdateTimer                      AbGetABW( ABN_UpdateTimer )
extern const int ABN_RunButton;
#define ABW_RunButton                        AbGetABW( ABN_RunButton )

#define AbGetABW( n ) ( AbWidgets[ n ].wgt )

#define AB_OPTIONS "s:x:y:h:w:S:"
