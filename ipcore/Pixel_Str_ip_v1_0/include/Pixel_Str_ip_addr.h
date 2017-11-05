/*
 * File Name:         hdl_prj/ipcore/Pixel_Str_ip_v1_0/include/Pixel_Str_ip_addr.h
 * Description:       C Header File
 * Created:           2017-11-05 13:15:24
*/

#ifndef PIXEL_STR_IP_H_
#define PIXEL_STR_IP_H_

#define  IPCore_Reset_Pixel_Str_ip                          0x0  //write 0x1 to bit 0 to reset IP core
#define  IPCore_Enable_Pixel_Str_ip                         0x4  //enabled (by default) when bit 0 is 0x1
#define  AXI4_Stream_Video_Slave_ImageWidth_Pixel_Str_ip    0x8  //Active pixels per line in each video frame for "AXI4-Stream Video Slave" interface, the default value is 1920.
#define  AXI4_Stream_Video_Slave_ImageHeight_Pixel_Str_ip   0xC  //Active video lines in each video frame for "AXI4-Stream Video Slave" interface, the default value is 1080.
#define  AXI4_Stream_Video_Slave_HPorch_Pixel_Str_ip        0x10  //Horizontal porch length in each video frame for "AXI4-Stream Video Slave" interface, the default value is 280.
#define  AXI4_Stream_Video_Slave_VPorch_Pixel_Str_ip        0x14  //Vertical porch length in each video frame for "AXI4-Stream Video Slave" interface, the default value is 45.

#endif /* PIXEL_STR_IP_H_ */
