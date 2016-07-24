#include "openni2interface.h"

void printUsage(){
	cout <<"Usage: matterportscan [-option] [filename]" << endl;
	cout <<"-option:" << endl
		<<"   -c: use depth devices to scan and compress RGBD data into a klg file" << endl
		<<"   -d: decompress the klg file into png images and save them into local \"save\" folder" << endl;
	cout <<"filename: klg filename to be compressed or decompressed. Default filename is \"saved.klg\"" << endl;
}

int main(int argc, char** argv)
{
	if (argc == 1 || argc == 2)
	{
		if (argc == 1 || (argc == 2 && string(argv[1]) == "-c"))
		{
			OpenNI2Interface openni2interface;
			openni2interface.initKinectDevice();
			string filename("saved.klg");
			openni2interface.setFilename(filename);
			openni2interface.run();
			return 0;
		}
		if (argc == 2 && string(argv[1]) == "-d")
		{
			OpenNI2Interface openni2interface;
			openni2interface.decompressLog("saved.klg");
			return 0;
		}
	}
	if (argc == 3)
	{
		if (string(argv[1]) == "-c")
		{
			OpenNI2Interface openni2interface;
			openni2interface.initKinectDevice();
			string filename(argv[2]);
			openni2interface.setFilename(string(argv[2]));
			openni2interface.run();
			return 0;
		}
		else if (string(argv[1]) == "-d")
		{
			OpenNI2Interface openni2interface;
			openni2interface.decompressLog(argv[2]);
			return 0;
		}		
	}
	printUsage();

	return 0;
}