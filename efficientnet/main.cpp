#include "efficientnet.h"

int main(int argc, char **argv)
{
    if (argc < 3)
    {
        std::cout << "Please design config file and image folder!" << std::endl;
        return -1;
    }
    std::string config_file = argv[1];
    std::string folder_name = argv[2];
    EfficientNet EfficientNet(config_file);
    EfficientNet.LoadEngine();
    EfficientNet.InferenceFolder(folder_name);
    return 0;
}