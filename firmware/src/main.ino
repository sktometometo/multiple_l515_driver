int liderports[] = {32,33};
int numport = sizeof(liderports)/sizeof(int);
int frame_per_activation = 3;
int duration_active = 60 + 33 * frame_per_activation;

void setup()
{
    for ( int i=0; i<numport; i++ ) {
        pinMode( liderports[i], OUTPUT );
    }
}

void enableLider( int port ) {
    digitalWrite( port, HIGH );
}

void disableLider( int port ) {
    digitalWrite( port, LOW );
}

void loop()
{
    int index = 0;
    while ( true ) {
        //
        enableLider( index );
        delay(duration_active);
        disableLider( index );

        //
        index += 1;
        if ( index >= numport ) {
            index = 0;
        }
    }
}
