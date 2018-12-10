#ifndef _TEECAM_H_
#define _TEECAM_H_


#include "camera/include/camera.h"


#define   CONFIG_D0     17
#define   CONFIG_D1     35
#define   CONFIG_D2     34
#define   CONFIG_D3     5
#define   CONFIG_D4     39
#define   CONFIG_D5     18
#define   CONFIG_D6     36
#define   CONFIG_D7     19
#define   CONFIG_XCLK   27
#define   CONFIG_PCLK   21
#define   CONFIG_VSYNC  22
#define   CONFIG_HREF   26
#define   CONFIG_SDA    25
#define   CONFIG_SCL    23 
#define   CONFIG_RESET  15



#define   CONFIG_XCLK_FREQ  10000000

class CAMERA
{
public:
  CAMERA()
  {
		framsize = CAMERA_FS_VGA ;
		set_mirror=0;
		set_vflip=0;
		set_whitebal=0;
  };
  esp_err_t init();
  void setFrameSize(unsigned char fs_siz);
  size_t getSize();
  esp_err_t capture(); 
  uint8_t* getfb();
 

private:
	unsigned char framsize;
	unsigned char set_mirror;
	unsigned char set_vflip;
	unsigned char set_whitebal;
};

























#endif