#include "service.h"

const std::wstring SERVICE_NAME = L"MyUsbMonitorService";

int main(int argc, char* argv[]) {
    WinService service(SERVICE_NAME);
    if (!service.Run()) {
        return 1;
    }
    return 0;
}