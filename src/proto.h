
/* RunReal.c */
int RunReal ( PtWidget_t *widget , ApInfo_t *apinfo , PtCallbackInfo_t *cbinfo );

/* abmain.c */

/* dataProcess.c */
int mainThread ( void );
void initalizeProducers ( void );
void initalizeTimers ( void );
void fetchValues ( void );
void *producerFunction ( void *arguments );
void *consumerThread ( void *empty );
void *signalHandler ( void *empty );
const char *getfield ( char *line , int num );
int start_periodic_timer ( void *arguments , int flag );

/* test123.c */
int test123 ( PtWidget_t *widget , ApInfo_t *apinfo , PtCallbackInfo_t *cbinfo );

/* updateUI.c */
int updateUI ( PtWidget_t *widget , ApInfo_t *apinfo , PtCallbackInfo_t *cbinfo );
