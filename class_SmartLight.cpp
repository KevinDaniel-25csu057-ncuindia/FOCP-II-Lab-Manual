#include<iostream>
#include<iomanip>
using namespace std;
class SmartLight
{
    string brand;
    int brightness;
    bool isOn;

    public:
    SmartLight();
    SmartLight(string b,int bright,bool status);
    void turnOn();
    void turnOff();
    void increaseBrightness();
    void decreaseBrightness();
    void displayStatus();
};
SmartLight::SmartLight() //default
{
    brand="";
    brightness=50;
    isOn=false;
}
SmartLight::SmartLight(string b,int bright,bool status)
{
    brand=b;
    brightness=bright;
    isOn=status;
}
void SmartLight::turnOn()
{
    isOn=true;
}
void SmartLight::turnOff()
{
    isOn=false;
}
void SmartLight::increaseBrightness()
{
    if(brightness<100)
    {
        brightness+=10;
        if(brightness>100)
        {
            brightness=100;
        }
    }
}
void SmartLight::decreaseBrightness()
{
    if(brightness>0)
    {
        brightness-=10;
        if(brightness<0)
        {
            brightness=0;
        }
    }
}
void SmartLight::displayStatus()
{
    cout<<"\nBrand : "<<brand;
    cout<<"\nBrightness : "<<brightness;
    if(isOn==true)
    {
        cout<<"\nLight is switched ON";
    }
    else
    cout<<"\nLight is switched OFF";
}
int main()
{
    SmartLight s1,s2("PHILIPS",97,true),s3("LG",4,true);
    s1.displayStatus();
    s2.displayStatus();
    s2.increaseBrightness();
    s2.displayStatus();
    s2.turnOff();
    s2.displayStatus();
    s3.displayStatus();
    s3.decreaseBrightness();
    s3.displayStatus();
}
