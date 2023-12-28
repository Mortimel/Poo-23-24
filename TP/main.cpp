

#include <string>
#include <sstream>
#include <iomanip>
#include "Terminal.h"
#include "zona.h"
#include "Interface.h"
using namespace term;



int main() {

    Terminal &t = Terminal::instance();
    Interface *interface = new Interface(t);
    interface -> menuInterface(t);

    return 0;
}