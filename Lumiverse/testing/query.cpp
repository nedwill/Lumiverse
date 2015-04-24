#include <string>
#include "LumiverseCore.h"

using namespace std;
using namespace Lumiverse;

int main(int argc, char**argv) {
  // Loads our demo rig file.
  Rig rig(argv[1]);

  /*
  // Select a single ID
  DeviceSet singleID = rig.select("fresnel_E1_2");
  cout << singleID.info() << "\n";

  // Select multiple IDs
  DeviceSet multipleIDs = rig.select("fresnel_E1_2, s4_E_7");
  cout << multipleIDs.info() << "\n";

  // Select a channel range
  // Select a single channel with #[number], for example rig.select("#10")
  DeviceSet channels = rig.select("#1-10");
  cout << channels.info() << "\n";

  // Select using metadata
  DeviceSet area1 = rig.select("$Area=1");
  cout << area1.info() << "\n";

  // Select using metadata starts with
  DeviceSet startswith = rig.select("$filename^=S4 Fresnel");
  cout << startswith.info() << "\n";

  // Select all lights in area 2 with gel L201
  DeviceSet areaFilter = rig.select("$Area=2[$gel=L201]");
  cout << areaFilter.info() << "\n";

  // Select all lights in area 2 with gel L201 or L135
  DeviceSet areaFilter2 = rig.select("$Area=2[$gel=L201|$gel=L135]");
  cout << areaFilter2.info() << "\n";

  getchar();
  */
}
