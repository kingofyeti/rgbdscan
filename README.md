# rgbdscan
This code is to scan scene and obtain RGB-D data with OpenNI-supported depth cameras (Kinect, Asus XTion, etc). Specifically, this code can

1) scan environment with one or multiple depth cameras and store the RGB-D data in png images per frame or a single compressed klg file. The RGB-D data format is in [TUM format RGB-D data] (http://vision.in.tum.de/data/datasets/rgbd-dataset/file_formats).

2) decompress the klg file and output the png images.

##Dependencies:
- OpenCV 2.4.x
- OpenNI2

##Usage:

```bash
rgbdscan -option [rgbdfilename]
```

where