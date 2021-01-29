#include <map>
using namespace std;

#define SR(o0, o1, cm, cn, o2)                                                 \
  ((o0) << 14 | (o1) << 11 | (cm) << 7 | (cn) << 3 | (o2))

/*
 * Map of system register id to name, id can be computed with
 * def r(o0, o1, cn, cm, o2):
 *   return o0 << 14 | o1 << 11 | cn << 7 | cm << 3 | o2 << 0
 *
 * so for example, s3_3_c0_c0_7 (DCZID_EL0) would be
 * 3 << 14 | 3 << 11 | 0 << 7 | 0 << 3 | 7
 *
 * or 0xd807.
 */

map<uint32_t, const char *> msr = {
    {0xc000, "MIDR_EL1"},        {0xc800, "CCSIDR_EL1"},
    {0xc005, "MPIDR_EL1"},       {0xc020, "ID_AA64PFR0_EL1"},
    {0xc020, "ID_AA64PFR0_EL1"}, {0xc028, "ID_AA64DFR0_EL1"},
    {0xc608, "ISR_EL1"},         {0xc801, "CLIDR_EL1"},
    {0xcf90, "CPUACTLR_EL1"},    {0xcf91, "CPUECTLR_EL1"},
    {0xd801, "CTR_EL0"},         {0xd807, "DCZID_EL0"},
    {0xdf01, "CNTPCT_EL0"},      {0xe090, "ZCR_EL2"},
    {0xf090, "ZCR_EL3"},         {SR(3, 3, 14, 0, 2), "CNTVCT"},
};
