# rgbdscan
This code is to scan scene and obtain RGB-D data with multiple OpenNI-supported depth cameras (Kinect, Asus XTion, etc). Specifically, this code can

* scan environment with **one or mutiple** depth cameras and store the RGB-D data in a single compressed .klg log file (refer to [ElasticFusion] (https://github.com/mp3guy/ElasticFusion/blob/master/README.md) and the source code for more details about the format).

* decompress the .klg file into png images in [TUM format RGB-D data] (http://vision.in.tum.de/data/datasets/rgbd-dataset/file_formats).

This code is compiled and tested in Visual Studio 2010 on windows 8.1 OS.

##Dependencies:
- OpenCV 2.4.x
- OpenNI2

##Usage:
```bash
rgbdscan -option [rgbdfilename]
```
where
* -option: *-c* to use depth camera(s) to scan, *-d* to decompress the klg file
* rgbdfilename: filename of the .klg log file ( *saved.klg* by default)

##Note:
* The decompressed png files will be saved in the *saved* folder in the local directory.
