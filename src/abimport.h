/* Import (extern) header for application - AppBuilder 2.03  */

#include "abdefine.h"

extern ApWindowLink_t base;
extern ApWidget_t AbWidgets[ 13 ];


#ifdef __cplusplus
extern "C" {
#endif
int test123( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int RunReal( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
int updateUI( PtWidget_t *widget, ApInfo_t *data, PtCallbackInfo_t *cbinfo );
#ifdef __cplusplus
}
#endif
