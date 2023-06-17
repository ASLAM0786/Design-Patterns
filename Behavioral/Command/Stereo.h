#ifndef STEREO_H
#define STEREO_H

class Stereo
{

public:
    Stereo();
    ~Stereo();
    void on();
    void off();
    void setDVD();
    void setCD();
    void setVolume(int volume);
    void setRadio();
};

#endif
