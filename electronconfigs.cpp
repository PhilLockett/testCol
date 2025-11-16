/*
 * electronconfigs.cpp
 *
 * Source code to support Electron configuration definitions.
 *
 * DO NOT EDIT - THIS FILE IS GENERATED USING:
 *   ./electrons.exe
 *
 */

#include "electronconfigs.h"

/* Subshell Descriptions - index using Azimuthal quantum number (0 to 5). */
const subshell_desc_t SubshellDescriptions[SUBSHELL_COUNT] =
{

	{ 's',	1,	2 },	/* 0 */
	{ 'p',	3,	6 },	/* 1 */
	{ 'd',	5,	10 },	/* 2 */
	{ 'f',	7,	14 },	/* 3 */
	{ 'g',	9,	18 },	/* 4 */
	{ 'h',	11,	22 },	/* 5 */

};

/* Electron Configuration definitions generated using Madelung's rule. */
const short ElectronConfigurations[ELECTRON_CONFIGURATION_COUNT] =
{
//    1s    2s    2p    3s    3p    4s    3d    4p    5s    4d    5p    6s    4f    5d    6p    7s    5f    6d    7p    8s    5g    6f    7d    8p    9s    6g    7f    8d    9p    10s    
    0x10, 0x20, 0x21, 0x30, 0x31, 0x40, 0x32, 0x41, 0x50, 0x42, 0x51, 0x60, 0x43, 0x52, 0x61, 0x70, 0x53, 0x62, 0x71, 0x80, 0x54, 0x63, 0x72, 0x81, 0x90, 0x64, 0x73, 0x82, 0x91, 0xa0, 
};

/* Electron Subshell definitions. */
const short ElectronSubshells[ELECTRON_SUBSHELL_COUNT] =
{
//    1s    2s    2p    3s    3p    3d    4s    4p    4d    4f    5s    5p    5d    5f    5g    6s    6p    6d    6f    7s    7p    7d    8s    8p    9s    9p    
    0x10, 0x20, 0x21, 0x30, 0x31, 0x32, 0x40, 0x41, 0x42, 0x43, 0x50, 0x51, 0x52, 0x53, 0x54, 0x60, 0x61, 0x62, 0x63, 0x70, 0x71, 0x72, 0x80, 0x81, 0x90, 0x91, 
};

/* Map ElectronConfigurations[] indices to ElectronSubshells[]. */
const short MapConfToSubs[ELECTRON_CONFIGURATION_COUNT] =
{
    0, 1, 2, 3, 4, 6, 5, 7, 10, 8, 11, 15, 9, 12, 16, 19, 13, 17, 20, 22, 14, 18, 21, 23, 24, -1, -1, -1, 25, -1, 
};

/* Map ElectronSubshells[] indices to ElectronConfigurations[]. */
const short MapSubsToConf[ELECTRON_SUBSHELL_COUNT] =
{
    0, 1, 2, 3, 4, 6, 5, 7, 9, 12, 8, 10, 13, 16, 20, 11, 14, 17, 21, 15, 18, 22, 19, 23, 24, 28, 
};

/* Full Electron Configuration. */
const short FinalCounts[ELECTRON_CONFIGURATION_COUNT] =
{
    2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 18, 14, 10, 6, 2, 18, 14, 10, 6, 2, 
};

/* List of Subcategories. */
const char * Subcategories[SUBCATEGORY_COUNT] =
{
	"UNDEFINED",
	"Metalloid",
	"Unknown",
	"Alkali_metal",
	"Alkaline_earth_metal",
	"Lanthanide",
	"Actinide",
	"Transition_metal",
	"Post_transition_metal",
	"Reactive_nonmetal",
	"Noble_gas",
};

const short GenElectronConfigCount1[]		= { 1 };
const short ElectronConfigurationCount1[]	= { 1 };
const short ElectronSubshellCount1[]		= { 1 };
const short ElectronShellCount1[]			= { 1 };
const element_conf_t ElementConfiguration1 =
{
	"H",	"hydrogen",
	1,	1,	1,	1,
	1.008,	8.988e-05,
	14.01,	20.28,
	14.304,	2.2,
	1400,
	9,
	1,	GenElectronConfigCount1,
	1,	ElectronConfigurationCount1,
	1,	ElectronSubshellCount1,
	1,	ElectronShellCount1
};

const short GenElectronConfigCount2[]		= { 2 };
const short ElectronConfigurationCount2[]	= { 2 };
const short ElectronSubshellCount2[]		= { 2 };
const short ElectronShellCount2[]			= { 2 };
const element_conf_t ElementConfiguration2 =
{
	"He",	"helium",
	2,	18,	32,	1,
	4.0026,	0.0001785,
	0,	4.22,
	5.193,	0,
	0.008,
	10,
	1,	GenElectronConfigCount2,
	1,	ElectronConfigurationCount2,
	1,	ElectronSubshellCount2,
	1,	ElectronShellCount2
};

const short GenElectronConfigCount3[]		= { 2, 1 };
const short ElectronConfigurationCount3[]	= { 2, 1 };
const short ElectronSubshellCount3[]		= { 2, 1 };
const short ElectronShellCount3[]			= { 2, 1 };
const element_conf_t ElementConfiguration3 =
{
	"Li",	"lithium",
	3,	1,	1,	2,
	6.94,	0.534,
	453.69,	1560,
	3.582,	0.98,
	20,
	3,
	2,	GenElectronConfigCount3,
	2,	ElectronConfigurationCount3,
	2,	ElectronSubshellCount3,
	2,	ElectronShellCount3
};

const short GenElectronConfigCount4[]		= { 2, 2 };
const short ElectronConfigurationCount4[]	= { 2, 2 };
const short ElectronSubshellCount4[]		= { 2, 2 };
const short ElectronShellCount4[]			= { 2, 2 };
const element_conf_t ElementConfiguration4 =
{
	"Be",	"beryllium",
	4,	2,	2,	2,
	9.01218,	1.85,
	1560,	2742,
	1.825,	1.57,
	2.8,
	4,
	2,	GenElectronConfigCount4,
	2,	ElectronConfigurationCount4,
	2,	ElectronSubshellCount4,
	2,	ElectronShellCount4
};

const short GenElectronConfigCount5[]		= { 2, 2, 1 };
const short ElectronConfigurationCount5[]	= { 2, 2, 1 };
const short ElectronSubshellCount5[]		= { 2, 2, 1 };
const short ElectronShellCount5[]			= { 2, 3 };
const element_conf_t ElementConfiguration5 =
{
	"B",	"boron",
	5,	13,	27,	2,
	10.81,	2.34,
	2349,	4200,
	1.026,	2.04,
	10,
	1,
	3,	GenElectronConfigCount5,
	3,	ElectronConfigurationCount5,
	3,	ElectronSubshellCount5,
	2,	ElectronShellCount5
};

const short GenElectronConfigCount6[]		= { 2, 2, 2 };
const short ElectronConfigurationCount6[]	= { 2, 2, 2 };
const short ElectronSubshellCount6[]		= { 2, 2, 2 };
const short ElectronShellCount6[]			= { 2, 4 };
const element_conf_t ElementConfiguration6 =
{
	"C",	"carbon",
	6,	14,	28,	2,
	12.011,	2.267,
	3800,	4300,
	0.709,	2.55,
	200,
	9,
	3,	GenElectronConfigCount6,
	3,	ElectronConfigurationCount6,
	3,	ElectronSubshellCount6,
	2,	ElectronShellCount6
};

const short GenElectronConfigCount7[]		= { 2, 2, 3 };
const short ElectronConfigurationCount7[]	= { 2, 2, 3 };
const short ElectronSubshellCount7[]		= { 2, 2, 3 };
const short ElectronShellCount7[]			= { 2, 5 };
const element_conf_t ElementConfiguration7 =
{
	"N",	"nitrogen",
	7,	15,	29,	2,
	14.007,	0.0012506,
	63.15,	77.36,
	1.04,	3.04,
	19,
	9,
	3,	GenElectronConfigCount7,
	3,	ElectronConfigurationCount7,
	3,	ElectronSubshellCount7,
	2,	ElectronShellCount7
};

const short GenElectronConfigCount8[]		= { 2, 2, 4 };
const short ElectronConfigurationCount8[]	= { 2, 2, 4 };
const short ElectronSubshellCount8[]		= { 2, 2, 4 };
const short ElectronShellCount8[]			= { 2, 6 };
const element_conf_t ElementConfiguration8 =
{
	"O",	"oxygen",
	8,	16,	30,	2,
	15.999,	0.001429,
	54.36,	90.2,
	0.918,	3.44,
	461000,
	9,
	3,	GenElectronConfigCount8,
	3,	ElectronConfigurationCount8,
	3,	ElectronSubshellCount8,
	2,	ElectronShellCount8
};

const short GenElectronConfigCount9[]		= { 2, 2, 5 };
const short ElectronConfigurationCount9[]	= { 2, 2, 5 };
const short ElectronSubshellCount9[]		= { 2, 2, 5 };
const short ElectronShellCount9[]			= { 2, 7 };
const element_conf_t ElementConfiguration9 =
{
	"F",	"fluorine",
	9,	17,	31,	2,
	18.9984,	0.001696,
	53.53,	85.03,
	0.824,	3.98,
	585,
	9,
	3,	GenElectronConfigCount9,
	3,	ElectronConfigurationCount9,
	3,	ElectronSubshellCount9,
	2,	ElectronShellCount9
};

const short GenElectronConfigCount10[]		= { 2, 2, 6 };
const short ElectronConfigurationCount10[]	= { 2, 2, 6 };
const short ElectronSubshellCount10[]		= { 2, 2, 6 };
const short ElectronShellCount10[]			= { 2, 8 };
const element_conf_t ElementConfiguration10 =
{
	"Ne",	"neon",
	10,	18,	32,	2,
	20.1797,	0.0008999,
	24.56,	27.07,
	1.03,	0,
	0.005,
	10,
	3,	GenElectronConfigCount10,
	3,	ElectronConfigurationCount10,
	3,	ElectronSubshellCount10,
	2,	ElectronShellCount10
};

const short GenElectronConfigCount11[]		= { 2, 2, 6, 1 };
const short ElectronConfigurationCount11[]	= { 2, 2, 6, 1 };
const short ElectronSubshellCount11[]		= { 2, 2, 6, 1 };
const short ElectronShellCount11[]			= { 2, 8, 1 };
const element_conf_t ElementConfiguration11 =
{
	"Na",	"sodium",
	11,	1,	1,	3,
	22.9898,	0.971,
	370.87,	1156,
	1.228,	0.93,
	23600,
	3,
	4,	GenElectronConfigCount11,
	4,	ElectronConfigurationCount11,
	4,	ElectronSubshellCount11,
	3,	ElectronShellCount11
};

const short GenElectronConfigCount12[]		= { 2, 2, 6, 2 };
const short ElectronConfigurationCount12[]	= { 2, 2, 6, 2 };
const short ElectronSubshellCount12[]		= { 2, 2, 6, 2 };
const short ElectronShellCount12[]			= { 2, 8, 2 };
const element_conf_t ElementConfiguration12 =
{
	"Mg",	"magnesium",
	12,	2,	2,	3,
	24.305,	1.738,
	923,	1363,
	1.023,	1.31,
	23300,
	4,
	4,	GenElectronConfigCount12,
	4,	ElectronConfigurationCount12,
	4,	ElectronSubshellCount12,
	3,	ElectronShellCount12
};

const short GenElectronConfigCount13[]		= { 2, 2, 6, 2, 1 };
const short ElectronConfigurationCount13[]	= { 2, 2, 6, 2, 1 };
const short ElectronSubshellCount13[]		= { 2, 2, 6, 2, 1 };
const short ElectronShellCount13[]			= { 2, 8, 3 };
const element_conf_t ElementConfiguration13 =
{
	"Al",	"aluminium",
	13,	13,	27,	3,
	26.9815,	2.698,
	933.47,	2792,
	0.897,	1.61,
	82300,
	8,
	5,	GenElectronConfigCount13,
	5,	ElectronConfigurationCount13,
	5,	ElectronSubshellCount13,
	3,	ElectronShellCount13
};

const short GenElectronConfigCount14[]		= { 2, 2, 6, 2, 2 };
const short ElectronConfigurationCount14[]	= { 2, 2, 6, 2, 2 };
const short ElectronSubshellCount14[]		= { 2, 2, 6, 2, 2 };
const short ElectronShellCount14[]			= { 2, 8, 4 };
const element_conf_t ElementConfiguration14 =
{
	"Si",	"silicon",
	14,	14,	28,	3,
	28.085,	2.3296,
	1687,	3538,
	0.705,	1.9,
	282000,
	1,
	5,	GenElectronConfigCount14,
	5,	ElectronConfigurationCount14,
	5,	ElectronSubshellCount14,
	3,	ElectronShellCount14
};

const short GenElectronConfigCount15[]		= { 2, 2, 6, 2, 3 };
const short ElectronConfigurationCount15[]	= { 2, 2, 6, 2, 3 };
const short ElectronSubshellCount15[]		= { 2, 2, 6, 2, 3 };
const short ElectronShellCount15[]			= { 2, 8, 5 };
const element_conf_t ElementConfiguration15 =
{
	"P",	"phosphorus",
	15,	15,	29,	3,
	30.9738,	1.82,
	317.3,	550,
	0.769,	2.19,
	1050,
	9,
	5,	GenElectronConfigCount15,
	5,	ElectronConfigurationCount15,
	5,	ElectronSubshellCount15,
	3,	ElectronShellCount15
};

const short GenElectronConfigCount16[]		= { 2, 2, 6, 2, 4 };
const short ElectronConfigurationCount16[]	= { 2, 2, 6, 2, 4 };
const short ElectronSubshellCount16[]		= { 2, 2, 6, 2, 4 };
const short ElectronShellCount16[]			= { 2, 8, 6 };
const element_conf_t ElementConfiguration16 =
{
	"S",	"sulfur",
	16,	16,	30,	3,
	32.06,	2.067,
	388.36,	717.87,
	0.71,	2.58,
	350,
	9,
	5,	GenElectronConfigCount16,
	5,	ElectronConfigurationCount16,
	5,	ElectronSubshellCount16,
	3,	ElectronShellCount16
};

const short GenElectronConfigCount17[]		= { 2, 2, 6, 2, 5 };
const short ElectronConfigurationCount17[]	= { 2, 2, 6, 2, 5 };
const short ElectronSubshellCount17[]		= { 2, 2, 6, 2, 5 };
const short ElectronShellCount17[]			= { 2, 8, 7 };
const element_conf_t ElementConfiguration17 =
{
	"Cl",	"chlorine",
	17,	17,	31,	3,
	35.45,	0.003214,
	171.6,	239.11,
	0.479,	3.16,
	145,
	9,
	5,	GenElectronConfigCount17,
	5,	ElectronConfigurationCount17,
	5,	ElectronSubshellCount17,
	3,	ElectronShellCount17
};

const short GenElectronConfigCount18[]		= { 2, 2, 6, 2, 6 };
const short ElectronConfigurationCount18[]	= { 2, 2, 6, 2, 6 };
const short ElectronSubshellCount18[]		= { 2, 2, 6, 2, 6 };
const short ElectronShellCount18[]			= { 2, 8, 8 };
const element_conf_t ElementConfiguration18 =
{
	"Ar",	"argon",
	18,	18,	32,	3,
	39.948,	0.0017837,
	83.8,	87.3,
	0.52,	0,
	3.5,
	10,
	5,	GenElectronConfigCount18,
	5,	ElectronConfigurationCount18,
	5,	ElectronSubshellCount18,
	3,	ElectronShellCount18
};

const short GenElectronConfigCount19[]		= { 2, 2, 6, 2, 6, 1 };
const short ElectronConfigurationCount19[]	= { 2, 2, 6, 2, 6, 1 };
const short ElectronSubshellCount19[]		= { 2, 2, 6, 2, 6, 0, 1 };
const short ElectronShellCount19[]			= { 2, 8, 8, 1 };
const element_conf_t ElementConfiguration19 =
{
	"K",	"potassium",
	19,	1,	1,	4,
	39.0983,	0.862,
	336.53,	1032,
	0.757,	0.82,
	20900,
	3,
	6,	GenElectronConfigCount19,
	6,	ElectronConfigurationCount19,
	7,	ElectronSubshellCount19,
	4,	ElectronShellCount19
};

const short GenElectronConfigCount20[]		= { 2, 2, 6, 2, 6, 2 };
const short ElectronConfigurationCount20[]	= { 2, 2, 6, 2, 6, 2 };
const short ElectronSubshellCount20[]		= { 2, 2, 6, 2, 6, 0, 2 };
const short ElectronShellCount20[]			= { 2, 8, 8, 2 };
const element_conf_t ElementConfiguration20 =
{
	"Ca",	"calcium",
	20,	2,	2,	4,
	40.078,	1.54,
	1115,	1757,
	0.647,	1,
	41500,
	4,
	6,	GenElectronConfigCount20,
	6,	ElectronConfigurationCount20,
	7,	ElectronSubshellCount20,
	4,	ElectronShellCount20
};

const short GenElectronConfigCount21[]		= { 2, 2, 6, 2, 6, 2, 1 };
const short ElectronConfigurationCount21[]	= { 2, 2, 6, 2, 6, 2, 1 };
const short ElectronSubshellCount21[]		= { 2, 2, 6, 2, 6, 1, 2 };
const short ElectronShellCount21[]			= { 2, 8, 9, 2 };
const element_conf_t ElementConfiguration21 =
{
	"Sc",	"scandium",
	21,	3,	3,	4,
	44.9559,	2.989,
	1814,	3109,
	0.568,	1.36,
	22,
	7,
	7,	GenElectronConfigCount21,
	7,	ElectronConfigurationCount21,
	7,	ElectronSubshellCount21,
	4,	ElectronShellCount21
};

const short GenElectronConfigCount22[]		= { 2, 2, 6, 2, 6, 2, 2 };
const short ElectronConfigurationCount22[]	= { 2, 2, 6, 2, 6, 2, 2 };
const short ElectronSubshellCount22[]		= { 2, 2, 6, 2, 6, 2, 2 };
const short ElectronShellCount22[]			= { 2, 8, 10, 2 };
const element_conf_t ElementConfiguration22 =
{
	"Ti",	"titanium",
	22,	4,	18,	4,
	47.867,	4.54,
	1941,	3560,
	0.523,	1.54,
	5650,
	7,
	7,	GenElectronConfigCount22,
	7,	ElectronConfigurationCount22,
	7,	ElectronSubshellCount22,
	4,	ElectronShellCount22
};

const short GenElectronConfigCount23[]		= { 2, 2, 6, 2, 6, 2, 3 };
const short ElectronConfigurationCount23[]	= { 2, 2, 6, 2, 6, 2, 3 };
const short ElectronSubshellCount23[]		= { 2, 2, 6, 2, 6, 3, 2 };
const short ElectronShellCount23[]			= { 2, 8, 11, 2 };
const element_conf_t ElementConfiguration23 =
{
	"V",	"vanadium",
	23,	5,	19,	4,
	50.9415,	6.11,
	2183,	3680,
	0.489,	1.63,
	120,
	7,
	7,	GenElectronConfigCount23,
	7,	ElectronConfigurationCount23,
	7,	ElectronSubshellCount23,
	4,	ElectronShellCount23
};

const short GenElectronConfigCount24[]		= { 2, 2, 6, 2, 6, 2, 4 };
const short ElectronConfigurationCount24[]	= { 2, 2, 6, 2, 6, 1, 5 };
const short ElectronSubshellCount24[]		= { 2, 2, 6, 2, 6, 5, 1 };
const short ElectronShellCount24[]			= { 2, 8, 13, 1 };
const element_conf_t ElementConfiguration24 =
{
	"Cr",	"chromium",
	24,	6,	20,	4,
	51.9961,	7.15,
	2180,	2944,
	0.449,	1.66,
	102,
	7,
	7,	GenElectronConfigCount24,
	7,	ElectronConfigurationCount24,
	7,	ElectronSubshellCount24,
	4,	ElectronShellCount24
};

const short GenElectronConfigCount25[]		= { 2, 2, 6, 2, 6, 2, 5 };
const short ElectronConfigurationCount25[]	= { 2, 2, 6, 2, 6, 2, 5 };
const short ElectronSubshellCount25[]		= { 2, 2, 6, 2, 6, 5, 2 };
const short ElectronShellCount25[]			= { 2, 8, 13, 2 };
const element_conf_t ElementConfiguration25 =
{
	"Mn",	"manganese",
	25,	7,	21,	4,
	54.938,	7.44,
	1519,	2334,
	0.479,	1.55,
	950,
	7,
	7,	GenElectronConfigCount25,
	7,	ElectronConfigurationCount25,
	7,	ElectronSubshellCount25,
	4,	ElectronShellCount25
};

const short GenElectronConfigCount26[]		= { 2, 2, 6, 2, 6, 2, 6 };
const short ElectronConfigurationCount26[]	= { 2, 2, 6, 2, 6, 2, 6 };
const short ElectronSubshellCount26[]		= { 2, 2, 6, 2, 6, 6, 2 };
const short ElectronShellCount26[]			= { 2, 8, 14, 2 };
const element_conf_t ElementConfiguration26 =
{
	"Fe",	"iron",
	26,	8,	22,	4,
	55.845,	7.874,
	1811,	3134,
	0.449,	1.83,
	56300,
	7,
	7,	GenElectronConfigCount26,
	7,	ElectronConfigurationCount26,
	7,	ElectronSubshellCount26,
	4,	ElectronShellCount26
};

const short GenElectronConfigCount27[]		= { 2, 2, 6, 2, 6, 2, 7 };
const short ElectronConfigurationCount27[]	= { 2, 2, 6, 2, 6, 2, 7 };
const short ElectronSubshellCount27[]		= { 2, 2, 6, 2, 6, 7, 2 };
const short ElectronShellCount27[]			= { 2, 8, 15, 2 };
const element_conf_t ElementConfiguration27 =
{
	"Co",	"cobalt",
	27,	9,	23,	4,
	58.9332,	8.86,
	1768,	3200,
	0.421,	1.88,
	25,
	7,
	7,	GenElectronConfigCount27,
	7,	ElectronConfigurationCount27,
	7,	ElectronSubshellCount27,
	4,	ElectronShellCount27
};

const short GenElectronConfigCount28[]		= { 2, 2, 6, 2, 6, 2, 8 };
const short ElectronConfigurationCount28[]	= { 2, 2, 6, 2, 6, 2, 8 };
const short ElectronSubshellCount28[]		= { 2, 2, 6, 2, 6, 8, 2 };
const short ElectronShellCount28[]			= { 2, 8, 16, 2 };
const element_conf_t ElementConfiguration28 =
{
	"Ni",	"nickel",
	28,	10,	24,	4,
	58.6934,	8.912,
	1728,	3186,
	0.444,	1.91,
	84,
	7,
	7,	GenElectronConfigCount28,
	7,	ElectronConfigurationCount28,
	7,	ElectronSubshellCount28,
	4,	ElectronShellCount28
};

const short GenElectronConfigCount29[]		= { 2, 2, 6, 2, 6, 2, 9 };
const short ElectronConfigurationCount29[]	= { 2, 2, 6, 2, 6, 1, 10 };
const short ElectronSubshellCount29[]		= { 2, 2, 6, 2, 6, 10, 1 };
const short ElectronShellCount29[]			= { 2, 8, 18, 1 };
const element_conf_t ElementConfiguration29 =
{
	"Cu",	"copper",
	29,	11,	25,	4,
	63.546,	8.96,
	1357.77,	2835,
	0.385,	1.9,
	60,
	7,
	7,	GenElectronConfigCount29,
	7,	ElectronConfigurationCount29,
	7,	ElectronSubshellCount29,
	4,	ElectronShellCount29
};

const short GenElectronConfigCount30[]		= { 2, 2, 6, 2, 6, 2, 10 };
const short ElectronConfigurationCount30[]	= { 2, 2, 6, 2, 6, 2, 10 };
const short ElectronSubshellCount30[]		= { 2, 2, 6, 2, 6, 10, 2 };
const short ElectronShellCount30[]			= { 2, 8, 18, 2 };
const element_conf_t ElementConfiguration30 =
{
	"Zn",	"zinc",
	30,	12,	26,	4,
	65.38,	7.134,
	692.88,	1180,
	0.388,	1.65,
	70,
	8,
	7,	GenElectronConfigCount30,
	7,	ElectronConfigurationCount30,
	7,	ElectronSubshellCount30,
	4,	ElectronShellCount30
};

const short GenElectronConfigCount31[]		= { 2, 2, 6, 2, 6, 2, 10, 1 };
const short ElectronConfigurationCount31[]	= { 2, 2, 6, 2, 6, 2, 10, 1 };
const short ElectronSubshellCount31[]		= { 2, 2, 6, 2, 6, 10, 2, 1 };
const short ElectronShellCount31[]			= { 2, 8, 18, 3 };
const element_conf_t ElementConfiguration31 =
{
	"Ga",	"gallium",
	31,	13,	27,	4,
	69.723,	5.907,
	302.915,	2673,
	0.371,	1.81,
	19,
	8,
	8,	GenElectronConfigCount31,
	8,	ElectronConfigurationCount31,
	8,	ElectronSubshellCount31,
	4,	ElectronShellCount31
};

const short GenElectronConfigCount32[]		= { 2, 2, 6, 2, 6, 2, 10, 2 };
const short ElectronConfigurationCount32[]	= { 2, 2, 6, 2, 6, 2, 10, 2 };
const short ElectronSubshellCount32[]		= { 2, 2, 6, 2, 6, 10, 2, 2 };
const short ElectronShellCount32[]			= { 2, 8, 18, 4 };
const element_conf_t ElementConfiguration32 =
{
	"Ge",	"germanium",
	32,	14,	28,	4,
	72.63,	5.323,
	1211.4,	3106,
	0.32,	2.01,
	1.5,
	1,
	8,	GenElectronConfigCount32,
	8,	ElectronConfigurationCount32,
	8,	ElectronSubshellCount32,
	4,	ElectronShellCount32
};

const short GenElectronConfigCount33[]		= { 2, 2, 6, 2, 6, 2, 10, 3 };
const short ElectronConfigurationCount33[]	= { 2, 2, 6, 2, 6, 2, 10, 3 };
const short ElectronSubshellCount33[]		= { 2, 2, 6, 2, 6, 10, 2, 3 };
const short ElectronShellCount33[]			= { 2, 8, 18, 5 };
const element_conf_t ElementConfiguration33 =
{
	"As",	"arsenic",
	33,	15,	29,	4,
	74.9216,	5.776,
	1090,	887,
	0.329,	2.18,
	1.8,
	1,
	8,	GenElectronConfigCount33,
	8,	ElectronConfigurationCount33,
	8,	ElectronSubshellCount33,
	4,	ElectronShellCount33
};

const short GenElectronConfigCount34[]		= { 2, 2, 6, 2, 6, 2, 10, 4 };
const short ElectronConfigurationCount34[]	= { 2, 2, 6, 2, 6, 2, 10, 4 };
const short ElectronSubshellCount34[]		= { 2, 2, 6, 2, 6, 10, 2, 4 };
const short ElectronShellCount34[]			= { 2, 8, 18, 6 };
const element_conf_t ElementConfiguration34 =
{
	"Se",	"selenium",
	34,	16,	30,	4,
	78.971,	4.809,
	453,	958,
	0.321,	2.55,
	0.05,
	9,
	8,	GenElectronConfigCount34,
	8,	ElectronConfigurationCount34,
	8,	ElectronSubshellCount34,
	4,	ElectronShellCount34
};

const short GenElectronConfigCount35[]		= { 2, 2, 6, 2, 6, 2, 10, 5 };
const short ElectronConfigurationCount35[]	= { 2, 2, 6, 2, 6, 2, 10, 5 };
const short ElectronSubshellCount35[]		= { 2, 2, 6, 2, 6, 10, 2, 5 };
const short ElectronShellCount35[]			= { 2, 8, 18, 7 };
const element_conf_t ElementConfiguration35 =
{
	"Br",	"bromine",
	35,	17,	31,	4,
	79.904,	3.122,
	265.8,	332,
	0.474,	2.96,
	2.4,
	9,
	8,	GenElectronConfigCount35,
	8,	ElectronConfigurationCount35,
	8,	ElectronSubshellCount35,
	4,	ElectronShellCount35
};

const short GenElectronConfigCount36[]		= { 2, 2, 6, 2, 6, 2, 10, 6 };
const short ElectronConfigurationCount36[]	= { 2, 2, 6, 2, 6, 2, 10, 6 };
const short ElectronSubshellCount36[]		= { 2, 2, 6, 2, 6, 10, 2, 6 };
const short ElectronShellCount36[]			= { 2, 8, 18, 8 };
const element_conf_t ElementConfiguration36 =
{
	"Kr",	"krypton",
	36,	18,	32,	4,
	83.798,	0.003733,
	115.79,	119.93,
	0.248,	3,
	1,
	10,
	8,	GenElectronConfigCount36,
	8,	ElectronConfigurationCount36,
	8,	ElectronSubshellCount36,
	4,	ElectronShellCount36
};

const short GenElectronConfigCount37[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 1 };
const short ElectronConfigurationCount37[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 1 };
const short ElectronSubshellCount37[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 0, 0, 1 };
const short ElectronShellCount37[]			= { 2, 8, 18, 8, 1 };
const element_conf_t ElementConfiguration37 =
{
	"Rb",	"rubidium",
	37,	1,	1,	5,
	85.4678,	1.532,
	312.46,	961,
	0.363,	0.82,
	90,
	3,
	9,	GenElectronConfigCount37,
	9,	ElectronConfigurationCount37,
	11,	ElectronSubshellCount37,
	5,	ElectronShellCount37
};

const short GenElectronConfigCount38[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2 };
const short ElectronConfigurationCount38[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2 };
const short ElectronSubshellCount38[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 0, 0, 2 };
const short ElectronShellCount38[]			= { 2, 8, 18, 8, 2 };
const element_conf_t ElementConfiguration38 =
{
	"Sr",	"strontium",
	38,	2,	2,	5,
	87.62,	2.64,
	1050,	1655,
	0.301,	0.95,
	370,
	4,
	9,	GenElectronConfigCount38,
	9,	ElectronConfigurationCount38,
	11,	ElectronSubshellCount38,
	5,	ElectronShellCount38
};

const short GenElectronConfigCount39[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 1 };
const short ElectronConfigurationCount39[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 1 };
const short ElectronSubshellCount39[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 1, 0, 2 };
const short ElectronShellCount39[]			= { 2, 8, 18, 9, 2 };
const element_conf_t ElementConfiguration39 =
{
	"Y",	"yttrium",
	39,	3,	3,	5,
	88.9058,	4.469,
	1799,	3609,
	0.298,	1.22,
	33,
	7,
	10,	GenElectronConfigCount39,
	10,	ElectronConfigurationCount39,
	11,	ElectronSubshellCount39,
	5,	ElectronShellCount39
};

const short GenElectronConfigCount40[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 2 };
const short ElectronConfigurationCount40[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 2 };
const short ElectronSubshellCount40[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 2, 0, 2 };
const short ElectronShellCount40[]			= { 2, 8, 18, 10, 2 };
const element_conf_t ElementConfiguration40 =
{
	"Zr",	"zirconium",
	40,	4,	18,	5,
	91.224,	6.506,
	2128,	4682,
	0.278,	1.33,
	165,
	7,
	10,	GenElectronConfigCount40,
	10,	ElectronConfigurationCount40,
	11,	ElectronSubshellCount40,
	5,	ElectronShellCount40
};

const short GenElectronConfigCount41[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 3 };
const short ElectronConfigurationCount41[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 1, 4 };
const short ElectronSubshellCount41[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 4, 0, 1 };
const short ElectronShellCount41[]			= { 2, 8, 18, 12, 1 };
const element_conf_t ElementConfiguration41 =
{
	"Nb",	"niobium",
	41,	5,	19,	5,
	92.9064,	8.57,
	2750,	5017,
	0.265,	1.6,
	20,
	7,
	10,	GenElectronConfigCount41,
	10,	ElectronConfigurationCount41,
	11,	ElectronSubshellCount41,
	5,	ElectronShellCount41
};

const short GenElectronConfigCount42[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 4 };
const short ElectronConfigurationCount42[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 1, 5 };
const short ElectronSubshellCount42[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 5, 0, 1 };
const short ElectronShellCount42[]			= { 2, 8, 18, 13, 1 };
const element_conf_t ElementConfiguration42 =
{
	"Mo",	"molybdenum",
	42,	6,	20,	5,
	95.95,	10.22,
	2896,	4912,
	0.251,	2.16,
	1.2,
	7,
	10,	GenElectronConfigCount42,
	10,	ElectronConfigurationCount42,
	11,	ElectronSubshellCount42,
	5,	ElectronShellCount42
};

const short GenElectronConfigCount43[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 5 };
const short ElectronConfigurationCount43[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 5 };
const short ElectronSubshellCount43[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 5, 0, 2 };
const short ElectronShellCount43[]			= { 2, 8, 18, 13, 2 };
const element_conf_t ElementConfiguration43 =
{
	"Tc",	"technetium",
	43,	7,	21,	5,
	0,	11.5,
	2430,	4538,
	0,	1.9,
	0,
	7,
	10,	GenElectronConfigCount43,
	10,	ElectronConfigurationCount43,
	11,	ElectronSubshellCount43,
	5,	ElectronShellCount43
};

const short GenElectronConfigCount44[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 6 };
const short ElectronConfigurationCount44[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 1, 7 };
const short ElectronSubshellCount44[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 7, 0, 1 };
const short ElectronShellCount44[]			= { 2, 8, 18, 15, 1 };
const element_conf_t ElementConfiguration44 =
{
	"Ru",	"ruthenium",
	44,	8,	22,	5,
	101.07,	12.37,
	2607,	4423,
	0.238,	2.2,
	0.001,
	7,
	10,	GenElectronConfigCount44,
	10,	ElectronConfigurationCount44,
	11,	ElectronSubshellCount44,
	5,	ElectronShellCount44
};

const short GenElectronConfigCount45[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 7 };
const short ElectronConfigurationCount45[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 1, 8 };
const short ElectronSubshellCount45[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 8, 0, 1 };
const short ElectronShellCount45[]			= { 2, 8, 18, 16, 1 };
const element_conf_t ElementConfiguration45 =
{
	"Rh",	"rhodium",
	45,	9,	23,	5,
	102.906,	12.41,
	2237,	3968,
	0.243,	2.28,
	0.001,
	7,
	10,	GenElectronConfigCount45,
	10,	ElectronConfigurationCount45,
	11,	ElectronSubshellCount45,
	5,	ElectronShellCount45
};

const short GenElectronConfigCount46[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 8 };
const short ElectronConfigurationCount46[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 0, 10 };
const short ElectronSubshellCount46[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10 };
const short ElectronShellCount46[]			= { 2, 8, 18, 18 };
const element_conf_t ElementConfiguration46 =
{
	"Pd",	"palladium",
	46,	10,	24,	5,
	106.42,	12.02,
	1828.05,	3236,
	0.244,	2.2,
	0.015,
	7,
	10,	GenElectronConfigCount46,
	10,	ElectronConfigurationCount46,
	9,	ElectronSubshellCount46,
	4,	ElectronShellCount46
};

const short GenElectronConfigCount47[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 9 };
const short ElectronConfigurationCount47[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 1, 10 };
const short ElectronSubshellCount47[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 0, 1 };
const short ElectronShellCount47[]			= { 2, 8, 18, 18, 1 };
const element_conf_t ElementConfiguration47 =
{
	"Ag",	"silver",
	47,	11,	25,	5,
	107.868,	10.501,
	1234.93,	2435,
	0.235,	1.93,
	0.075,
	7,
	10,	GenElectronConfigCount47,
	10,	ElectronConfigurationCount47,
	11,	ElectronSubshellCount47,
	5,	ElectronShellCount47
};

const short GenElectronConfigCount48[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10 };
const short ElectronConfigurationCount48[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10 };
const short ElectronSubshellCount48[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 0, 2 };
const short ElectronShellCount48[]			= { 2, 8, 18, 18, 2 };
const element_conf_t ElementConfiguration48 =
{
	"Cd",	"cadmium",
	48,	12,	26,	5,
	112.414,	8.69,
	594.22,	1040,
	0.232,	1.69,
	0.159,
	8,
	10,	GenElectronConfigCount48,
	10,	ElectronConfigurationCount48,
	11,	ElectronSubshellCount48,
	5,	ElectronShellCount48
};

const short GenElectronConfigCount49[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 1 };
const short ElectronConfigurationCount49[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 1 };
const short ElectronSubshellCount49[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 0, 2, 1 };
const short ElectronShellCount49[]			= { 2, 8, 18, 18, 3 };
const element_conf_t ElementConfiguration49 =
{
	"In",	"indium",
	49,	13,	27,	5,
	114.818,	7.31,
	429.75,	2345,
	0.233,	1.78,
	0.25,
	8,
	11,	GenElectronConfigCount49,
	11,	ElectronConfigurationCount49,
	12,	ElectronSubshellCount49,
	5,	ElectronShellCount49
};

const short GenElectronConfigCount50[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 2 };
const short ElectronConfigurationCount50[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 2 };
const short ElectronSubshellCount50[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 0, 2, 2 };
const short ElectronShellCount50[]			= { 2, 8, 18, 18, 4 };
const element_conf_t ElementConfiguration50 =
{
	"Sn",	"tin",
	50,	14,	28,	5,
	118.71,	7.287,
	505.08,	2875,
	0.228,	1.96,
	2.3,
	8,
	11,	GenElectronConfigCount50,
	11,	ElectronConfigurationCount50,
	12,	ElectronSubshellCount50,
	5,	ElectronShellCount50
};

const short GenElectronConfigCount51[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 3 };
const short ElectronConfigurationCount51[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 3 };
const short ElectronSubshellCount51[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 0, 2, 3 };
const short ElectronShellCount51[]			= { 2, 8, 18, 18, 5 };
const element_conf_t ElementConfiguration51 =
{
	"Sb",	"antimony",
	51,	15,	29,	5,
	121.76,	6.685,
	903.78,	1860,
	0.207,	2.05,
	0.2,
	1,
	11,	GenElectronConfigCount51,
	11,	ElectronConfigurationCount51,
	12,	ElectronSubshellCount51,
	5,	ElectronShellCount51
};

const short GenElectronConfigCount52[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 4 };
const short ElectronConfigurationCount52[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 4 };
const short ElectronSubshellCount52[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 0, 2, 4 };
const short ElectronShellCount52[]			= { 2, 8, 18, 18, 6 };
const element_conf_t ElementConfiguration52 =
{
	"Te",	"tellurium",
	52,	16,	30,	5,
	127.6,	6.232,
	722.66,	1261,
	0.202,	2.1,
	0.001,
	1,
	11,	GenElectronConfigCount52,
	11,	ElectronConfigurationCount52,
	12,	ElectronSubshellCount52,
	5,	ElectronShellCount52
};

const short GenElectronConfigCount53[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 5 };
const short ElectronConfigurationCount53[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 5 };
const short ElectronSubshellCount53[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 0, 2, 5 };
const short ElectronShellCount53[]			= { 2, 8, 18, 18, 7 };
const element_conf_t ElementConfiguration53 =
{
	"I",	"iodine",
	53,	17,	31,	5,
	126.904,	4.93,
	386.85,	457.4,
	0.214,	2.66,
	0.45,
	9,
	11,	GenElectronConfigCount53,
	11,	ElectronConfigurationCount53,
	12,	ElectronSubshellCount53,
	5,	ElectronShellCount53
};

const short GenElectronConfigCount54[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6 };
const short ElectronConfigurationCount54[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6 };
const short ElectronSubshellCount54[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 0, 2, 6 };
const short ElectronShellCount54[]			= { 2, 8, 18, 18, 8 };
const element_conf_t ElementConfiguration54 =
{
	"Xe",	"xenon",
	54,	18,	32,	5,
	131.293,	0.005887,
	161.4,	165.03,
	0.158,	2.6,
	3,
	10,
	11,	GenElectronConfigCount54,
	11,	ElectronConfigurationCount54,
	12,	ElectronSubshellCount54,
	5,	ElectronShellCount54
};

const short GenElectronConfigCount55[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 1 };
const short ElectronConfigurationCount55[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 1 };
const short ElectronSubshellCount55[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 0, 2, 6, 0, 0, 0, 1 };
const short ElectronShellCount55[]			= { 2, 8, 18, 18, 8, 1 };
const element_conf_t ElementConfiguration55 =
{
	"Cs",	"caesium",
	55,	1,	1,	6,
	132.905,	1.873,
	301.59,	944,
	0.242,	0.79,
	3,
	3,
	12,	GenElectronConfigCount55,
	12,	ElectronConfigurationCount55,
	16,	ElectronSubshellCount55,
	6,	ElectronShellCount55
};

const short GenElectronConfigCount56[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2 };
const short ElectronConfigurationCount56[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2 };
const short ElectronSubshellCount56[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 0, 2, 6, 0, 0, 0, 2 };
const short ElectronShellCount56[]			= { 2, 8, 18, 18, 8, 2 };
const element_conf_t ElementConfiguration56 =
{
	"Ba",	"barium",
	56,	2,	2,	6,
	137.327,	3.594,
	1000,	2170,
	0.204,	0.89,
	425,
	4,
	12,	GenElectronConfigCount56,
	12,	ElectronConfigurationCount56,
	16,	ElectronSubshellCount56,
	6,	ElectronShellCount56
};

const short GenElectronConfigCount57[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 1 };
const short ElectronConfigurationCount57[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 0, 1 };
const short ElectronSubshellCount57[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 0, 2, 6, 1, 0, 0, 2 };
const short ElectronShellCount57[]			= { 2, 8, 18, 18, 9, 2 };
const element_conf_t ElementConfiguration57 =
{
	"La",	"lanthanum",
	57,	3,	3,	6,
	138.905,	6.145,
	1193,	3737,
	0.195,	1.1,
	39,
	5,
	13,	GenElectronConfigCount57,
	14,	ElectronConfigurationCount57,
	16,	ElectronSubshellCount57,
	6,	ElectronShellCount57
};

const short GenElectronConfigCount58[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 2 };
const short ElectronConfigurationCount58[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 1, 1 };
const short ElectronSubshellCount58[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 1, 2, 6, 1, 0, 0, 2 };
const short ElectronShellCount58[]			= { 2, 8, 18, 19, 9, 2 };
const element_conf_t ElementConfiguration58 =
{
	"Ce",	"cerium",
	58,	0,	4,	6,
	140.116,	6.77,
	1068,	3716,
	0.192,	1.12,
	66.5,
	5,
	13,	GenElectronConfigCount58,
	14,	ElectronConfigurationCount58,
	16,	ElectronSubshellCount58,
	6,	ElectronShellCount58
};

const short GenElectronConfigCount59[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 3 };
const short ElectronConfigurationCount59[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 3 };
const short ElectronSubshellCount59[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 3, 2, 6, 0, 0, 0, 2 };
const short ElectronShellCount59[]			= { 2, 8, 18, 21, 8, 2 };
const element_conf_t ElementConfiguration59 =
{
	"Pr",	"praseodymium",
	59,	0,	5,	6,
	140.908,	6.773,
	1208,	3793,
	0.193,	1.13,
	9.2,
	5,
	13,	GenElectronConfigCount59,
	13,	ElectronConfigurationCount59,
	16,	ElectronSubshellCount59,
	6,	ElectronShellCount59
};

const short GenElectronConfigCount60[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 4 };
const short ElectronConfigurationCount60[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 4 };
const short ElectronSubshellCount60[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 4, 2, 6, 0, 0, 0, 2 };
const short ElectronShellCount60[]			= { 2, 8, 18, 22, 8, 2 };
const element_conf_t ElementConfiguration60 =
{
	"Nd",	"neodymium",
	60,	0,	6,	6,
	144.242,	7.007,
	1297,	3347,
	0.19,	1.14,
	41.5,
	5,
	13,	GenElectronConfigCount60,
	13,	ElectronConfigurationCount60,
	16,	ElectronSubshellCount60,
	6,	ElectronShellCount60
};

const short GenElectronConfigCount61[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 5 };
const short ElectronConfigurationCount61[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 5 };
const short ElectronSubshellCount61[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 5, 2, 6, 0, 0, 0, 2 };
const short ElectronShellCount61[]			= { 2, 8, 18, 23, 8, 2 };
const element_conf_t ElementConfiguration61 =
{
	"Pm",	"promethium",
	61,	0,	7,	6,
	0,	7.26,
	1315,	3273,
	0,	1.13,
	2,
	5,
	13,	GenElectronConfigCount61,
	13,	ElectronConfigurationCount61,
	16,	ElectronSubshellCount61,
	6,	ElectronShellCount61
};

const short GenElectronConfigCount62[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 6 };
const short ElectronConfigurationCount62[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 6 };
const short ElectronSubshellCount62[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 6, 2, 6, 0, 0, 0, 2 };
const short ElectronShellCount62[]			= { 2, 8, 18, 24, 8, 2 };
const element_conf_t ElementConfiguration62 =
{
	"Sm",	"samarium",
	62,	0,	8,	6,
	150.36,	7.52,
	1345,	2067,
	0.197,	1.17,
	7.05,
	5,
	13,	GenElectronConfigCount62,
	13,	ElectronConfigurationCount62,
	16,	ElectronSubshellCount62,
	6,	ElectronShellCount62
};

const short GenElectronConfigCount63[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 7 };
const short ElectronConfigurationCount63[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 7 };
const short ElectronSubshellCount63[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 7, 2, 6, 0, 0, 0, 2 };
const short ElectronShellCount63[]			= { 2, 8, 18, 25, 8, 2 };
const element_conf_t ElementConfiguration63 =
{
	"Eu",	"europium",
	63,	0,	9,	6,
	151.964,	5.243,
	1099,	1802,
	0.182,	1.2,
	2,
	5,
	13,	GenElectronConfigCount63,
	13,	ElectronConfigurationCount63,
	16,	ElectronSubshellCount63,
	6,	ElectronShellCount63
};

const short GenElectronConfigCount64[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 8 };
const short ElectronConfigurationCount64[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 7, 1 };
const short ElectronSubshellCount64[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 7, 2, 6, 1, 0, 0, 2 };
const short ElectronShellCount64[]			= { 2, 8, 18, 25, 9, 2 };
const element_conf_t ElementConfiguration64 =
{
	"Gd",	"gadolinium",
	64,	0,	10,	6,
	157.25,	7.895,
	1585,	3546,
	0.236,	1.2,
	6.2,
	5,
	13,	GenElectronConfigCount64,
	14,	ElectronConfigurationCount64,
	16,	ElectronSubshellCount64,
	6,	ElectronShellCount64
};

const short GenElectronConfigCount65[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 9 };
const short ElectronConfigurationCount65[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 9 };
const short ElectronSubshellCount65[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 9, 2, 6, 0, 0, 0, 2 };
const short ElectronShellCount65[]			= { 2, 8, 18, 27, 8, 2 };
const element_conf_t ElementConfiguration65 =
{
	"Tb",	"terbium",
	65,	0,	11,	6,
	158.925,	8.229,
	1629,	3503,
	0.182,	1.2,
	1.2,
	5,
	13,	GenElectronConfigCount65,
	13,	ElectronConfigurationCount65,
	16,	ElectronSubshellCount65,
	6,	ElectronShellCount65
};

const short GenElectronConfigCount66[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 10 };
const short ElectronConfigurationCount66[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 10 };
const short ElectronSubshellCount66[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 10, 2, 6, 0, 0, 0, 2 };
const short ElectronShellCount66[]			= { 2, 8, 18, 28, 8, 2 };
const element_conf_t ElementConfiguration66 =
{
	"Dy",	"dysprosium",
	66,	0,	12,	6,
	162.5,	8.55,
	1680,	2840,
	0.17,	1.22,
	5.2,
	5,
	13,	GenElectronConfigCount66,
	13,	ElectronConfigurationCount66,
	16,	ElectronSubshellCount66,
	6,	ElectronShellCount66
};

const short GenElectronConfigCount67[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 11 };
const short ElectronConfigurationCount67[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 11 };
const short ElectronSubshellCount67[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 11, 2, 6, 0, 0, 0, 2 };
const short ElectronShellCount67[]			= { 2, 8, 18, 29, 8, 2 };
const element_conf_t ElementConfiguration67 =
{
	"Ho",	"holmium",
	67,	0,	13,	6,
	164.93,	8.795,
	1734,	2993,
	0.165,	1.23,
	1.3,
	5,
	13,	GenElectronConfigCount67,
	13,	ElectronConfigurationCount67,
	16,	ElectronSubshellCount67,
	6,	ElectronShellCount67
};

const short GenElectronConfigCount68[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 12 };
const short ElectronConfigurationCount68[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 12 };
const short ElectronSubshellCount68[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 12, 2, 6, 0, 0, 0, 2 };
const short ElectronShellCount68[]			= { 2, 8, 18, 30, 8, 2 };
const element_conf_t ElementConfiguration68 =
{
	"Er",	"erbium",
	68,	0,	14,	6,
	167.259,	9.066,
	1802,	3141,
	0.168,	1.24,
	3.5,
	5,
	13,	GenElectronConfigCount68,
	13,	ElectronConfigurationCount68,
	16,	ElectronSubshellCount68,
	6,	ElectronShellCount68
};

const short GenElectronConfigCount69[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 13 };
const short ElectronConfigurationCount69[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 13 };
const short ElectronSubshellCount69[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 13, 2, 6, 0, 0, 0, 2 };
const short ElectronShellCount69[]			= { 2, 8, 18, 31, 8, 2 };
const element_conf_t ElementConfiguration69 =
{
	"Tm",	"thulium",
	69,	0,	15,	6,
	168.934,	9.321,
	1818,	2223,
	0.16,	1.25,
	0.52,
	5,
	13,	GenElectronConfigCount69,
	13,	ElectronConfigurationCount69,
	16,	ElectronSubshellCount69,
	6,	ElectronShellCount69
};

const short GenElectronConfigCount70[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14 };
const short ElectronConfigurationCount70[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14 };
const short ElectronSubshellCount70[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 0, 0, 0, 2 };
const short ElectronShellCount70[]			= { 2, 8, 18, 32, 8, 2 };
const element_conf_t ElementConfiguration70 =
{
	"Yb",	"ytterbium",
	70,	0,	16,	6,
	173.045,	6.965,
	1097,	1469,
	0.155,	1.1,
	3.2,
	5,
	13,	GenElectronConfigCount70,
	13,	ElectronConfigurationCount70,
	16,	ElectronSubshellCount70,
	6,	ElectronShellCount70
};

const short GenElectronConfigCount71[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 1 };
const short ElectronConfigurationCount71[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 1 };
const short ElectronSubshellCount71[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 1, 0, 0, 2 };
const short ElectronShellCount71[]			= { 2, 8, 18, 32, 9, 2 };
const element_conf_t ElementConfiguration71 =
{
	"Lu",	"lutetium",
	71,	0,	17,	6,
	174.967,	9.84,
	1925,	3675,
	0.154,	1.27,
	0.8,
	5,
	14,	GenElectronConfigCount71,
	14,	ElectronConfigurationCount71,
	16,	ElectronSubshellCount71,
	6,	ElectronShellCount71
};

const short GenElectronConfigCount72[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 2 };
const short ElectronConfigurationCount72[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 2 };
const short ElectronSubshellCount72[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 2, 0, 0, 2 };
const short ElectronShellCount72[]			= { 2, 8, 18, 32, 10, 2 };
const element_conf_t ElementConfiguration72 =
{
	"Hf",	"hafnium",
	72,	4,	18,	6,
	178.49,	13.31,
	2506,	4876,
	0.144,	1.3,
	3,
	7,
	14,	GenElectronConfigCount72,
	14,	ElectronConfigurationCount72,
	16,	ElectronSubshellCount72,
	6,	ElectronShellCount72
};

const short GenElectronConfigCount73[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 3 };
const short ElectronConfigurationCount73[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 3 };
const short ElectronSubshellCount73[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 3, 0, 0, 2 };
const short ElectronShellCount73[]			= { 2, 8, 18, 32, 11, 2 };
const element_conf_t ElementConfiguration73 =
{
	"Ta",	"tantalum",
	73,	5,	19,	6,
	180.948,	16.654,
	3290,	5731,
	0.14,	1.5,
	2,
	7,
	14,	GenElectronConfigCount73,
	14,	ElectronConfigurationCount73,
	16,	ElectronSubshellCount73,
	6,	ElectronShellCount73
};

const short GenElectronConfigCount74[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 4 };
const short ElectronConfigurationCount74[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 4 };
const short ElectronSubshellCount74[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 4, 0, 0, 2 };
const short ElectronShellCount74[]			= { 2, 8, 18, 32, 12, 2 };
const element_conf_t ElementConfiguration74 =
{
	"W",	"tungsten",
	74,	6,	20,	6,
	183.84,	19.25,
	3695,	5828,
	0.132,	2.36,
	1.3,
	7,
	14,	GenElectronConfigCount74,
	14,	ElectronConfigurationCount74,
	16,	ElectronSubshellCount74,
	6,	ElectronShellCount74
};

const short GenElectronConfigCount75[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 5 };
const short ElectronConfigurationCount75[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 5 };
const short ElectronSubshellCount75[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 5, 0, 0, 2 };
const short ElectronShellCount75[]			= { 2, 8, 18, 32, 13, 2 };
const element_conf_t ElementConfiguration75 =
{
	"Re",	"rhenium",
	75,	7,	21,	6,
	186.207,	21.02,
	3459,	5869,
	0.137,	1.9,
	7,
	7,
	14,	GenElectronConfigCount75,
	14,	ElectronConfigurationCount75,
	16,	ElectronSubshellCount75,
	6,	ElectronShellCount75
};

const short GenElectronConfigCount76[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 6 };
const short ElectronConfigurationCount76[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 6 };
const short ElectronSubshellCount76[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 6, 0, 0, 2 };
const short ElectronShellCount76[]			= { 2, 8, 18, 32, 14, 2 };
const element_conf_t ElementConfiguration76 =
{
	"Os",	"osmium",
	76,	8,	22,	6,
	190.23,	22.61,
	3306,	5285,
	0.13,	2.2,
	0.002,
	7,
	14,	GenElectronConfigCount76,
	14,	ElectronConfigurationCount76,
	16,	ElectronSubshellCount76,
	6,	ElectronShellCount76
};

const short GenElectronConfigCount77[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 7 };
const short ElectronConfigurationCount77[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 7 };
const short ElectronSubshellCount77[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 7, 0, 0, 2 };
const short ElectronShellCount77[]			= { 2, 8, 18, 32, 15, 2 };
const element_conf_t ElementConfiguration77 =
{
	"Ir",	"iridium",
	77,	9,	23,	6,
	192.217,	22.56,
	2719,	4701,
	0.131,	2.2,
	0.001,
	7,
	14,	GenElectronConfigCount77,
	14,	ElectronConfigurationCount77,
	16,	ElectronSubshellCount77,
	6,	ElectronShellCount77
};

const short GenElectronConfigCount78[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 8 };
const short ElectronConfigurationCount78[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 1, 14, 9 };
const short ElectronSubshellCount78[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 9, 0, 0, 1 };
const short ElectronShellCount78[]			= { 2, 8, 18, 32, 17, 1 };
const element_conf_t ElementConfiguration78 =
{
	"Pt",	"platinum",
	78,	10,	24,	6,
	195.084,	21.46,
	2041.4,	4098,
	0.133,	2.28,
	0.005,
	7,
	14,	GenElectronConfigCount78,
	14,	ElectronConfigurationCount78,
	16,	ElectronSubshellCount78,
	6,	ElectronShellCount78
};

const short GenElectronConfigCount79[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 9 };
const short ElectronConfigurationCount79[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 1, 14, 10 };
const short ElectronSubshellCount79[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 0, 0, 1 };
const short ElectronShellCount79[]			= { 2, 8, 18, 32, 18, 1 };
const element_conf_t ElementConfiguration79 =
{
	"Au",	"gold",
	79,	11,	25,	6,
	196.967,	19.282,
	1337.33,	3129,
	0.129,	2.54,
	0.004,
	7,
	14,	GenElectronConfigCount79,
	14,	ElectronConfigurationCount79,
	16,	ElectronSubshellCount79,
	6,	ElectronShellCount79
};

const short GenElectronConfigCount80[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10 };
const short ElectronConfigurationCount80[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10 };
const short ElectronSubshellCount80[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 0, 0, 2 };
const short ElectronShellCount80[]			= { 2, 8, 18, 32, 18, 2 };
const element_conf_t ElementConfiguration80 =
{
	"Hg",	"mercury",
	80,	12,	26,	6,
	200.592,	13.5336,
	234.43,	629.88,
	0.14,	2,
	0.085,
	8,
	14,	GenElectronConfigCount80,
	14,	ElectronConfigurationCount80,
	16,	ElectronSubshellCount80,
	6,	ElectronShellCount80
};

const short GenElectronConfigCount81[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 1 };
const short ElectronConfigurationCount81[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 1 };
const short ElectronSubshellCount81[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 0, 0, 2, 1 };
const short ElectronShellCount81[]			= { 2, 8, 18, 32, 18, 3 };
const element_conf_t ElementConfiguration81 =
{
	"Tl",	"thallium",
	81,	13,	27,	6,
	204.38,	11.85,
	577,	1746,
	0.129,	1.62,
	0.85,
	8,
	15,	GenElectronConfigCount81,
	15,	ElectronConfigurationCount81,
	17,	ElectronSubshellCount81,
	6,	ElectronShellCount81
};

const short GenElectronConfigCount82[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 2 };
const short ElectronConfigurationCount82[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 2 };
const short ElectronSubshellCount82[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 0, 0, 2, 2 };
const short ElectronShellCount82[]			= { 2, 8, 18, 32, 18, 4 };
const element_conf_t ElementConfiguration82 =
{
	"Pb",	"lead",
	82,	14,	28,	6,
	207.2,	11.342,
	600.61,	2022,
	0.129,	1.87,
	14,
	8,
	15,	GenElectronConfigCount82,
	15,	ElectronConfigurationCount82,
	17,	ElectronSubshellCount82,
	6,	ElectronShellCount82
};

const short GenElectronConfigCount83[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 3 };
const short ElectronConfigurationCount83[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 3 };
const short ElectronSubshellCount83[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 0, 0, 2, 3 };
const short ElectronShellCount83[]			= { 2, 8, 18, 32, 18, 5 };
const element_conf_t ElementConfiguration83 =
{
	"Bi",	"bismuth",
	83,	15,	29,	6,
	208.98,	9.807,
	544.7,	1837,
	0.122,	2.02,
	0.009,
	8,
	15,	GenElectronConfigCount83,
	15,	ElectronConfigurationCount83,
	17,	ElectronSubshellCount83,
	6,	ElectronShellCount83
};

const short GenElectronConfigCount84[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 4 };
const short ElectronConfigurationCount84[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 4 };
const short ElectronSubshellCount84[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 0, 0, 2, 4 };
const short ElectronShellCount84[]			= { 2, 8, 18, 32, 18, 6 };
const element_conf_t ElementConfiguration84 =
{
	"Po",	"polonium",
	84,	16,	30,	6,
	0,	9.32,
	527,	1235,
	0,	2,
	2,
	8,
	15,	GenElectronConfigCount84,
	15,	ElectronConfigurationCount84,
	17,	ElectronSubshellCount84,
	6,	ElectronShellCount84
};

const short GenElectronConfigCount85[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 5 };
const short ElectronConfigurationCount85[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 5 };
const short ElectronSubshellCount85[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 0, 0, 2, 5 };
const short ElectronShellCount85[]			= { 2, 8, 18, 32, 18, 7 };
const element_conf_t ElementConfiguration85 =
{
	"At",	"astatine",
	85,	17,	31,	6,
	0,	7,
	575,	610,
	0,	2.2,
	3,
	1,
	15,	GenElectronConfigCount85,
	15,	ElectronConfigurationCount85,
	17,	ElectronSubshellCount85,
	6,	ElectronShellCount85
};

const short GenElectronConfigCount86[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6 };
const short ElectronConfigurationCount86[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6 };
const short ElectronSubshellCount86[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 0, 0, 2, 6 };
const short ElectronShellCount86[]			= { 2, 8, 18, 32, 18, 8 };
const element_conf_t ElementConfiguration86 =
{
	"Rn",	"radon",
	86,	18,	32,	6,
	0,	0.00973,
	202,	211.3,
	0.094,	2.2,
	4,
	10,
	15,	GenElectronConfigCount86,
	15,	ElectronConfigurationCount86,
	17,	ElectronSubshellCount86,
	6,	ElectronShellCount86
};

const short GenElectronConfigCount87[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 1 };
const short ElectronConfigurationCount87[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 1 };
const short ElectronSubshellCount87[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 0, 0, 2, 6, 0, 0, 1 };
const short ElectronShellCount87[]			= { 2, 8, 18, 32, 18, 8, 1 };
const element_conf_t ElementConfiguration87 =
{
	"Fr",	"francium",
	87,	1,	1,	7,
	0,	1.87,
	300,	950,
	0,	0.7,
	0,
	3,
	16,	GenElectronConfigCount87,
	16,	ElectronConfigurationCount87,
	20,	ElectronSubshellCount87,
	7,	ElectronShellCount87
};

const short GenElectronConfigCount88[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2 };
const short ElectronConfigurationCount88[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2 };
const short ElectronSubshellCount88[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 0, 0, 2, 6, 0, 0, 2 };
const short ElectronShellCount88[]			= { 2, 8, 18, 32, 18, 8, 2 };
const element_conf_t ElementConfiguration88 =
{
	"Ra",	"radium",
	88,	2,	2,	7,
	0,	5.5,
	973,	2010,
	0.094,	0.9,
	9,
	4,
	16,	GenElectronConfigCount88,
	16,	ElectronConfigurationCount88,
	20,	ElectronSubshellCount88,
	7,	ElectronShellCount88
};

const short GenElectronConfigCount89[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 1 };
const short ElectronConfigurationCount89[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 0, 1 };
const short ElectronSubshellCount89[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 0, 0, 2, 6, 1, 0, 2 };
const short ElectronShellCount89[]			= { 2, 8, 18, 32, 18, 9, 2 };
const element_conf_t ElementConfiguration89 =
{
	"Ac",	"actinium",
	89,	3,	3,	7,
	0,	10.07,
	1323,	3471,
	0.12,	1.1,
	5.5,
	6,
	17,	GenElectronConfigCount89,
	18,	ElectronConfigurationCount89,
	20,	ElectronSubshellCount89,
	7,	ElectronShellCount89
};

const short GenElectronConfigCount90[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 2 };
const short ElectronConfigurationCount90[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 0, 2 };
const short ElectronSubshellCount90[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 0, 0, 2, 6, 2, 0, 2 };
const short ElectronShellCount90[]			= { 2, 8, 18, 32, 18, 10, 2 };
const element_conf_t ElementConfiguration90 =
{
	"Th",	"thorium",
	90,	0,	4,	7,
	232.038,	11.72,
	2115,	5061,
	0.113,	1.3,
	9.6,
	6,
	17,	GenElectronConfigCount90,
	18,	ElectronConfigurationCount90,
	20,	ElectronSubshellCount90,
	7,	ElectronShellCount90
};

const short GenElectronConfigCount91[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 3 };
const short ElectronConfigurationCount91[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 2, 1 };
const short ElectronSubshellCount91[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 2, 0, 2, 6, 1, 0, 2 };
const short ElectronShellCount91[]			= { 2, 8, 18, 32, 20, 9, 2 };
const element_conf_t ElementConfiguration91 =
{
	"Pa",	"protactinium",
	91,	0,	5,	7,
	231.036,	15.37,
	1841,	4300,
	0,	1.5,
	1.4,
	6,
	17,	GenElectronConfigCount91,
	18,	ElectronConfigurationCount91,
	20,	ElectronSubshellCount91,
	7,	ElectronShellCount91
};

const short GenElectronConfigCount92[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 4 };
const short ElectronConfigurationCount92[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 3, 1 };
const short ElectronSubshellCount92[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 3, 0, 2, 6, 1, 0, 2 };
const short ElectronShellCount92[]			= { 2, 8, 18, 32, 21, 9, 2 };
const element_conf_t ElementConfiguration92 =
{
	"U",	"uranium",
	92,	0,	6,	7,
	238.029,	18.95,
	1405.3,	4404,
	0.116,	1.38,
	2.7,
	6,
	17,	GenElectronConfigCount92,
	18,	ElectronConfigurationCount92,
	20,	ElectronSubshellCount92,
	7,	ElectronShellCount92
};

const short GenElectronConfigCount93[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 5 };
const short ElectronConfigurationCount93[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 4, 1 };
const short ElectronSubshellCount93[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 4, 0, 2, 6, 1, 0, 2 };
const short ElectronShellCount93[]			= { 2, 8, 18, 32, 22, 9, 2 };
const element_conf_t ElementConfiguration93 =
{
	"Np",	"neptunium",
	93,	0,	7,	7,
	0,	20.45,
	917,	4273,
	0,	1.36,
	0,
	6,
	17,	GenElectronConfigCount93,
	18,	ElectronConfigurationCount93,
	20,	ElectronSubshellCount93,
	7,	ElectronShellCount93
};

const short GenElectronConfigCount94[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 6 };
const short ElectronConfigurationCount94[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 6 };
const short ElectronSubshellCount94[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 6, 0, 2, 6, 0, 0, 2 };
const short ElectronShellCount94[]			= { 2, 8, 18, 32, 24, 8, 2 };
const element_conf_t ElementConfiguration94 =
{
	"Pu",	"plutonium",
	94,	0,	8,	7,
	0,	19.84,
	912.5,	3501,
	0,	1.28,
	0,
	6,
	17,	GenElectronConfigCount94,
	17,	ElectronConfigurationCount94,
	20,	ElectronSubshellCount94,
	7,	ElectronShellCount94
};

const short GenElectronConfigCount95[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 7 };
const short ElectronConfigurationCount95[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 7 };
const short ElectronSubshellCount95[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 7, 0, 2, 6, 0, 0, 2 };
const short ElectronShellCount95[]			= { 2, 8, 18, 32, 25, 8, 2 };
const element_conf_t ElementConfiguration95 =
{
	"Am",	"americium",
	95,	0,	9,	7,
	0,	13.69,
	1449,	2880,
	0,	1.13,
	0,
	6,
	17,	GenElectronConfigCount95,
	17,	ElectronConfigurationCount95,
	20,	ElectronSubshellCount95,
	7,	ElectronShellCount95
};

const short GenElectronConfigCount96[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 8 };
const short ElectronConfigurationCount96[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 7, 1 };
const short ElectronSubshellCount96[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 7, 0, 2, 6, 1, 0, 2 };
const short ElectronShellCount96[]			= { 2, 8, 18, 32, 25, 9, 2 };
const element_conf_t ElementConfiguration96 =
{
	"Cm",	"curium",
	96,	0,	10,	7,
	0,	13.51,
	1613,	3383,
	0,	1.28,
	0,
	6,
	17,	GenElectronConfigCount96,
	18,	ElectronConfigurationCount96,
	20,	ElectronSubshellCount96,
	7,	ElectronShellCount96
};

const short GenElectronConfigCount97[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 9 };
const short ElectronConfigurationCount97[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 9 };
const short ElectronSubshellCount97[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 9, 0, 2, 6, 0, 0, 2 };
const short ElectronShellCount97[]			= { 2, 8, 18, 32, 27, 8, 2 };
const element_conf_t ElementConfiguration97 =
{
	"Bk",	"berkelium",
	97,	0,	11,	7,
	0,	14.79,
	1259,	2900,
	0,	1.3,
	0,
	6,
	17,	GenElectronConfigCount97,
	17,	ElectronConfigurationCount97,
	20,	ElectronSubshellCount97,
	7,	ElectronShellCount97
};

const short GenElectronConfigCount98[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 10 };
const short ElectronConfigurationCount98[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 10 };
const short ElectronSubshellCount98[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 10, 0, 2, 6, 0, 0, 2 };
const short ElectronShellCount98[]			= { 2, 8, 18, 32, 28, 8, 2 };
const element_conf_t ElementConfiguration98 =
{
	"Cf",	"californium",
	98,	0,	12,	7,
	0,	15.1,
	1173,	0,
	0,	1.3,
	0,
	6,
	17,	GenElectronConfigCount98,
	17,	ElectronConfigurationCount98,
	20,	ElectronSubshellCount98,
	7,	ElectronShellCount98
};

const short GenElectronConfigCount99[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 11 };
const short ElectronConfigurationCount99[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 11 };
const short ElectronSubshellCount99[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 11, 0, 2, 6, 0, 0, 2 };
const short ElectronShellCount99[]			= { 2, 8, 18, 32, 29, 8, 2 };
const element_conf_t ElementConfiguration99 =
{
	"Es",	"einsteinium",
	99,	0,	13,	7,
	0,	8.84,
	1133,	0,
	0,	1.3,
	0,
	6,
	17,	GenElectronConfigCount99,
	17,	ElectronConfigurationCount99,
	20,	ElectronSubshellCount99,
	7,	ElectronShellCount99
};

const short GenElectronConfigCount100[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 12 };
const short ElectronConfigurationCount100[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 12 };
const short ElectronSubshellCount100[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 12, 0, 2, 6, 0, 0, 2 };
const short ElectronShellCount100[]			= { 2, 8, 18, 32, 30, 8, 2 };
const element_conf_t ElementConfiguration100 =
{
	"Fm",	"fermium",
	100,	0,	14,	7,
	0,	0,
	0,	0,
	0,	1.3,
	0,
	6,
	17,	GenElectronConfigCount100,
	17,	ElectronConfigurationCount100,
	20,	ElectronSubshellCount100,
	7,	ElectronShellCount100
};

const short GenElectronConfigCount101[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 13 };
const short ElectronConfigurationCount101[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 13 };
const short ElectronSubshellCount101[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 13, 0, 2, 6, 0, 0, 2 };
const short ElectronShellCount101[]			= { 2, 8, 18, 32, 31, 8, 2 };
const element_conf_t ElementConfiguration101 =
{
	"Md",	"mendelevium",
	101,	0,	15,	7,
	0,	0,
	0,	0,
	0,	1.3,
	0,
	6,
	17,	GenElectronConfigCount101,
	17,	ElectronConfigurationCount101,
	20,	ElectronSubshellCount101,
	7,	ElectronShellCount101
};

const short GenElectronConfigCount102[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14 };
const short ElectronConfigurationCount102[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14 };
const short ElectronSubshellCount102[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 0, 2, 6, 0, 0, 2 };
const short ElectronShellCount102[]			= { 2, 8, 18, 32, 32, 8, 2 };
const element_conf_t ElementConfiguration102 =
{
	"No",	"nobelium",
	102,	0,	16,	7,
	0,	0,
	0,	0,
	0,	1.3,
	0,
	6,
	17,	GenElectronConfigCount102,
	17,	ElectronConfigurationCount102,
	20,	ElectronSubshellCount102,
	7,	ElectronShellCount102
};

const short GenElectronConfigCount103[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 1 };
const short ElectronConfigurationCount103[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 0, 1 };
const short ElectronSubshellCount103[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 0, 2, 6, 0, 0, 2, 1 };
const short ElectronShellCount103[]			= { 2, 8, 18, 32, 32, 8, 3 };
const element_conf_t ElementConfiguration103 =
{
	"Lr",	"lawrencium",
	103,	0,	17,	7,
	0,	0,
	0,	0,
	0,	1.3,
	0,
	6,
	18,	GenElectronConfigCount103,
	19,	ElectronConfigurationCount103,
	21,	ElectronSubshellCount103,
	7,	ElectronShellCount103
};

const short GenElectronConfigCount104[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 2 };
const short ElectronConfigurationCount104[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 2 };
const short ElectronSubshellCount104[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 0, 2, 6, 2, 0, 2 };
const short ElectronShellCount104[]			= { 2, 8, 18, 32, 32, 10, 2 };
const element_conf_t ElementConfiguration104 =
{
	"Rf",	"rutherfordium",
	104,	4,	18,	7,
	0,	0,
	0,	0,
	0,	0,
	0,
	7,
	18,	GenElectronConfigCount104,
	18,	ElectronConfigurationCount104,
	20,	ElectronSubshellCount104,
	7,	ElectronShellCount104
};

const short GenElectronConfigCount105[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 3 };
const short ElectronConfigurationCount105[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 3 };
const short ElectronSubshellCount105[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 0, 2, 6, 3, 0, 2 };
const short ElectronShellCount105[]			= { 2, 8, 18, 32, 32, 11, 2 };
const element_conf_t ElementConfiguration105 =
{
	"Db",	"dubnium",
	105,	5,	19,	7,
	0,	0,
	0,	0,
	0,	0,
	0,
	7,
	18,	GenElectronConfigCount105,
	18,	ElectronConfigurationCount105,
	20,	ElectronSubshellCount105,
	7,	ElectronShellCount105
};

const short GenElectronConfigCount106[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 4 };
const short ElectronConfigurationCount106[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 4 };
const short ElectronSubshellCount106[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 0, 2, 6, 4, 0, 2 };
const short ElectronShellCount106[]			= { 2, 8, 18, 32, 32, 12, 2 };
const element_conf_t ElementConfiguration106 =
{
	"Sg",	"seaborgium",
	106,	6,	20,	7,
	0,	0,
	0,	0,
	0,	0,
	0,
	7,
	18,	GenElectronConfigCount106,
	18,	ElectronConfigurationCount106,
	20,	ElectronSubshellCount106,
	7,	ElectronShellCount106
};

const short GenElectronConfigCount107[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 5 };
const short ElectronConfigurationCount107[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 5 };
const short ElectronSubshellCount107[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 0, 2, 6, 5, 0, 2 };
const short ElectronShellCount107[]			= { 2, 8, 18, 32, 32, 13, 2 };
const element_conf_t ElementConfiguration107 =
{
	"Bh",	"bohrium",
	107,	7,	21,	7,
	0,	0,
	0,	0,
	0,	0,
	0,
	7,
	18,	GenElectronConfigCount107,
	18,	ElectronConfigurationCount107,
	20,	ElectronSubshellCount107,
	7,	ElectronShellCount107
};

const short GenElectronConfigCount108[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 6 };
const short ElectronConfigurationCount108[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 6 };
const short ElectronSubshellCount108[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 0, 2, 6, 6, 0, 2 };
const short ElectronShellCount108[]			= { 2, 8, 18, 32, 32, 14, 2 };
const element_conf_t ElementConfiguration108 =
{
	"Hs",	"hassium",
	108,	8,	22,	7,
	0,	0,
	0,	0,
	0,	0,
	0,
	7,
	18,	GenElectronConfigCount108,
	18,	ElectronConfigurationCount108,
	20,	ElectronSubshellCount108,
	7,	ElectronShellCount108
};

const short GenElectronConfigCount109[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 7 };
const short ElectronConfigurationCount109[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 7 };
const short ElectronSubshellCount109[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 0, 2, 6, 7, 0, 2 };
const short ElectronShellCount109[]			= { 2, 8, 18, 32, 32, 15, 2 };
const element_conf_t ElementConfiguration109 =
{
	"Mt",	"meitnerium",
	109,	9,	23,	7,
	0,	0,
	0,	0,
	0,	0,
	0,
	2,
	18,	GenElectronConfigCount109,
	18,	ElectronConfigurationCount109,
	20,	ElectronSubshellCount109,
	7,	ElectronShellCount109
};

const short GenElectronConfigCount110[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 8 };
const short ElectronConfigurationCount110[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 8 };
const short ElectronSubshellCount110[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 0, 2, 6, 8, 0, 2 };
const short ElectronShellCount110[]			= { 2, 8, 18, 32, 32, 16, 2 };
const element_conf_t ElementConfiguration110 =
{
	"Ds",	"darmstadtium",
	110,	10,	24,	7,
	0,	0,
	0,	0,
	0,	0,
	0,
	2,
	18,	GenElectronConfigCount110,
	18,	ElectronConfigurationCount110,
	20,	ElectronSubshellCount110,
	7,	ElectronShellCount110
};

const short GenElectronConfigCount111[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 9 };
const short ElectronConfigurationCount111[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 9 };
const short ElectronSubshellCount111[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 0, 2, 6, 9, 0, 2 };
const short ElectronShellCount111[]			= { 2, 8, 18, 32, 32, 17, 2 };
const element_conf_t ElementConfiguration111 =
{
	"Rg",	"roentgenium",
	111,	11,	25,	7,
	0,	0,
	0,	0,
	0,	0,
	0,
	2,
	18,	GenElectronConfigCount111,
	18,	ElectronConfigurationCount111,
	20,	ElectronSubshellCount111,
	7,	ElectronShellCount111
};

const short GenElectronConfigCount112[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10 };
const short ElectronConfigurationCount112[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10 };
const short ElectronSubshellCount112[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 0, 2, 6, 10, 0, 2 };
const short ElectronShellCount112[]			= { 2, 8, 18, 32, 32, 18, 2 };
const element_conf_t ElementConfiguration112 =
{
	"Cn",	"copernicium",
	112,	12,	26,	7,
	0,	0,
	0,	0,
	0,	0,
	0,
	8,
	18,	GenElectronConfigCount112,
	18,	ElectronConfigurationCount112,
	20,	ElectronSubshellCount112,
	7,	ElectronShellCount112
};

const short GenElectronConfigCount113[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 1 };
const short ElectronConfigurationCount113[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 1 };
const short ElectronSubshellCount113[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 0, 2, 6, 10, 0, 2, 1 };
const short ElectronShellCount113[]			= { 2, 8, 18, 32, 32, 18, 3 };
const element_conf_t ElementConfiguration113 =
{
	"Nh",	"nihonium",
	113,	13,	27,	7,
	0,	0,
	0,	0,
	0,	0,
	0,
	2,
	19,	GenElectronConfigCount113,
	19,	ElectronConfigurationCount113,
	21,	ElectronSubshellCount113,
	7,	ElectronShellCount113
};

const short GenElectronConfigCount114[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 2 };
const short ElectronConfigurationCount114[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 2 };
const short ElectronSubshellCount114[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 0, 2, 6, 10, 0, 2, 2 };
const short ElectronShellCount114[]			= { 2, 8, 18, 32, 32, 18, 4 };
const element_conf_t ElementConfiguration114 =
{
	"Fl",	"flerovium",
	114,	14,	28,	7,
	0,	0,
	0,	0,
	0,	0,
	0,
	2,
	19,	GenElectronConfigCount114,
	19,	ElectronConfigurationCount114,
	21,	ElectronSubshellCount114,
	7,	ElectronShellCount114
};

const short GenElectronConfigCount115[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 3 };
const short ElectronConfigurationCount115[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 3 };
const short ElectronSubshellCount115[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 0, 2, 6, 10, 0, 2, 3 };
const short ElectronShellCount115[]			= { 2, 8, 18, 32, 32, 18, 5 };
const element_conf_t ElementConfiguration115 =
{
	"Mc",	"moscovium",
	115,	15,	29,	7,
	0,	0,
	0,	0,
	0,	0,
	0,
	2,
	19,	GenElectronConfigCount115,
	19,	ElectronConfigurationCount115,
	21,	ElectronSubshellCount115,
	7,	ElectronShellCount115
};

const short GenElectronConfigCount116[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 4 };
const short ElectronConfigurationCount116[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 4 };
const short ElectronSubshellCount116[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 0, 2, 6, 10, 0, 2, 4 };
const short ElectronShellCount116[]			= { 2, 8, 18, 32, 32, 18, 6 };
const element_conf_t ElementConfiguration116 =
{
	"Lv",	"livermorium",
	116,	16,	30,	7,
	0,	0,
	0,	0,
	0,	0,
	0,
	2,
	19,	GenElectronConfigCount116,
	19,	ElectronConfigurationCount116,
	21,	ElectronSubshellCount116,
	7,	ElectronShellCount116
};

const short GenElectronConfigCount117[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 5 };
const short ElectronConfigurationCount117[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 5 };
const short ElectronSubshellCount117[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 0, 2, 6, 10, 0, 2, 5 };
const short ElectronShellCount117[]			= { 2, 8, 18, 32, 32, 18, 7 };
const element_conf_t ElementConfiguration117 =
{
	"Ts",	"tennessine",
	117,	17,	31,	7,
	0,	0,
	0,	0,
	0,	0,
	0,
	2,
	19,	GenElectronConfigCount117,
	19,	ElectronConfigurationCount117,
	21,	ElectronSubshellCount117,
	7,	ElectronShellCount117
};

const short GenElectronConfigCount118[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6 };
const short ElectronConfigurationCount118[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6 };
const short ElectronSubshellCount118[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 0, 2, 6, 10, 0, 2, 6 };
const short ElectronShellCount118[]			= { 2, 8, 18, 32, 32, 18, 8 };
const element_conf_t ElementConfiguration118 =
{
	"Og",	"oganesson",
	118,	18,	32,	7,
	0,	0,
	0,	0,
	0,	0,
	0,
	2,
	19,	GenElectronConfigCount118,
	19,	ElectronConfigurationCount118,
	21,	ElectronSubshellCount118,
	7,	ElectronShellCount118
};

const short GenElectronConfigCount119[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 1 };
const short ElectronConfigurationCount119[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 1 };
const short ElectronSubshellCount119[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 0, 2, 6, 10, 0, 2, 6, 0, 1 };
const short ElectronShellCount119[]			= { 2, 8, 18, 32, 32, 18, 8, 1 };
const element_conf_t ElementConfiguration119 =
{
	"Uue",	"ununennium",
	119,	0,	0,	0,
	0,	0,
	0,	0,
	0,	0,
	0,
	0,
	20,	GenElectronConfigCount119,
	20,	ElectronConfigurationCount119,
	23,	ElectronSubshellCount119,
	8,	ElectronShellCount119
};

const short GenElectronConfigCount120[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2 };
const short ElectronConfigurationCount120[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2 };
const short ElectronSubshellCount120[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 0, 2, 6, 10, 0, 2, 6, 0, 2 };
const short ElectronShellCount120[]			= { 2, 8, 18, 32, 32, 18, 8, 2 };
const element_conf_t ElementConfiguration120 =
{
	"Ubn",	"unbinilium",
	120,	0,	0,	0,
	0,	0,
	0,	0,
	0,	0,
	0,
	0,
	20,	GenElectronConfigCount120,
	20,	ElectronConfigurationCount120,
	23,	ElectronSubshellCount120,
	8,	ElectronShellCount120
};

const short GenElectronConfigCount121[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 1 };
const short ElectronConfigurationCount121[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 0, 0, 0, 1 };
const short ElectronSubshellCount121[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 0, 2, 6, 10, 0, 2, 6, 0, 2, 1 };
const short ElectronShellCount121[]			= { 2, 8, 18, 32, 32, 18, 8, 3 };
const element_conf_t ElementConfiguration121 =
{
	"Ubu",	"unbiunium",
	121,	0,	0,	0,
	0,	0,
	0,	0,
	0,	0,
	0,
	0,
	21,	GenElectronConfigCount121,
	24,	ElectronConfigurationCount121,
	24,	ElectronSubshellCount121,
	8,	ElectronShellCount121
};

const short GenElectronConfigCount122[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 2 };
const short ElectronConfigurationCount122[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 0, 0, 1, 1 };
const short ElectronSubshellCount122[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 0, 2, 6, 10, 0, 2, 6, 1, 2, 1 };
const short ElectronShellCount122[]			= { 2, 8, 18, 32, 32, 18, 9, 3 };
const element_conf_t ElementConfiguration122 =
{
	"Ubb",	"unbibium",
	122,	0,	0,	0,
	0,	0,
	0,	0,
	0,	0,
	0,
	0,
	21,	GenElectronConfigCount122,
	24,	ElectronConfigurationCount122,
	24,	ElectronSubshellCount122,
	8,	ElectronShellCount122
};

const short GenElectronConfigCount123[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 3 };
const short ElectronConfigurationCount123[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 0, 1, 1, 1 };
const short ElectronSubshellCount123[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 0, 2, 6, 10, 1, 2, 6, 1, 2, 1 };
const short ElectronShellCount123[]			= { 2, 8, 18, 32, 32, 19, 9, 3 };
const element_conf_t ElementConfiguration123 =
{
	"Ubt",	"unbitrium",
	123,	0,	0,	0,
	0,	0,
	0,	0,
	0,	0,
	0,
	0,
	21,	GenElectronConfigCount123,
	24,	ElectronConfigurationCount123,
	24,	ElectronSubshellCount123,
	8,	ElectronShellCount123
};

const short GenElectronConfigCount124[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 4 };
const short ElectronConfigurationCount124[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 0, 3, 0, 1 };
const short ElectronSubshellCount124[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 0, 2, 6, 10, 3, 2, 6, 0, 2, 1 };
const short ElectronShellCount124[]			= { 2, 8, 18, 32, 32, 21, 8, 3 };
const element_conf_t ElementConfiguration124 =
{
	"Ubq",	"unbiquadium",
	124,	0,	0,	0,
	0,	0,
	0,	0,
	0,	0,
	0,
	0,
	21,	GenElectronConfigCount124,
	24,	ElectronConfigurationCount124,
	24,	ElectronSubshellCount124,
	8,	ElectronShellCount124
};

const short GenElectronConfigCount125[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 5 };
const short ElectronConfigurationCount125[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 1, 3, 0, 1 };
const short ElectronSubshellCount125[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 1, 2, 6, 10, 3, 2, 6, 0, 2, 1 };
const short ElectronShellCount125[]			= { 2, 8, 18, 32, 33, 21, 8, 3 };
const element_conf_t ElementConfiguration125 =
{
	"Ubp",	"unbipentium",
	125,	0,	0,	0,
	0,	0,
	0,	0,
	0,	0,
	0,
	0,
	21,	GenElectronConfigCount125,
	24,	ElectronConfigurationCount125,
	24,	ElectronSubshellCount125,
	8,	ElectronShellCount125
};

const short GenElectronConfigCount126[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 6 };
const short ElectronConfigurationCount126[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 2, 2, 1, 1 };
const short ElectronSubshellCount126[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 2, 2, 6, 10, 2, 2, 6, 1, 2, 1 };
const short ElectronShellCount126[]			= { 2, 8, 18, 32, 34, 20, 9, 3 };
const element_conf_t ElementConfiguration126 =
{
	"Ubh",	"unbihexium",
	126,	0,	0,	0,
	0,	0,
	0,	0,
	0,	0,
	0,
	0,
	21,	GenElectronConfigCount126,
	24,	ElectronConfigurationCount126,
	24,	ElectronSubshellCount126,
	8,	ElectronShellCount126
};

const short GenElectronConfigCount127[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 7 };
const short ElectronConfigurationCount127[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 3, 2, 0, 2 };
const short ElectronSubshellCount127[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 3, 2, 6, 10, 2, 2, 6, 0, 2, 2 };
const short ElectronShellCount127[]			= { 2, 8, 18, 32, 35, 20, 8, 4 };
const element_conf_t ElementConfiguration127 =
{
	"Ubs",	"unbiseptium",
	127,	0,	0,	0,
	0,	0,
	0,	0,
	0,	0,
	0,
	0,
	21,	GenElectronConfigCount127,
	24,	ElectronConfigurationCount127,
	24,	ElectronSubshellCount127,
	8,	ElectronShellCount127
};

const short GenElectronConfigCount128[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 8 };
const short ElectronConfigurationCount128[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 4, 2, 0, 2 };
const short ElectronSubshellCount128[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 4, 2, 6, 10, 2, 2, 6, 0, 2, 2 };
const short ElectronShellCount128[]			= { 2, 8, 18, 32, 36, 20, 8, 4 };
const element_conf_t ElementConfiguration128 =
{
	"Ubo",	"unbioctium",
	128,	0,	0,	0,
	0,	0,
	0,	0,
	0,	0,
	0,
	0,
	21,	GenElectronConfigCount128,
	24,	ElectronConfigurationCount128,
	24,	ElectronSubshellCount128,
	8,	ElectronShellCount128
};

const short GenElectronConfigCount129[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 9 };
const short ElectronConfigurationCount129[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 5, 2, 0, 2 };
const short ElectronSubshellCount129[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 5, 2, 6, 10, 2, 2, 6, 0, 2, 2 };
const short ElectronShellCount129[]			= { 2, 8, 18, 32, 37, 20, 8, 4 };
const element_conf_t ElementConfiguration129 =
{
	"Ube",	"unbiennium",
	129,	0,	0,	0,
	0,	0,
	0,	0,
	0,	0,
	0,
	0,
	21,	GenElectronConfigCount129,
	24,	ElectronConfigurationCount129,
	24,	ElectronSubshellCount129,
	8,	ElectronShellCount129
};

const short GenElectronConfigCount130[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 10 };
const short ElectronConfigurationCount130[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 6, 2, 0, 2 };
const short ElectronSubshellCount130[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 6, 2, 6, 10, 2, 2, 6, 0, 2, 2 };
const short ElectronShellCount130[]			= { 2, 8, 18, 32, 38, 20, 8, 4 };
const element_conf_t ElementConfiguration130 =
{
	"Utn",	"untrinilium",
	130,	0,	0,	0,
	0,	0,
	0,	0,
	0,	0,
	0,
	0,
	21,	GenElectronConfigCount130,
	24,	ElectronConfigurationCount130,
	24,	ElectronSubshellCount130,
	8,	ElectronShellCount130
};

const short GenElectronConfigCount131[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 11 };
const short ElectronConfigurationCount131[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 7, 2, 0, 2 };
const short ElectronSubshellCount131[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 7, 2, 6, 10, 2, 2, 6, 0, 2, 2 };
const short ElectronShellCount131[]			= { 2, 8, 18, 32, 39, 20, 8, 4 };
const element_conf_t ElementConfiguration131 =
{
	"Utu",	"untriunium",
	131,	0,	0,	0,
	0,	0,
	0,	0,
	0,	0,
	0,
	0,
	21,	GenElectronConfigCount131,
	24,	ElectronConfigurationCount131,
	24,	ElectronSubshellCount131,
	8,	ElectronShellCount131
};

const short GenElectronConfigCount132[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 12 };
const short ElectronConfigurationCount132[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 8, 2, 0, 2 };
const short ElectronSubshellCount132[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 8, 2, 6, 10, 2, 2, 6, 0, 2, 2 };
const short ElectronShellCount132[]			= { 2, 8, 18, 32, 40, 20, 8, 4 };
const element_conf_t ElementConfiguration132 =
{
	"Utb",	"untribium",
	132,	0,	0,	0,
	0,	0,
	0,	0,
	0,	0,
	0,
	0,
	21,	GenElectronConfigCount132,
	24,	ElectronConfigurationCount132,
	24,	ElectronSubshellCount132,
	8,	ElectronShellCount132
};

const short GenElectronConfigCount133[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 13 };
const short ElectronConfigurationCount133[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 8, 3, 0, 2 };
const short ElectronSubshellCount133[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 8, 2, 6, 10, 3, 2, 6, 0, 2, 2 };
const short ElectronShellCount133[]			= { 2, 8, 18, 32, 40, 21, 8, 4 };
const element_conf_t ElementConfiguration133 =
{
	"Utt",	"untritrium",
	133,	0,	0,	0,
	0,	0,
	0,	0,
	0,	0,
	0,
	0,
	21,	GenElectronConfigCount133,
	24,	ElectronConfigurationCount133,
	24,	ElectronSubshellCount133,
	8,	ElectronShellCount133
};

const short GenElectronConfigCount134[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 14 };
const short ElectronConfigurationCount134[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 8, 4, 0, 2 };
const short ElectronSubshellCount134[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 8, 2, 6, 10, 4, 2, 6, 0, 2, 2 };
const short ElectronShellCount134[]			= { 2, 8, 18, 32, 40, 22, 8, 4 };
const element_conf_t ElementConfiguration134 =
{
	"Utq",	"untriquadium",
	134,	0,	0,	0,
	0,	0,
	0,	0,
	0,	0,
	0,
	0,
	21,	GenElectronConfigCount134,
	24,	ElectronConfigurationCount134,
	24,	ElectronSubshellCount134,
	8,	ElectronShellCount134
};

const short GenElectronConfigCount135[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 15 };
const short ElectronConfigurationCount135[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 9, 4, 0, 2 };
const short ElectronSubshellCount135[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 9, 2, 6, 10, 4, 2, 6, 0, 2, 2 };
const short ElectronShellCount135[]			= { 2, 8, 18, 32, 41, 22, 8, 4 };
const element_conf_t ElementConfiguration135 =
{
	"Utp",	"untripentium",
	135,	0,	0,	0,
	0,	0,
	0,	0,
	0,	0,
	0,
	0,
	21,	GenElectronConfigCount135,
	24,	ElectronConfigurationCount135,
	24,	ElectronSubshellCount135,
	8,	ElectronShellCount135
};

const short GenElectronConfigCount136[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 16 };
const short ElectronConfigurationCount136[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 10, 4, 0, 2 };
const short ElectronSubshellCount136[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 10, 2, 6, 10, 4, 2, 6, 0, 2, 2 };
const short ElectronShellCount136[]			= { 2, 8, 18, 32, 42, 22, 8, 4 };
const element_conf_t ElementConfiguration136 =
{
	"Uth",	"untrihexium",
	136,	0,	0,	0,
	0,	0,
	0,	0,
	0,	0,
	0,
	0,
	21,	GenElectronConfigCount136,
	24,	ElectronConfigurationCount136,
	24,	ElectronSubshellCount136,
	8,	ElectronShellCount136
};

const short GenElectronConfigCount137[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 17 };
const short ElectronConfigurationCount137[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 11, 3, 1, 2 };
const short ElectronSubshellCount137[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 11, 2, 6, 10, 3, 2, 6, 1, 2, 2 };
const short ElectronShellCount137[]			= { 2, 8, 18, 32, 43, 21, 9, 4 };
const element_conf_t ElementConfiguration137 =
{
	"Uts",	"untriseptium",
	137,	0,	0,	0,
	0,	0,
	0,	0,
	0,	0,
	0,
	0,
	21,	GenElectronConfigCount137,
	24,	ElectronConfigurationCount137,
	24,	ElectronSubshellCount137,
	8,	ElectronShellCount137
};

const short GenElectronConfigCount138[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 18 };
const short ElectronConfigurationCount138[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 12, 3, 1, 2 };
const short ElectronSubshellCount138[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 12, 2, 6, 10, 3, 2, 6, 1, 2, 2 };
const short ElectronShellCount138[]			= { 2, 8, 18, 32, 44, 21, 9, 4 };
const element_conf_t ElementConfiguration138 =
{
	"Uto",	"untrioctium",
	138,	0,	0,	0,
	0,	0,
	0,	0,
	0,	0,
	0,
	0,
	21,	GenElectronConfigCount138,
	24,	ElectronConfigurationCount138,
	24,	ElectronSubshellCount138,
	8,	ElectronShellCount138
};

const short GenElectronConfigCount139[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 18, 1 };
const short ElectronConfigurationCount139[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 13, 2, 2, 2 };
const short ElectronSubshellCount139[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 13, 2, 6, 10, 2, 2, 6, 2, 2, 2 };
const short ElectronShellCount139[]			= { 2, 8, 18, 32, 45, 20, 10, 4 };
const element_conf_t ElementConfiguration139 =
{
	"Ute",	"untriennium",
	139,	0,	0,	0,
	0,	0,
	0,	0,
	0,	0,
	0,
	0,
	22,	GenElectronConfigCount139,
	24,	ElectronConfigurationCount139,
	24,	ElectronSubshellCount139,
	8,	ElectronShellCount139
};

const short GenElectronConfigCount140[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 18, 2 };
const short ElectronConfigurationCount140[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 14, 3, 1, 2 };
const short ElectronSubshellCount140[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 14, 2, 6, 10, 3, 2, 6, 1, 2, 2 };
const short ElectronShellCount140[]			= { 2, 8, 18, 32, 46, 21, 9, 4 };
const element_conf_t ElementConfiguration140 =
{
	"Uqn",	"unquadnilium",
	140,	0,	0,	0,
	0,	0,
	0,	0,
	0,	0,
	0,
	0,
	22,	GenElectronConfigCount140,
	24,	ElectronConfigurationCount140,
	24,	ElectronSubshellCount140,
	8,	ElectronShellCount140
};

const short GenElectronConfigCount141[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 18, 3 };
const short ElectronConfigurationCount141[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 15, 2, 2, 2 };
const short ElectronSubshellCount141[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 15, 2, 6, 10, 2, 2, 6, 2, 2, 2 };
const short ElectronShellCount141[]			= { 2, 8, 18, 32, 47, 20, 10, 4 };
const element_conf_t ElementConfiguration141 =
{
	"Uqu",	"unquadunium",
	141,	0,	0,	0,
	0,	0,
	0,	0,
	0,	0,
	0,
	0,
	22,	GenElectronConfigCount141,
	24,	ElectronConfigurationCount141,
	24,	ElectronSubshellCount141,
	8,	ElectronShellCount141
};

const short GenElectronConfigCount142[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 18, 4 };
const short ElectronConfigurationCount142[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 16, 2, 2, 2 };
const short ElectronSubshellCount142[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 16, 2, 6, 10, 2, 2, 6, 2, 2, 2 };
const short ElectronShellCount142[]			= { 2, 8, 18, 32, 48, 20, 10, 4 };
const element_conf_t ElementConfiguration142 =
{
	"Uqb",	"unquadbium",
	142,	0,	0,	0,
	0,	0,
	0,	0,
	0,	0,
	0,
	0,
	22,	GenElectronConfigCount142,
	24,	ElectronConfigurationCount142,
	24,	ElectronSubshellCount142,
	8,	ElectronShellCount142
};

const short GenElectronConfigCount143[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 18, 5 };
const short ElectronConfigurationCount143[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 17, 2, 2, 2 };
const short ElectronSubshellCount143[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 17, 2, 6, 10, 2, 2, 6, 2, 2, 2 };
const short ElectronShellCount143[]			= { 2, 8, 18, 32, 49, 20, 10, 4 };
const element_conf_t ElementConfiguration143 =
{
	"Uqt",	"unquadtrium",
	143,	0,	0,	0,
	0,	0,
	0,	0,
	0,	0,
	0,
	0,
	22,	GenElectronConfigCount143,
	24,	ElectronConfigurationCount143,
	24,	ElectronSubshellCount143,
	8,	ElectronShellCount143
};

const short GenElectronConfigCount144[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 18, 6 };
const short ElectronConfigurationCount144[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 18, 1, 3, 2 };
const short ElectronSubshellCount144[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 18, 2, 6, 10, 1, 2, 6, 3, 2, 2 };
const short ElectronShellCount144[]			= { 2, 8, 18, 32, 50, 19, 11, 4 };
const element_conf_t ElementConfiguration144 =
{
	"Uqq",	"unquadquadium",
	144,	0,	0,	0,
	0,	0,
	0,	0,
	0,	0,
	0,
	0,
	22,	GenElectronConfigCount144,
	24,	ElectronConfigurationCount144,
	24,	ElectronSubshellCount144,
	8,	ElectronShellCount144
};

const short GenElectronConfigCount145[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 18, 7 };
const short ElectronConfigurationCount145[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 18, 3, 2, 2 };
const short ElectronSubshellCount145[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 18, 2, 6, 10, 3, 2, 6, 2, 2, 2 };
const short ElectronShellCount145[]			= { 2, 8, 18, 32, 50, 21, 10, 4 };
const element_conf_t ElementConfiguration145 =
{
	"Uqp",	"unquadpentium",
	145,	0,	0,	0,
	0,	0,
	0,	0,
	0,	0,
	0,
	0,
	22,	GenElectronConfigCount145,
	24,	ElectronConfigurationCount145,
	24,	ElectronSubshellCount145,
	8,	ElectronShellCount145
};

const short GenElectronConfigCount146[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 18, 8 };
const short ElectronConfigurationCount146[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 18, 4, 2, 2 };
const short ElectronSubshellCount146[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 18, 2, 6, 10, 4, 2, 6, 2, 2, 2 };
const short ElectronShellCount146[]			= { 2, 8, 18, 32, 50, 22, 10, 4 };
const element_conf_t ElementConfiguration146 =
{
	"Uqh",	"unquadhexium",
	146,	0,	0,	0,
	0,	0,
	0,	0,
	0,	0,
	0,
	0,
	22,	GenElectronConfigCount146,
	24,	ElectronConfigurationCount146,
	24,	ElectronSubshellCount146,
	8,	ElectronShellCount146
};

const short GenElectronConfigCount147[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 18, 9 };
const short ElectronConfigurationCount147[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 18, 5, 2, 2 };
const short ElectronSubshellCount147[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 18, 2, 6, 10, 5, 2, 6, 2, 2, 2 };
const short ElectronShellCount147[]			= { 2, 8, 18, 32, 50, 23, 10, 4 };
const element_conf_t ElementConfiguration147 =
{
	"Uqs",	"unquadseptium",
	147,	0,	0,	0,
	0,	0,
	0,	0,
	0,	0,
	0,
	0,
	22,	GenElectronConfigCount147,
	24,	ElectronConfigurationCount147,
	24,	ElectronSubshellCount147,
	8,	ElectronShellCount147
};

const short GenElectronConfigCount148[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 18, 10 };
const short ElectronConfigurationCount148[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 18, 6, 2, 2 };
const short ElectronSubshellCount148[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 18, 2, 6, 10, 6, 2, 6, 2, 2, 2 };
const short ElectronShellCount148[]			= { 2, 8, 18, 32, 50, 24, 10, 4 };
const element_conf_t ElementConfiguration148 =
{
	"Uqo",	"unquadoctium",
	148,	0,	0,	0,
	0,	0,
	0,	0,
	0,	0,
	0,
	0,
	22,	GenElectronConfigCount148,
	24,	ElectronConfigurationCount148,
	24,	ElectronSubshellCount148,
	8,	ElectronShellCount148
};

const short GenElectronConfigCount149[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 18, 11 };
const short ElectronConfigurationCount149[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 18, 6, 3, 2 };
const short ElectronSubshellCount149[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 18, 2, 6, 10, 6, 2, 6, 3, 2, 2 };
const short ElectronShellCount149[]			= { 2, 8, 18, 32, 50, 24, 11, 4 };
const element_conf_t ElementConfiguration149 =
{
	"Uqe",	"unquadennium",
	149,	0,	0,	0,
	0,	0,
	0,	0,
	0,	0,
	0,
	0,
	22,	GenElectronConfigCount149,
	24,	ElectronConfigurationCount149,
	24,	ElectronSubshellCount149,
	8,	ElectronShellCount149
};

const short GenElectronConfigCount150[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 18, 12 };
const short ElectronConfigurationCount150[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 18, 6, 4, 2 };
const short ElectronSubshellCount150[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 18, 2, 6, 10, 6, 2, 6, 4, 2, 2 };
const short ElectronShellCount150[]			= { 2, 8, 18, 32, 50, 24, 12, 4 };
const element_conf_t ElementConfiguration150 =
{
	"Upn",	"unpentnilium",
	150,	0,	0,	0,
	0,	0,
	0,	0,
	0,	0,
	0,
	0,
	22,	GenElectronConfigCount150,
	24,	ElectronConfigurationCount150,
	24,	ElectronSubshellCount150,
	8,	ElectronShellCount150
};

const short GenElectronConfigCount151[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 18, 13 };
const short ElectronConfigurationCount151[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 18, 8, 3, 2 };
const short ElectronSubshellCount151[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 18, 2, 6, 10, 8, 2, 6, 3, 2, 2 };
const short ElectronShellCount151[]			= { 2, 8, 18, 32, 50, 26, 11, 4 };
const element_conf_t ElementConfiguration151 =
{
	"Upu",	"unpentunium",
	151,	0,	0,	0,
	0,	0,
	0,	0,
	0,	0,
	0,
	0,
	22,	GenElectronConfigCount151,
	24,	ElectronConfigurationCount151,
	24,	ElectronSubshellCount151,
	8,	ElectronShellCount151
};

const short GenElectronConfigCount152[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 18, 14 };
const short ElectronConfigurationCount152[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 18, 9, 3, 2 };
const short ElectronSubshellCount152[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 18, 2, 6, 10, 9, 2, 6, 3, 2, 2 };
const short ElectronShellCount152[]			= { 2, 8, 18, 32, 50, 27, 11, 4 };
const element_conf_t ElementConfiguration152 =
{
	"Upb",	"unpentbium",
	152,	0,	0,	0,
	0,	0,
	0,	0,
	0,	0,
	0,
	0,
	22,	GenElectronConfigCount152,
	24,	ElectronConfigurationCount152,
	24,	ElectronSubshellCount152,
	8,	ElectronShellCount152
};

const short GenElectronConfigCount153[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 18, 14, 1 };
const short ElectronConfigurationCount153[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 18, 11, 2, 2 };
const short ElectronSubshellCount153[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 18, 2, 6, 10, 11, 2, 6, 2, 2, 2 };
const short ElectronShellCount153[]			= { 2, 8, 18, 32, 50, 29, 10, 4 };
const element_conf_t ElementConfiguration153 =
{
	"Upt",	"unpenttrium",
	153,	0,	0,	0,
	0,	0,
	0,	0,
	0,	0,
	0,
	0,
	23,	GenElectronConfigCount153,
	24,	ElectronConfigurationCount153,
	24,	ElectronSubshellCount153,
	8,	ElectronShellCount153
};

const short GenElectronConfigCount154[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 18, 14, 2 };
const short ElectronConfigurationCount154[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 18, 12, 2, 2 };
const short ElectronSubshellCount154[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 18, 2, 6, 10, 12, 2, 6, 2, 2, 2 };
const short ElectronShellCount154[]			= { 2, 8, 18, 32, 50, 30, 10, 4 };
const element_conf_t ElementConfiguration154 =
{
	"Upq",	"unpentquadium",
	154,	0,	0,	0,
	0,	0,
	0,	0,
	0,	0,
	0,
	0,
	23,	GenElectronConfigCount154,
	24,	ElectronConfigurationCount154,
	24,	ElectronSubshellCount154,
	8,	ElectronShellCount154
};

const short GenElectronConfigCount155[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 18, 14, 3 };
const short ElectronConfigurationCount155[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 18, 13, 2, 2 };
const short ElectronSubshellCount155[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 18, 2, 6, 10, 13, 2, 6, 2, 2, 2 };
const short ElectronShellCount155[]			= { 2, 8, 18, 32, 50, 31, 10, 4 };
const element_conf_t ElementConfiguration155 =
{
	"Upp",	"unpentpentium",
	155,	0,	0,	0,
	0,	0,
	0,	0,
	0,	0,
	0,
	0,
	23,	GenElectronConfigCount155,
	24,	ElectronConfigurationCount155,
	24,	ElectronSubshellCount155,
	8,	ElectronShellCount155
};

const short GenElectronConfigCount156[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 18, 14, 4 };
const short ElectronConfigurationCount156[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 18, 14, 2, 2 };
const short ElectronSubshellCount156[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 18, 2, 6, 10, 14, 2, 6, 2, 2, 2 };
const short ElectronShellCount156[]			= { 2, 8, 18, 32, 50, 32, 10, 4 };
const element_conf_t ElementConfiguration156 =
{
	"Uph",	"unpenthexium",
	156,	0,	0,	0,
	0,	0,
	0,	0,
	0,	0,
	0,
	0,
	23,	GenElectronConfigCount156,
	24,	ElectronConfigurationCount156,
	24,	ElectronSubshellCount156,
	8,	ElectronShellCount156
};

const short GenElectronConfigCount157[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 18, 14, 5 };
const short ElectronConfigurationCount157[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 18, 14, 3, 2 };
const short ElectronSubshellCount157[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 18, 2, 6, 10, 14, 2, 6, 3, 2, 2 };
const short ElectronShellCount157[]			= { 2, 8, 18, 32, 50, 32, 11, 4 };
const element_conf_t ElementConfiguration157 =
{
	"Ups",	"unpentseptium",
	157,	0,	0,	0,
	0,	0,
	0,	0,
	0,	0,
	0,
	0,
	23,	GenElectronConfigCount157,
	24,	ElectronConfigurationCount157,
	24,	ElectronSubshellCount157,
	8,	ElectronShellCount157
};

const short GenElectronConfigCount158[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 18, 14, 6 };
const short ElectronConfigurationCount158[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 18, 14, 4, 2 };
const short ElectronSubshellCount158[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 18, 2, 6, 10, 14, 2, 6, 4, 2, 2 };
const short ElectronShellCount158[]			= { 2, 8, 18, 32, 50, 32, 12, 4 };
const element_conf_t ElementConfiguration158 =
{
	"Upo",	"unpentoctium",
	158,	0,	0,	0,
	0,	0,
	0,	0,
	0,	0,
	0,
	0,
	23,	GenElectronConfigCount158,
	24,	ElectronConfigurationCount158,
	24,	ElectronSubshellCount158,
	8,	ElectronShellCount158
};

const short GenElectronConfigCount159[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 18, 14, 7 };
const short ElectronConfigurationCount159[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 18, 14, 4, 2, 1 };
const short ElectronSubshellCount159[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 18, 2, 6, 10, 14, 2, 6, 4, 2, 2, 1 };
const short ElectronShellCount159[]			= { 2, 8, 18, 32, 50, 32, 12, 4, 1 };
const element_conf_t ElementConfiguration159 =
{
	"Upe",	"unpentennium",
	159,	0,	0,	0,
	0,	0,
	0,	0,
	0,	0,
	0,
	0,
	23,	GenElectronConfigCount159,
	25,	ElectronConfigurationCount159,
	25,	ElectronSubshellCount159,
	9,	ElectronShellCount159
};

const short GenElectronConfigCount160[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 18, 14, 8 };
const short ElectronConfigurationCount160[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 18, 14, 5, 2, 1 };
const short ElectronSubshellCount160[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 18, 2, 6, 10, 14, 2, 6, 5, 2, 2, 1 };
const short ElectronShellCount160[]			= { 2, 8, 18, 32, 50, 32, 13, 4, 1 };
const element_conf_t ElementConfiguration160 =
{
	"Uhn",	"unhexnilium",
	160,	0,	0,	0,
	0,	0,
	0,	0,
	0,	0,
	0,
	0,
	23,	GenElectronConfigCount160,
	25,	ElectronConfigurationCount160,
	25,	ElectronSubshellCount160,
	9,	ElectronShellCount160
};

const short GenElectronConfigCount161[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 18, 14, 9 };
const short ElectronConfigurationCount161[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 18, 14, 6, 2, 1 };
const short ElectronSubshellCount161[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 18, 2, 6, 10, 14, 2, 6, 6, 2, 2, 1 };
const short ElectronShellCount161[]			= { 2, 8, 18, 32, 50, 32, 14, 4, 1 };
const element_conf_t ElementConfiguration161 =
{
	"Uhu",	"unhexunium",
	161,	0,	0,	0,
	0,	0,
	0,	0,
	0,	0,
	0,
	0,
	23,	GenElectronConfigCount161,
	25,	ElectronConfigurationCount161,
	25,	ElectronSubshellCount161,
	9,	ElectronShellCount161
};

const short GenElectronConfigCount162[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 18, 14, 10 };
const short ElectronConfigurationCount162[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 18, 14, 8, 2 };
const short ElectronSubshellCount162[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 18, 2, 6, 10, 14, 2, 6, 8, 2, 2 };
const short ElectronShellCount162[]			= { 2, 8, 18, 32, 50, 32, 16, 4 };
const element_conf_t ElementConfiguration162 =
{
	"Uhb",	"unhexbium",
	162,	0,	0,	0,
	0,	0,
	0,	0,
	0,	0,
	0,
	0,
	23,	GenElectronConfigCount162,
	24,	ElectronConfigurationCount162,
	24,	ElectronSubshellCount162,
	8,	ElectronShellCount162
};

const short GenElectronConfigCount163[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 18, 14, 10, 1 };
const short ElectronConfigurationCount163[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 18, 14, 9, 2 };
const short ElectronSubshellCount163[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 18, 2, 6, 10, 14, 2, 6, 9, 2, 2 };
const short ElectronShellCount163[]			= { 2, 8, 18, 32, 50, 32, 17, 4 };
const element_conf_t ElementConfiguration163 =
{
	"Uht",	"unhextrium",
	163,	0,	0,	0,
	0,	0,
	0,	0,
	0,	0,
	0,
	0,
	24,	GenElectronConfigCount163,
	24,	ElectronConfigurationCount163,
	24,	ElectronSubshellCount163,
	8,	ElectronShellCount163
};

const short GenElectronConfigCount164[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 18, 14, 10, 2 };
const short ElectronConfigurationCount164[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 18, 14, 10, 2 };
const short ElectronSubshellCount164[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 18, 2, 6, 10, 14, 2, 6, 10, 2, 2 };
const short ElectronShellCount164[]			= { 2, 8, 18, 32, 50, 32, 18, 4 };
const element_conf_t ElementConfiguration164 =
{
	"Uhq",	"unhexquadium",
	164,	0,	0,	0,
	0,	0,
	0,	0,
	0,	0,
	0,
	0,
	24,	GenElectronConfigCount164,
	24,	ElectronConfigurationCount164,
	24,	ElectronSubshellCount164,
	8,	ElectronShellCount164
};

const short GenElectronConfigCount165[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 18, 14, 10, 3 };
const short ElectronConfigurationCount165[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 18, 14, 10, 2, 1 };
const short ElectronSubshellCount165[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 18, 2, 6, 10, 14, 2, 6, 10, 2, 2, 1 };
const short ElectronShellCount165[]			= { 2, 8, 18, 32, 50, 32, 18, 4, 1 };
const element_conf_t ElementConfiguration165 =
{
	"Uhp",	"unhexpentium",
	165,	0,	0,	0,
	0,	0,
	0,	0,
	0,	0,
	0,
	0,
	24,	GenElectronConfigCount165,
	25,	ElectronConfigurationCount165,
	25,	ElectronSubshellCount165,
	9,	ElectronShellCount165
};

const short GenElectronConfigCount166[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 18, 14, 10, 4 };
const short ElectronConfigurationCount166[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 18, 14, 10, 2, 2 };
const short ElectronSubshellCount166[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 18, 2, 6, 10, 14, 2, 6, 10, 2, 2, 2 };
const short ElectronShellCount166[]			= { 2, 8, 18, 32, 50, 32, 18, 4, 2 };
const element_conf_t ElementConfiguration166 =
{
	"Uhh",	"unhexhexium",
	166,	0,	0,	0,
	0,	0,
	0,	0,
	0,	0,
	0,
	0,
	24,	GenElectronConfigCount166,
	25,	ElectronConfigurationCount166,
	25,	ElectronSubshellCount166,
	9,	ElectronShellCount166
};

const short GenElectronConfigCount167[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 18, 14, 10, 5 };
const short ElectronConfigurationCount167[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 18, 14, 10, 2, 2, 0, 0, 0, 1 };
const short ElectronSubshellCount167[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 18, 2, 6, 10, 14, 2, 6, 10, 2, 2, 2, 1 };
const short ElectronShellCount167[]			= { 2, 8, 18, 32, 50, 32, 18, 4, 3 };
const element_conf_t ElementConfiguration167 =
{
	"Uhs",	"unhexseptium",
	167,	0,	0,	0,
	0,	0,
	0,	0,
	0,	0,
	0,
	0,
	24,	GenElectronConfigCount167,
	29,	ElectronConfigurationCount167,
	26,	ElectronSubshellCount167,
	9,	ElectronShellCount167
};

const short GenElectronConfigCount168[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 18, 14, 10, 6 };
const short ElectronConfigurationCount168[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 18, 14, 10, 2, 2, 0, 0, 0, 2 };
const short ElectronSubshellCount168[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 18, 2, 6, 10, 14, 2, 6, 10, 2, 2, 2, 2 };
const short ElectronShellCount168[]			= { 2, 8, 18, 32, 50, 32, 18, 4, 4 };
const element_conf_t ElementConfiguration168 =
{
	"Uho",	"unhexoctium",
	168,	0,	0,	0,
	0,	0,
	0,	0,
	0,	0,
	0,
	0,
	24,	GenElectronConfigCount168,
	29,	ElectronConfigurationCount168,
	26,	ElectronSubshellCount168,
	9,	ElectronShellCount168
};

const short GenElectronConfigCount169[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 18, 14, 10, 6, 1 };
const short ElectronConfigurationCount169[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 18, 14, 10, 3, 2, 0, 0, 0, 2 };
const short ElectronSubshellCount169[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 18, 2, 6, 10, 14, 2, 6, 10, 2, 3, 2, 2 };
const short ElectronShellCount169[]			= { 2, 8, 18, 32, 50, 32, 18, 5, 4 };
const element_conf_t ElementConfiguration169 =
{
	"Uhe",	"unhexennium",
	169,	0,	0,	0,
	0,	0,
	0,	0,
	0,	0,
	0,
	0,
	25,	GenElectronConfigCount169,
	29,	ElectronConfigurationCount169,
	26,	ElectronSubshellCount169,
	9,	ElectronShellCount169
};

const short GenElectronConfigCount170[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 18, 14, 10, 6, 2 };
const short ElectronConfigurationCount170[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 18, 14, 10, 4, 2, 0, 0, 0, 2 };
const short ElectronSubshellCount170[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 18, 2, 6, 10, 14, 2, 6, 10, 2, 4, 2, 2 };
const short ElectronShellCount170[]			= { 2, 8, 18, 32, 50, 32, 18, 6, 4 };
const element_conf_t ElementConfiguration170 =
{
	"Usn",	"unseptnilium",
	170,	0,	0,	0,
	0,	0,
	0,	0,
	0,	0,
	0,
	0,
	25,	GenElectronConfigCount170,
	29,	ElectronConfigurationCount170,
	26,	ElectronSubshellCount170,
	9,	ElectronShellCount170
};

const short GenElectronConfigCount171[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 18, 14, 10, 6, 2, 1 };
const short ElectronConfigurationCount171[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 18, 14, 10, 5, 2, 0, 0, 0, 2 };
const short ElectronSubshellCount171[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 18, 2, 6, 10, 14, 2, 6, 10, 2, 5, 2, 2 };
const short ElectronShellCount171[]			= { 2, 8, 18, 32, 50, 32, 18, 7, 4 };
const element_conf_t ElementConfiguration171 =
{
	"Usu",	"unseptunium",
	171,	0,	0,	0,
	0,	0,
	0,	0,
	0,	0,
	0,
	0,
	26,	GenElectronConfigCount171,
	29,	ElectronConfigurationCount171,
	26,	ElectronSubshellCount171,
	9,	ElectronShellCount171
};

const short GenElectronConfigCount172[]		= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 18, 14, 10, 6, 2, 2 };
const short ElectronConfigurationCount172[]	= { 2, 2, 6, 2, 6, 2, 10, 6, 2, 10, 6, 2, 14, 10, 6, 2, 14, 10, 6, 2, 18, 14, 10, 6, 2, 0, 0, 0, 2 };
const short ElectronSubshellCount172[]		= { 2, 2, 6, 2, 6, 10, 2, 6, 10, 14, 2, 6, 10, 14, 18, 2, 6, 10, 14, 2, 6, 10, 2, 6, 2, 2 };
const short ElectronShellCount172[]			= { 2, 8, 18, 32, 50, 32, 18, 8, 4 };
const element_conf_t ElementConfiguration172 =
{
	"Usb",	"unseptbium",
	172,	0,	0,	0,
	0,	0,
	0,	0,
	0,	0,
	0,
	0,
	26,	GenElectronConfigCount172,
	29,	ElectronConfigurationCount172,
	26,	ElectronSubshellCount172,
	9,	ElectronShellCount172
};

/* Element Configurations - index using Atomic number (1 to 172). */
const element_conf_t * ElementConfigurations[ELEMENT_ARRAY_SIZE] =
{
	0,
	& ElementConfiguration1,
	& ElementConfiguration2,
	& ElementConfiguration3,
	& ElementConfiguration4,
	& ElementConfiguration5,
	& ElementConfiguration6,
	& ElementConfiguration7,
	& ElementConfiguration8,
	& ElementConfiguration9,
	& ElementConfiguration10,
	& ElementConfiguration11,
	& ElementConfiguration12,
	& ElementConfiguration13,
	& ElementConfiguration14,
	& ElementConfiguration15,
	& ElementConfiguration16,
	& ElementConfiguration17,
	& ElementConfiguration18,
	& ElementConfiguration19,
	& ElementConfiguration20,
	& ElementConfiguration21,
	& ElementConfiguration22,
	& ElementConfiguration23,
	& ElementConfiguration24,
	& ElementConfiguration25,
	& ElementConfiguration26,
	& ElementConfiguration27,
	& ElementConfiguration28,
	& ElementConfiguration29,
	& ElementConfiguration30,
	& ElementConfiguration31,
	& ElementConfiguration32,
	& ElementConfiguration33,
	& ElementConfiguration34,
	& ElementConfiguration35,
	& ElementConfiguration36,
	& ElementConfiguration37,
	& ElementConfiguration38,
	& ElementConfiguration39,
	& ElementConfiguration40,
	& ElementConfiguration41,
	& ElementConfiguration42,
	& ElementConfiguration43,
	& ElementConfiguration44,
	& ElementConfiguration45,
	& ElementConfiguration46,
	& ElementConfiguration47,
	& ElementConfiguration48,
	& ElementConfiguration49,
	& ElementConfiguration50,
	& ElementConfiguration51,
	& ElementConfiguration52,
	& ElementConfiguration53,
	& ElementConfiguration54,
	& ElementConfiguration55,
	& ElementConfiguration56,
	& ElementConfiguration57,
	& ElementConfiguration58,
	& ElementConfiguration59,
	& ElementConfiguration60,
	& ElementConfiguration61,
	& ElementConfiguration62,
	& ElementConfiguration63,
	& ElementConfiguration64,
	& ElementConfiguration65,
	& ElementConfiguration66,
	& ElementConfiguration67,
	& ElementConfiguration68,
	& ElementConfiguration69,
	& ElementConfiguration70,
	& ElementConfiguration71,
	& ElementConfiguration72,
	& ElementConfiguration73,
	& ElementConfiguration74,
	& ElementConfiguration75,
	& ElementConfiguration76,
	& ElementConfiguration77,
	& ElementConfiguration78,
	& ElementConfiguration79,
	& ElementConfiguration80,
	& ElementConfiguration81,
	& ElementConfiguration82,
	& ElementConfiguration83,
	& ElementConfiguration84,
	& ElementConfiguration85,
	& ElementConfiguration86,
	& ElementConfiguration87,
	& ElementConfiguration88,
	& ElementConfiguration89,
	& ElementConfiguration90,
	& ElementConfiguration91,
	& ElementConfiguration92,
	& ElementConfiguration93,
	& ElementConfiguration94,
	& ElementConfiguration95,
	& ElementConfiguration96,
	& ElementConfiguration97,
	& ElementConfiguration98,
	& ElementConfiguration99,
	& ElementConfiguration100,
	& ElementConfiguration101,
	& ElementConfiguration102,
	& ElementConfiguration103,
	& ElementConfiguration104,
	& ElementConfiguration105,
	& ElementConfiguration106,
	& ElementConfiguration107,
	& ElementConfiguration108,
	& ElementConfiguration109,
	& ElementConfiguration110,
	& ElementConfiguration111,
	& ElementConfiguration112,
	& ElementConfiguration113,
	& ElementConfiguration114,
	& ElementConfiguration115,
	& ElementConfiguration116,
	& ElementConfiguration117,
	& ElementConfiguration118,
	& ElementConfiguration119,
	& ElementConfiguration120,
	& ElementConfiguration121,
	& ElementConfiguration122,
	& ElementConfiguration123,
	& ElementConfiguration124,
	& ElementConfiguration125,
	& ElementConfiguration126,
	& ElementConfiguration127,
	& ElementConfiguration128,
	& ElementConfiguration129,
	& ElementConfiguration130,
	& ElementConfiguration131,
	& ElementConfiguration132,
	& ElementConfiguration133,
	& ElementConfiguration134,
	& ElementConfiguration135,
	& ElementConfiguration136,
	& ElementConfiguration137,
	& ElementConfiguration138,
	& ElementConfiguration139,
	& ElementConfiguration140,
	& ElementConfiguration141,
	& ElementConfiguration142,
	& ElementConfiguration143,
	& ElementConfiguration144,
	& ElementConfiguration145,
	& ElementConfiguration146,
	& ElementConfiguration147,
	& ElementConfiguration148,
	& ElementConfiguration149,
	& ElementConfiguration150,
	& ElementConfiguration151,
	& ElementConfiguration152,
	& ElementConfiguration153,
	& ElementConfiguration154,
	& ElementConfiguration155,
	& ElementConfiguration156,
	& ElementConfiguration157,
	& ElementConfiguration158,
	& ElementConfiguration159,
	& ElementConfiguration160,
	& ElementConfiguration161,
	& ElementConfiguration162,
	& ElementConfiguration163,
	& ElementConfiguration164,
	& ElementConfiguration165,
	& ElementConfiguration166,
	& ElementConfiguration167,
	& ElementConfiguration168,
	& ElementConfiguration169,
	& ElementConfiguration170,
	& ElementConfiguration171,
	& ElementConfiguration172,
};
