#include <map>
using namespace std;

map<uint32_t, const char *> msr = {
    {0xc000, "MIDR_EL1"},        {0xc800, "CCSIDR_EL1"},
    {0xc005, "MPIDR_EL1"},       {0xc020, "ID_AA64PFR0_EL1"},
    {0xc020, "ID_AA64PFR0_EL1"}, {0xc028, "ID_AA64DFR0_EL1"},
    {0xc608, "ISR_EL1"},         {0xc801, "CLIDR_EL1"},
    {0xcf90, "CPUACTLR_EL1"},    {0xcf91, "CPUECTLR_EL1"},
    {0xd801, "CTR_EL0"},         {0xdf01, "CNTPCT_EL0"},
    {0xe090, "ZCR_EL2"},         {0xf090, "ZCR_EL3"},
};
