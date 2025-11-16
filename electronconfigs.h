/*
 * electronconfigs.h
 *
 * Header to support Electron configuration definitions.
 *
 * DO NOT EDIT - THIS FILE IS GENERATED USING:
 *   ./electrons.exe
 *
 */
#ifndef _ELECTRON_CONFIGURATION_H_
#define _ELECTRON_CONFIGURATION_H_

#if !defined ARRAY_ELEMENTS
#define ARRAY_ELEMENTS(A) (sizeof(A)/sizeof(A[0]))
#endif

#define PACKSUBSHELL(e, s) short((((e) & 0x000F) << 4) + ((s) & 0x000F))
#define UNPACKSUBSHELL(s) short((s) & 0x000F)
#define UNPACKSHELL(s) short(((s) >> 4) & 0x000F)

/* Subshell Descriptions - index using Azimuthal quantum number (0 to 5). */
typedef struct subshell_desc_s
{
	char Name;
	short Orbitals;
	short Electrons;

}	subshell_desc_t;

#define SUBSHELL_COUNT 6
extern const subshell_desc_t SubshellDescriptions[SUBSHELL_COUNT];

/* Electron Configuration definitions generated using Madelung's rule. */
#define ELECTRON_CONFIGURATION_COUNT 30
extern const short ElectronConfigurations[ELECTRON_CONFIGURATION_COUNT];

/* Electron Subshell definitions. */
#define ELECTRON_SUBSHELL_COUNT 26
extern const short ElectronSubshells[ELECTRON_SUBSHELL_COUNT];

/* Map ElectronConfigurations[] indices to ElectronSubshells[]. */
extern const short MapConfToSubs[ELECTRON_CONFIGURATION_COUNT];

/* Map ElectronSubshells[] indices to ElectronConfigurations[]. */
extern const short MapSubsToConf[ELECTRON_SUBSHELL_COUNT];

/* Full Electron Configuration. */
extern const short FinalCounts[ELECTRON_CONFIGURATION_COUNT];

/* List of Subcategories. */
#define SUBCATEGORY_COUNT 11
extern const char * Subcategories[SUBCATEGORY_COUNT];

/*
 * Element Configurations structure containing:
 *
 * Symbol						Chemical element symbol.
 * Name							Chemical element name.
 * Z							Atomic Number.
 * Group						In chemistry, a group (also known as a family)
 * 								is a column of elements in the periodic table 
 * 								of the chemical elements. There are 18 numbered 
 * 								groups in the periodic table, and the f-block 
 * 								columns (between groups 3 and 4) are not 
 * 								numbered. The elements in a group have similar 
 * 								physical or chemical characteristics of the 
 * 								outermost electron shells of their atoms (i.e., 
 * 								the same core charge), as most chemical 
 * 								properties are dominated by the orbital 
 * 								location of the outermost electron. The modern 
 * 								numbering group 1 to group 18 is recommended by 
 * 								the International Union of Pure and Applied 
 * 								Chemistry (IUPAC).
 * Group32						The column number from the expanded periodic 
 * 								table (1 to 32).
 * Period						A period in the periodic table is a row of 
 * 								chemical elements. All elements in a row have 
 * 								the same number of electron shells. Each next 
 * 								element in a period has one more proton and 
 * 								is less metallic than its predecessor. 
 * AtomicWeight					Relative atomic mass or atomic weight is a 
 * 								dimensionless physical quantity defined as the 
 * 								ratio of the average mass of atoms of a 
 * 								chemical element in a given sample to one 
 * 								unified atomic mass unit. The unified atomic 
 * 								mass unit is defined as being ​1⁄12 of the 
 * 								atomic mass of a carbon-12 atom.
 * Density						Density in g/cm^3.
 * Melt							Melting point in K.
 * Boil							Boiling point in K.
 * C							Specific heat capacity in J/g.K.
 * X							Electronegativity is a chemical property that 
 * 								describes the tendency of an atom to attract 
 * 								a shared pair of electrons towards itself
 * Abundance					Abundance of elements in Earth's crust in PPM.
 * Subcategory					Index into the "Subcategories[]" list.
 * GenElectronConfigSize		# of entries in GenElectronConfigCounts[].
 * GenElectronConfigCounts		Electron Configuration generated using
 * 								Madelung's rule (see ElectronConfigurations[]
 * 								for order).
 * ElectronConfigurationSize	# of entries in ElectronConfigurationCounts[].
 * ElectronConfigurationCounts	Observed Electron Configuration.
 * ElectronSubshellSize			# of entries in ElectronSubshellCounts[].
 * ElectronSubshellCounts		Electron count within each subshell (see 
 * 								ElectronSubshells[] for order).
 * ElectronShellSize			# of entries in ElectronShellCounts[].
 * ElectronShellCounts			Electron count within each shell.
 */
typedef struct element_conf_s
{
	const char * Symbol, * Name;
	const short Z, Group, Group32, Period;
	const float AtomicWeight, Density;
	const float Melt, Boil;
	const float C, X;
	const float Abundance;
	const short Subcategory;
	const short GenElectronConfigSize, * GenElectronConfigCounts;
	const short ElectronConfigurationSize, * ElectronConfigurationCounts;
	const short ElectronSubshellSize, * ElectronSubshellCounts;
	const short ElectronShellSize, * ElectronShellCounts;

}	 element_conf_t;

#define ELEMENT_INDEX_FIRST	1
#define ELEMENT_INDEX_LAST	172
#define ELEMENT_ARRAY_SIZE	173
#define ELEMENT_KNOWN_COUNT	118
extern const element_conf_t * ElementConfigurations[ELEMENT_ARRAY_SIZE];

#endif /* _ELECTRON_CONFIGURATION_H_ */
