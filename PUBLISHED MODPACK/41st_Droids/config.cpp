class CfgPatches
{
	class 41st_Droids
	{
		requiredAddons[]=
		{"A3_Soft_F"};
		units[]=
		{
			"FST_Droid_B1_E5",
			"FST_Droid_B1_Sniper",
			"FST_Droid_B1_Commander",
			"FST_Droid_B1_AT",
			"FST_Droid_B1_GAT",
			"FST_Droid_B1_AR",
			"FST_Droid_B1_AA",
			"FST_BX",
			"FST_BX_Sniper",
			"FST_B2",
			"FST_B2_Flame",
			"FST_U_CIS_Heavy",
			"FST_U_CIS_Heavy_AT"
		};
		weapons[]={};
	};
	author="Daara";
};
class CfgWeapons
{
	class U_I_CombatUniform;
	class UniformItem;
	class JLTS_DroidB1;
	class VestItem;
	class Vest_Camo_Base;
	class GoG_HolsterSwordVestBack_Invis: Vest_Camo_Base
	{
		scope=2;
		displayName="B1 Invis Vest";
		picture="";
		model="\A3\Characters_F\blufor\equip_b_vest02.p3d";
		hiddenSelections[]=
			{
			"camo"
			};
		hiddenSelectionsTextures[]=
		{};
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\blufor\equip_b_vest02.p3d";
			containerClass="Supply100";
			mass=50;
			armor=200;
			passThrough=0.3;
			hiddenSelections[]=
				{
				"camo"
				};
		};
	};
	class FST_DroidB1_Test: U_I_CombatUniform
	{
		JLTS_isDroid=1;
		JLTS_hasEMPProtection=0;
		JLTS_deathSounds="DeathDroid";
		author="Runner";
		scope=2;
		displayName="[41st] B1 Combat Uniform Test";
		picture="\MRC\JLTS\characters\DroidArmor\data\ui\b1_uniform_ui_ca.paa";
		model="\41st_Droids\Data\DroidUniformB1.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="FST_Droid_B1_E5";
			containerClass="Supply200";
			uniformType="Neopren";
			mass=40;
		};
	};
	class FST_DroidB1: JLTS_DroidB1
	{
		author="Daara";
		scope=2;
		displayname="[41st] B1 Combat Uniform";
		JLTS_isDroid=1;
        JLTS_hasEMPProtection=0;
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="FST_Droid_B1_E5";
			containerClass="Supply200";
			uniformType="Neopren";
			mass=40;
		};
	};
	class FST_DroidB1_Commander: FST_DroidB1
	{
		author="Daara";
		scope=2;
		displayName="[41st] B1 Combat Uniform (Commander)";
		JLTS_isDroid=1;
        JLTS_hasEMPProtection=0;
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="FST_Droid_B1_Commander";
			containerClass="Supply200";
			uniformType="Neopren";
			mass=40;
		};
	};
	class FST_DroidB1_Sniper: FST_DroidB1
	{
		author="Daara";
		scope=2;
		displayName="[41st] B1 Combat Uniform (Sniper)";
		JLTS_isDroid=1;
        JLTS_hasEMPProtection=0;
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="FST_Droid_B1_Sniper";
			containerClass="Supply200";
			uniformType="Neopren";
			mass=40;
		};
	};
	class FST_DroidB1_GAT: FST_DroidB1
	{
		author="Daara";
		scope=2;
		displayName="[41st] B1 Combat Uniform (GAT)";
		JLTS_isDroid=1;
        JLTS_hasEMPProtection=0;
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="FST_Droid_B1_GAT";
			containerClass="Supply200";
			uniformType="Neopren";
			mass=40;
		};
	};
	class FST_DroidB1_AT: FST_DroidB1
	{
		author="Daara";
		scope=2;
		displayName="[41st] B1 Combat Uniform (AT)";
		JLTS_isDroid=1;
        JLTS_hasEMPProtection=0;
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="FST_Droid_B1_AT";
			containerClass="Supply200";
			uniformType="Neopren";
			mass=40;
		};
	};
	class FST_DroidB1_AR: FST_DroidB1
	{
		author="Daara";
		scope=2;
		displayName="[41st] B1 Combat Uniform (LMG)";
		JLTS_isDroid=1;
        JLTS_hasEMPProtection=0;
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="FST_Droid_B1_AR";
			containerClass="Supply200";
			uniformType="Neopren";
			mass=40;
		};
	};
	class FST_DroidB1_AA: FST_DroidB1
	{
		author="Daara";
		scope=2;
		displayName="[41st] B1 Combat Uniform (AA)";
		JLTS_isDroid=1;
        JLTS_hasEMPProtection=0;
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="FST_Droid_B1_AA";
			containerClass="Supply200";
			uniformType="Neopren";
			mass=40;
		};
	};
	class FST_DroidB1_Scorch: FST_DroidB1
	{
		author="Daara";
		scope=2;
		displayName="[41st] B1 Combat Uniform (Scorch)";
		JLTS_isDroid=1;
        JLTS_hasEMPProtection=0;
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="FST_Droid_B1_Scorch";
			containerClass="Supply200";
			uniformType="Neopren";
			mass=40;
		};
	};
	class FST_DroidBX: FST_DroidB1
	{
		author="Daara";
		scope=2;
		displayname="[41st] BX Combat Uniform";
		JLTS_isDroid=1;
        JLTS_hasEMPProtection=0;
        JLTS_deathSounds="";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="FST_BX";
			containerClass="Supply200";
			uniformType="Neopren";
			mass=40;
		};
	};
	class FST_DroidB2: FST_DroidB1
	{
		author="Daara";
		scope=2;
		displayname="[41st] B2 Armor";
		JLTS_isDroid=1;
        JLTS_hasEMPProtection=0;
        JLTS_deathSounds="";
		class ItemInfo: UniformItem
		{
			uniformModel="";
			uniformClass="FST_B2";
			containerClass="Supply200";
			uniformType="Neopren";
			mass=40;
		};
	};
	class ItemCore;
	class FST_Uniform_CIS_Heavy_Base: ItemCore
	{
		scope=0;
		allowedSlots[]={901};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FST_Uniform_CIS_Heavy_Base";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FST_U_CIS_Heavy_Armor: FST_Uniform_CIS_Heavy_Base
	{
		author="$STR_3AS_Studio";
		scope=2;
		displayName="[41st] CIS Human Division Armor";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="3AS\3AS_CIS_Infantry\Model\CIS_Heavy.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"3AS\3AS_CIS_Infantry\data\heavy\cis_heavy_texture_armour_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FST_U_CIS_Heavy";
			containerClass="Supply150";
			mass=40;
		};
	};
};
class CfgVehicles
{
	class JLTS_B1_Backpack;
	class JLTS_B1_antenna;
	class FST_B1_Backpack: JLTS_B1_Backpack
	{
		author="Daara";
		scope=2;
		picture="\MRC\JLTS\characters\DroidArmor\data\ui\b1_Backpack_ui_ca.paa";
		displayName="[41st] B1 Backpack";
		model="\MRC\JLTS\characters\DroidArmor\DroidBackpackB1.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_Backpack_co.paa"
		};
		tf_dialog="JLTS_droid_lr_radio_dialog";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode="tf_east_radio_code";
		tf_hasLRradio=1;
		tf_range=15000;
		tf_subtype="digital_lr";
	};
	class FST_B1_Antenna: JLTS_B1_antenna
	{
		author="Daara";
		scope=2;
		picture="\MRC\JLTS\characters\DroidArmor\data\ui\b1_antenna_ui_ca.paa";
		displayName="[41st] B1 Antenna";
		model="\MRC\JLTS\characters\DroidArmor\DroidAntennaB1.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_antenna_co.paa"
		};
		tf_dialog="JLTS_droid_lr_radio_dialog";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode="tf_east_radio_code";
		tf_hasLRradio=1;
		tf_range=15000;
		tf_subtype="digital_lr";
	};
	class FST_B1_backpack_at_predef: FST_B1_backpack
	{
		scope=2;
		class TransportMagazines
		{
			class _xx_FST_RPS6_Rocket
			{
				count=2;
				magazine="FST_RPS6_Rocket";
			};
		};
	};
	class FST_HD_backpack_at_predef: FST_B1_backpack
	{
		scope=2;
		model="";
		class TransportMagazines
		{
			class _xx_FST_RPS6_Rocket
			{
				count=3;
				magazine="FST_RPS6_Rocket";
			};
		};
	};
	class FST_B1_backpack_gat_predef: FST_B1_backpack
	{
		scope=2;
		class TransportMagazines
		{
			class _xx_JLTS_E60R_AT_mag
			{
				count=2;
				magazine="JLTS_E60R_AT_mag";
			};
		};
	};
	class FST_B1_backpack_aa_predef: FST_B1_backpack
	{
		scope=2;
		class TransportMagazines
		{
			class _xx_FST_E60R_AA_mag
			{
				count=2;
				magazine="FST_E60R_AA_mag";
			};
		};
	};
	class FST_B1_backpack_support_predef: FST_B1_backpack
	{
		scope=2;
		class TransportMagazines
		{
			class _xx_FST_blaster_battery_Red
			{
				count=10;
				magazine="FST_blaster_battery_Red";
			};
		};
	};
	class JLTS_Droid_B1_E5;
	// Testing New Model Here
	class O_soldier_base_F;
	class O_Soldier_F: O_soldier_base_F
	{
		class HitPoints;
	};
	class FST_Droid_B1_E5: JLTS_Droid_B1_E5
	{
		scope=2;
		scopecurator = 2;
		side=0;
		author="Runner";
		displayName="[41st] B1 Battledroid";
		armor=75; 
		armorStructural=2;
		explosionshielding=10;
		backpack="FST_B1_backpack";
		uniformClass="FST_DroidB1";
		faction="FST_BattleDroids_Faction";
		editorSubcategory="FST_BattleDroids_Subfaction";
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_co.paa"
		};
		weapons[]=
		{
			"FST_E5",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"FST_E5",
			"Throw",
			"Put"
		};
		Items[]={};
		respawnItems[]={};
		class HitPoints: O_Soldier_F
		{
 			class HitFace
			{
				armor=1;
				explosionShielding	= 100;	
				minimalHit			= 0.01;	
			};
			class HitNeck: HitFace
			{
				armor=1;
				explosionShielding	= 100;	
				minimalHit			= 0.01;	
			};
			class HitHead: HitNeck
			{
				armor=1;
				explosionShielding	= 100;	
				minimalHit			= 0.01;	
			};
			class HitPelvis: HitHead
			{
				armor=1;
				explosionShielding	= 100;	
				minimalHit			= 0.01;	
			};
			class HitAbdomen: HitPelvis
			{
				armor=1;
				explosionShielding	= 100;	
				minimalHit			= 0.01;	
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=1;
				explosionShielding	= 100;	
				minimalHit			= 0.01;	
			};
			class HitChest: HitDiaphragm
			{
				armor=1;
				explosionShielding	= 100;	
				minimalHit			= 0.01;	
			};
			class HitBody: HitChest
			{
				armor=1;
				passthrough=1;
				explosionShielding	= 100;	
				minimalHit			= 0.01;	
			};
			class HitArms: HitBody
			{
				armor=1;
				passthrough=1;
				explosionShielding	= 100;	
				minimalHit			= 0.01;	
			};
			class HitHands: HitArms
			{
				armor=1;
				passthrough=1;
				explosionShielding	= 100;	
				minimalHit			= 0.01;	
			};
			class HitLegs: HitHands
			{
				armor=1;
				explosionShielding	= 100;	
				minimalHit			= 0.01;	
			};
			class Incapacitated: HitLegs
			{
				armor=1000;
			};
			class HitLeftArm
			{
				armor=1;
				passthrough=1;
				explosionShielding	= 100;	
				minimalHit			= 0.01;	
			}; 
		};
		linkedItems[]=
		{
			"FST_HUD",
			"ItemMap",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_NVG_droid_chip_1",
			"JLTS_NVG_droid_chip_1"
		};
		respawnLinkedItems[]=
		{
			"FST_HUD",
			"ItemMap",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_NVG_droid_chip_1",
			"JLTS_NVG_droid_chip_1"
		};
		magazines[]=
		{
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
		};
		respawnMagazines[]=
		{
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
		};
	};
	class FST_Droid_B1_Sniper: FST_Droid_B1_E5
	{
		scope=2;
		side=0;
		author="Daara";
		displayName="[41st] B1 Battledroid (Sniper)";
		armor=4;
		armorStructural=100;
		backpack="FST_B1_backpack";
		uniformClass="FST_DroidB1_Sniper";
		faction="FST_BattleDroids_Faction";
		editorSubcategory="FST_BattleDroids_Subfaction";
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_co.paa"
		};
		weapons[]=
		{
			"FST_E5S",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"FST_E5S",
			"Throw",
			"Put"
		};
		Items[]={};
		respawnItems[]={};
		linkedItems[]=
		{
			"FST_HUD",
			"ItemMap",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_NVG_droid_chip_1",
			"JLTS_NVG_droid_chip_1"
		};
		respawnLinkedItems[]=
		{
			"FST_HUD",
			"ItemMap",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_NVG_droid_chip_1",
			"JLTS_NVG_droid_chip_1"
		};
		magazines[]=
		{
			"FST_blaster_cell_overcharged_red",
			"FST_blaster_cell_overcharged_red",
			"FST_blaster_cell_overcharged_red",
			"FST_blaster_cell_overcharged_red",
			"FST_blaster_cell_overcharged_red",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
		};
		respawnMagazines[]=
		{
			"FST_blaster_cell_overcharged_red",
			"FST_blaster_cell_overcharged_red",
			"FST_blaster_cell_overcharged_red",
			"FST_blaster_cell_overcharged_red",
			"FST_blaster_cell_overcharged_red",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
		};
	};
	class FST_Droid_B1_Commander: FST_Droid_B1_E5
	{
		scope=2;
		author="Daara";
		displayName="[41st] B1 Battledroid (Commander)";
		armor=4;
		armorStructural=100;
		Backpack="FST_B1_Antenna";
		uniformClass="FST_DroidB1_Commander";
		faction="FST_BattleDroids_Faction";
		editorSubcategory="FST_BattleDroids_Subfaction";
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_commander_co.paa"
		};
		weapons[]=
		{
			"FST_E5",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"FST_E5",
			"Throw",
			"Put"
		};
		Items[]={};
		respawnItems[]={};
		linkedItems[]=
		{
			"FST_HUD",
			"ItemMap",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_NVG_droid_chip_1",
			"JLTS_NVG_droid_chip_1"
		};
		respawnLinkedItems[]=
		{
			"FST_HUD",
			"ItemMap",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_NVG_droid_chip_1",
			"JLTS_NVG_droid_chip_1"
		};
		magazines[]=
		{
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"IDA_grenade_Detonator_mag",
			"IDA_grenade_Detonator_mag"
		};
		respawnMagazines[]=
		{
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"IDA_grenade_Detonator_mag",
			"IDA_grenade_Detonator_mag"
		};
	};
	class FST_Droid_B1_GAT: FST_Droid_B1_E5
	{
		scope=2;
		author="Daara";
		backpack="FST_B1_backpack_gat_predef";
		displayName="[41st] B1 Battledroid (Guided Anti-Tank)";
		armor=4;
		armorStructural=100;
		uniformClass="FST_DroidB1_GAT";
		faction="FST_BattleDroids_Faction";
		editorSubcategory="FST_BattleDroids_Subfaction";
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_co.paa"
		};
		Items[]={};
		respawnItems[]={};
		linkedItems[]=
		{
			"FST_HUD",
			"ItemMap",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_NVG_droid_chip_1",
			"JLTS_NVG_droid_chip_1"
		};
		respawnLinkedItems[]=
		{
			"FST_HUD",
			"ItemMap",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_NVG_droid_chip_1",
			"JLTS_NVG_droid_chip_1"
		};
		weapons[]=
		{
			"FST_E5",
			"JLTS_E60R_AT",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"FST_E5",
			"JLTS_E60R_AT",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
		};
		respawnMagazines[]=
		{
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
		};
	};
	class FST_Droid_B1_AT: FST_Droid_B1_E5
	{
		scope=2;
		author="Daara";
		backpack="FST_B1_backpack_at_predef";
		displayName="[41st] B1 Battledroid (Anti-Tank)";
		armor=4;
		armorStructural=100;
		uniformClass="FST_DroidB1_AT";
		faction="FST_BattleDroids_Faction";
		editorSubcategory="FST_BattleDroids_Subfaction";
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_co.paa"
		};
		Items[]={};
		respawnItems[]={};
		linkedItems[]=
		{
			"FST_HUD",
			"ItemMap",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_NVG_droid_chip_1",
			"JLTS_NVG_droid_chip_1"
		};
		respawnLinkedItems[]=
		{
			"FST_HUD",
			"ItemMap",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_NVG_droid_chip_1",
			"JLTS_NVG_droid_chip_1"
		};
		weapons[]=
		{
			"FST_E5",
			"FST_RPS6HP",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"FST_E5",
			"FST_RPS6HP",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
		};
		respawnMagazines[]=
		{
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
		};
	};
	class FST_Droid_B1_AA: FST_Droid_B1_E5
	{
		scope=2;
		author="Daara";
		backpack="FST_B1_backpack_aa_predef";
		displayName="[41st] B1 Battledroid (Anti-Air)";
		armor=4;
		armorStructural=100;
		uniformClass="FST_DroidB1_AA";
		faction="FST_BattleDroids_Faction";
		editorSubcategory="FST_BattleDroids_Subfaction";
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_co.paa"
		};
		Items[]={};
		respawnItems[]={};
		linkedItems[]=
		{
			"FST_HUD",
			"ItemMap",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_NVG_droid_chip_1",
			"JLTS_NVG_droid_chip_1"
		};
		respawnLinkedItems[]=
		{
			"FST_HUD",
			"ItemMap",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_NVG_droid_chip_1",
			"JLTS_NVG_droid_chip_1"
		};
		weapons[]=
		{
			"FST_E5",
			"FST_E60R_AA",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"FST_E5",
			"FST_E60R_AA",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
		};
		respawnMagazines[]=
		{
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
		};
	};
	class FST_Droid_B1_AR: FST_Droid_B1_E5
	{
		scope=2;
		author="Daara";
		backpack="FST_B1_backpack_support_predef";
		displayName="[41st] B1 Battledroid (LMG)";
		armor=4;
		armorStructural=100;
		uniformClass="FST_DroidB1_AR";
		faction="FST_BattleDroids_Faction";
		editorSubcategory="FST_BattleDroids_Subfaction";
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_co.paa"
		};
		weapons[]=
		{
			"FST_E5C_Stock",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"FST_E5C_Stock",
			"Throw",
			"Put"
		};
		Items[]={};
		respawnItems[]={};
		linkedItems[]=
		{
			"FST_HUD",
			"ItemMap",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_NVG_droid_chip_1",
			"JLTS_NVG_droid_chip_1"
		};
		respawnLinkedItems[]=
		{
			"FST_HUD",
			"ItemMap",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_NVG_droid_chip_1",
			"JLTS_NVG_droid_chip_1"
		};
		magazines[]=
		{
			"FST_blaster_battery_Red",
			"FST_blaster_battery_Red",
			"FST_blaster_battery_Red",
		};
		respawnMagazines[]=
		{
			"FST_blaster_battery_Red",
			"FST_blaster_battery_Red",
			"FST_blaster_battery_Red",
		};
	};
	class FST_Droid_B1_Scorch: FST_Droid_B1_E5
	{
		scope=2;
		author="Daara";
		backpack="FST_B1_backpack_support_predef";
		displayName="[41st] B1 Battledroid (Scorch)";
		armor=4;
		armorStructural=100;
		uniformClass="FST_DroidB1_Scorch";
		faction="FST_BattleDroids_Faction";
		editorSubcategory="FST_BattleDroids_Subfaction";
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\DroidArmor\data\b1_co.paa"
		};
		weapons[]=
		{
			"IDA_BTX42",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"IDA_BTX42",
			"Throw",
			"Put"
		};
		Items[]={};
		respawnItems[]={};
		linkedItems[]=
		{
			"FST_HUD",
			"ItemMap",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_NVG_droid_chip_1",
			"JLTS_NVG_droid_chip_1"
		};
		respawnLinkedItems[]=
		{
			"FST_HUD",
			"ItemMap",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_NVG_droid_chip_1",
			"JLTS_NVG_droid_chip_1"
		};
		magazines[]=
		{
			"IDA_FuelTank",
			"IDA_FuelTank",
			"IDA_FuelTank",
		};
		respawnMagazines[]=
		{
			"IDA_FuelTank",
			"IDA_FuelTank",
			"IDA_FuelTank",
		};
	};
	class WBK_BX_Assasin_1;
	class FST_BX: WBK_BX_Assasin_1
	{
		scope=2;
		identityTypes[]={};
		author="Daara";
		Backpack="";
		displayName="[41st] BX Commando Droid";
		uniformClass="FST_DroidBX";
		faction="FST_BattleDroids_Faction";
		editorSubcategory="FST_BattleDroids_Subfaction";
		armor=35;
		armorStructural=100;
		model="\ls_armor_redfor\uniform\cis\bx\lsd_cis_bx_uniform.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"ls_armor_redfor\uniform\cis\bx\data\body_co.paa"
		};
		weapons[]=
		{
			"FST_E5",
			"WBK_Dutch_Vibro",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"FST_E5",
			"WBK_Dutch_Vibro",
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"JLTS_NVG_droid_chip_2",
			"GoG_HolsterSwordVestBack",
			"FST_HUD",
		};
		respawnLinkedItems[]=
		{
			"JLTS_NVG_droid_chip_2",
			"GoG_HolsterSwordVestBack",
			"FST_HUD",
		};
		Items[]={};
		respawnItems[]={};
		magazines[]=
		{
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"IDA_grenade_Smoke_mag",
			"IDA_grenade_Detonator_mag",
			"IDA_grenade_Detonator_mag",
		};
		respawnMagazines[]=
		{
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"FST_blaster_cell_red",
			"IDA_grenade_Smoke_mag",
			"IDA_grenade_Detonator_mag",
			"IDA_grenade_Detonator_mag",
		};
	};
	class FST_BX_Sniper: FST_BX
	{
		scope=2;
		identityTypes[]={};
		author="Daara";
		Backpack="";
		displayName="[41st] BX Commando Droid (Sniper)";
		uniformClass="FST_DroidBX";
		faction="FST_BattleDroids_Faction";
		editorSubcategory="FST_BattleDroids_Subfaction";
		armor=25;
		armorStructural=100;
		weapons[]=
		{
			"FST_E5S",
			"WBK_Dutch_Vibro",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"FST_E5S",
			"WBK_Dutch_Vibro",
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"JLTS_NVG_droid_chip_2",
			"GoG_HolsterSwordVestBack",
			"FST_HUD",
		};
		respawnLinkedItems[]=
		{
			"JLTS_NVG_droid_chip_2",
			"GoG_HolsterSwordVestBack",
			"FST_HUD",
		};
		Items[]={};
		respawnItems[]={};
		magazines[]=
		{
			"FST_blaster_cell_overcharged_red",
			"FST_blaster_cell_overcharged_red",
			"FST_blaster_cell_overcharged_red",
			"FST_blaster_cell_overcharged_red",
			"FST_blaster_cell_overcharged_red",
			"IDA_grenade_Smoke_mag",
			"IDA_grenade_Detonator_mag",
		};
		respawnMagazines[]=
		{
			"FST_blaster_cell_overcharged_red",
			"FST_blaster_cell_overcharged_red",
			"FST_blaster_cell_overcharged_red",
			"FST_blaster_cell_overcharged_red",
			"FST_blaster_cell_overcharged_red",
			"IDA_grenade_Smoke_mag",
			"IDA_grenade_Detonator_mag",
		};
	};
	class WBK_B2_Mod_Standart;
	class FST_B2: WBK_B2_Mod_Standart
	{
		scope=2;
		identityTypes[]={};
		author="Daara";
		Backpack="";
		displayName="[41st] B2 Super Battledroid";
		uniformClass="FST_DroidB2";
		faction="FST_BattleDroids_Faction";
		editorSubcategory="FST_BattleDroids_Subfaction";
		weapons[]=
		{
			"FST_WristBlaster",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"FST_WristBlaster",
			"Throw",
			"Put"
		};
		linkedItems[]={};
		respawnLinkedItems[]={};
		Items[]={};
		respawnItems[]={};
		magazines[]=
		{
			"FST_blaster_battery_Red",
			"FST_blaster_battery_Red",
			"IDA_wrist_rocket",
			"IDA_wrist_rocket",
		};
		respawnMagazines[]=
		{
			"FST_blaster_battery_Red",
			"FST_blaster_battery_Red",
			"IDA_wrist_rocket",
			"IDA_wrist_rocket",
		};
		armor=1000;
	};
	class FST_B2_Flame: WBK_B2_Mod_Standart
	{
		scope=2;
		identityTypes[]={};
		author="Daara";
		Backpack="";
		displayName="[41st] B2 Super Battledroid (Flame)";
		uniformClass="FST_DroidB2";
		faction="FST_BattleDroids_Faction";
		editorSubcategory="FST_BattleDroids_Subfaction";
		weapons[]=
		{
			"IDA_BTX42",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"IDA_BTX42",
			"Throw",
			"Put"
		};
		linkedItems[]={};
		respawnLinkedItems[]={};
		Items[]={};
		respawnItems[]={};
		magazines[]=
		{
			"IDA_FuelTank",
			"IDA_FuelTank",
			"IDA_FuelTank",
			"IDA_FuelTank",
			"IDA_FuelTank",
			"IDA_FuelTank",
			"IDA_FuelTank",
			"IDA_FuelTank",
			"IDA_FuelTank",
			"IDA_FuelTank"
		};
		respawnMagazines[]=
		{
			"IDA_FuelTank",
			"IDA_FuelTank",
			"IDA_FuelTank",
			"IDA_FuelTank",
			"IDA_FuelTank",
			"IDA_FuelTank",
			"IDA_FuelTank",
			"IDA_FuelTank",
			"IDA_FuelTank",
			"IDA_FuelTank"

		};
	};
	class FST_CIS_Heavy_Base_F: FST_Droid_B1_E5
	{
		author="Adapted from 3AS";
		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO",
			"G_NATO_default"
		};
		faceType="Man_A3";
		backpack="FST_HD_backpack_at_predef";
		side=0;
		faction="FST_BattleDroids_Faction";
		genericNames="NATOMen";
		vehiclesClass="Men";
		editorSubcategory="FST_BattleDroids_Subfaction";
		portrait="";
		picture="";
		icon="iconMan";
		accuracy=2.3;
		camouflage=1.4;
		minFireTime=7;
		canCarryBackPack=1;
		scope=0;
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"A3\Characters_F\BLUFOR\Data\clothing1.rvmat",
				"A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat",
				"A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat",
				"A3\Characters_F\Common\Data\basicbody.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\characters_f\common\data\coveralls.rvmat",
				"A3\Characters_F\Common\Data\coveralls_injury.rvmat",
				"A3\Characters_F\Common\Data\coveralls_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"
			};
		};
		model="\3AS\3AS_CIS_Infantry\Model\CIS_Heavy.p3d";
		modelSides[]={2};
		nakedUnifrom="U_BasicBody";
		uniformClass="FST_Uniform_CIS_Heavy_Base";
		class HitPoints
		{
			class HitFace
			{
				armor=1;
				explosionShielding	= 100;	
				minimalHit			= 0.01;	
			};
			class HitNeck: HitFace
			{
				armor=1;
				explosionShielding	= 100;	
				minimalHit			= 0.01;	
			};
			class HitHead: HitNeck
			{
				armor=1;
				explosionShielding	= 100;	
				minimalHit			= 0.01;	
			};
			class HitPelvis: HitHead
			{
				armor=1;
				explosionShielding	= 100;	
				minimalHit			= 0.01;	
			};
			class HitAbdomen: HitPelvis
			{
				armor=1;
				explosionShielding	= 100;	
				minimalHit			= 0.01;	
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=1;
				explosionShielding	= 100;	
				minimalHit			= 0.01;	
			};
			class HitChest: HitDiaphragm
			{
				armor=1;
				explosionShielding	= 100;	
				minimalHit			= 0.01;	
			};
			class HitBody: HitChest
			{
				armor=1;
				passthrough=1;
				explosionShielding	= 100;	
				minimalHit			= 0.01;	
			};
			class HitArms: HitBody
			{
				armor=1;
				passthrough=1;
				explosionShielding	= 100;	
				minimalHit			= 0.01;	
			};
			class HitHands: HitArms
			{
				armor=1;
				passthrough=1;
				explosionShielding	= 100;	
				minimalHit			= 0.01;	
			};
			class HitLegs: HitHands
			{
				armor=1;
				explosionShielding	= 100;	
				minimalHit			= 0.01;	
			};
			class Incapacitated: HitLegs
			{
				armor=1000;
			};
			class HitLeftArm
			{
				armor=1;
				passthrough=1;
				explosionShielding	= 100;	
				minimalHit			= 0.01;	
			};
		};
		armor=125; 
		armorStructural=2;
		explosionshielding=15;
		HiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"3AS\3AS_CIS_Infantry\data\heavy\cis_heavy_texture_armour_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"3AS\3AS_CIS_Infantry\data\heavy\cis_heavy.rvmat"
		};
		class EventHandlers;
		weapons[]=
		{
			"FST_E5C_Stock",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"FST_E5C_Stock",
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"FST_HUD",
			"ItemMap",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_NVG_droid_chip_1",
			"JLTS_NVG_droid_chip_1",
			"3AS_CIS_Light_helmet"
		};
		respawnLinkedItems[]=
		{
			"FST_HUD",
			"ItemMap",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_NVG_droid_chip_1",
			"JLTS_NVG_droid_chip_1",
			"3AS_CIS_Light_helmet"
		};
		magazines[]=
		{
			"FST_blaster_battery_Red",
			"FST_blaster_battery_Red",
			"FST_blaster_battery_Red",
			"FST_blaster_battery_Red",
			"FST_blaster_battery_Red",
			"FST_blaster_battery_Red",
			"IDA_grenade_Detonator_mag",
			"IDA_grenade_Detonator_mag",
		};
		respawnMagazines[]=
		{
			"FST_blaster_battery_Red",
			"FST_blaster_battery_Red",
			"FST_blaster_battery_Red",
			"FST_blaster_battery_Red",
			"FST_blaster_battery_Red",
			"FST_blaster_battery_Red",
			"IDA_grenade_Detonator_mag",
			"IDA_grenade_Detonator_mag",
		};
	};
	class FST_U_CIS_Heavy: FST_CIS_Heavy_Base_F
	{
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\B_Soldier_F.jpg";
		scope=2;
		scopecurator=2;
		displayName="[41st] CIS Human Division";
		author="Adapted from 3AS";
		uniformAccessories[]={};
		nakedUniform="U_BasicBody";
		uniformClass="FST_U_CIS_Heavy_Armor";
		role="Rifleman";
		backpack="";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"3AS\3AS_CIS_Infantry\data\heavy\cis_heavy_texture_armour_co.paa"
		};
		linkedItems[]=
		{
			"FST_HUD",
			"ItemMap",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_NVG_droid_chip_1",
			"JLTS_NVG_droid_chip_1",
			"3AS_CIS_Light_helmet"
		};
		respawnLinkedItems[]=
		{
			"FST_HUD",
			"ItemMap",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_NVG_droid_chip_1",
			"JLTS_NVG_droid_chip_1",
			"3AS_CIS_Light_helmet"
		};
	};
	class FST_U_CIS_Heavy_AT: FST_CIS_Heavy_Base_F
	{
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\B_Soldier_F.jpg";
		scope=2;
		scopecurator=2;
		displayName="[41st] CIS Human Division (AT)";
		author="Adapted from 3AS";
		uniformAccessories[]={};
		nakedUniform="U_BasicBody";
		uniformClass="FST_U_CIS_Heavy_Armor";
		role="Rifleman";
		backpack="";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"3AS\3AS_CIS_Infantry\data\heavy\cis_heavy_texture_armour_co.paa"
		};
		class EventHandlers;
		weapons[]=
		{
			"FST_E5C_Stock",
			"FST_RPS6HP",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"FST_E5C_Stock",
			"FST_RPS6HP",
			"Throw",
			"Put"
		};
		linkedItems[]=
		{
			"FST_HUD",
			"ItemMap",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_NVG_droid_chip_1",
			"JLTS_NVG_droid_chip_1",
			"3AS_CIS_Light_helmet"
		};
		respawnLinkedItems[]=
		{
			"FST_HUD",
			"ItemMap",
			"JLTS_droid_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_NVG_droid_chip_1",
			"JLTS_NVG_droid_chip_1",
			"3AS_CIS_Light_helmet"
		};
	};
 };

class cfgGroups
{
	class EAST
	{
		name="OPFOR";
		
		class FST_CIS
		{
			name="41st Battledroids";
			
			class FST_Droid_Standard
			{
				name="Infantry";
				
				class FST_Droid_B1_E5_Squad
				{
					name="[41st] B1 Squad (STD)";
					faction="FST_BattleDroids_Faction";
					side=0;
					class Unit0
					{
						side=0;
						vehicle="FST_Droid_B1_Commander";
						rank="SERGEANT";
						position[]={1,-0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="FST_Droid_B1_AR";
						rank="PRIVATE";
						position[]={1,-1,0};
					};
					class Unit2
					{
						side=0;
						vehicle="FST_Droid_B1_E5";
						rank="PRIVATE";
						position[]={1,-2,0};
					};
					class Unit3
					{
						side=0;
						vehicle="FST_Droid_B1_E5";
						rank="PRIVATE";
						position[]={1,-3,0};
					};
					class Unit4
					{
						side=0;
						vehicle="FST_Droid_B1_E5";
						rank="PRIVATE";
						position[]={1,-4,0};
					};
					class Unit5
					{
						side=0;
						vehicle="FST_Droid_B1_E5";
						rank="PRIVATE";
						position[]={1,-5,0};
					};
					class Unit6
					{
						side=0;
						vehicle="FST_Droid_B1_AR";
						rank="PRIVATE";
						position[]={0,-0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="FST_Droid_B1_E5";
						rank="PRIVATE";
						position[]={0,-1,0};
					};
					class Unit8
					{
						side=0;
						vehicle="FST_Droid_B1_E5";
						rank="PRIVATE";
						position[]={0,-2,0};
					};
					class Unit9
					{
						side=0;
						vehicle="FST_Droid_B1_E5";
						rank="PRIVATE";
						position[]={0,-3,0};
					};
					class Unit10
					{
						side=0;
						vehicle="FST_Droid_B1_E5";
						rank="PRIVATE";
						position[]={0,-4,0};
					};
					class Unit11
					{
						side=0;
						vehicle="FST_Droid_B1_E5";
						rank="PRIVATE";
						position[]={0,-5,0};
					};
				};
				class FST_Droid_B1_E5_Squad_Sniper
				{
					name="[41st] B1 Squad (w/ Sniper)";
					faction="FST_BattleDroids_Faction";
					side=0;
					class Unit0
					{
						side=0;
						vehicle="FST_Droid_B1_Commander";
						rank="SERGEANT";
						position[]={1,-0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="FST_Droid_B1_AR";
						rank="PRIVATE";
						position[]={1,-1,0};
					};
					class Unit2
					{
						side=0;
						vehicle="FST_Droid_B1_E5";
						rank="PRIVATE";
						position[]={1,-2,0};
					};
					class Unit3
					{
						side=0;
						vehicle="FST_Droid_B1_E5";
						rank="PRIVATE";
						position[]={1,-3,0};
					};
					class Unit4
					{
						side=0;
						vehicle="FST_Droid_B1_E5";
						rank="PRIVATE";
						position[]={1,-4,0};
					};
					class Unit5
					{
						side=0;
						vehicle="FST_Droid_B1_E5";
						rank="PRIVATE";
						position[]={1,-5,0};
					};
					class Unit6
					{
						side=0;
						vehicle="FST_Droid_B1_AR";
						rank="PRIVATE";
						position[]={0,-0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="FST_Droid_B1_E5";
						rank="PRIVATE";
						position[]={0,-1,0};
					};
					class Unit8
					{
						side=0;
						vehicle="FST_Droid_B1_E5";
						rank="PRIVATE";
						position[]={0,-2,0};
					};
					class Unit9
					{
						side=0;
						vehicle="FST_Droid_B1_Sniper";
						rank="PRIVATE";
						position[]={0,-3,0};
					};
					class Unit10
					{
						side=0;
						vehicle="FST_Droid_B1_E5";
						rank="PRIVATE";
						position[]={0,-4,0};
					};
					class Unit11
					{
						side=0;
						vehicle="FST_Droid_B1_E5";
						rank="PRIVATE";
						position[]={0,-5,0};
					};
				};
				//Begin Test Squad
				class FST_Droid_B1_E5_Squad_Test
				{
					name="[41st] B1 Test Squad";
					faction="FST_BattleDroids_Faction";
					side=0;
					class Unit0
					{
						side=0;
						vehicle="FST_Droid_B1_E5_Test";
						rank="SERGEANT";
						position[]={1,-0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="FST_Droid_B1_E5_Test";
						rank="PRIVATE";
						position[]={1,-1,0};
					};
					class Unit2
					{
						side=0;
						vehicle="FST_Droid_B1_E5_Test";
						rank="PRIVATE";
						position[]={1,-2,0};
					};
					class Unit3
					{
						side=0;
						vehicle="FST_Droid_B1_E5_Test";
						rank="PRIVATE";
						position[]={1,-3,0};
					};
					class Unit4
					{
						side=0;
						vehicle="FST_Droid_B1_E5_Test";
						rank="PRIVATE";
						position[]={1,-4,0};
					};
					class Unit5
					{
						side=0;
						vehicle="FST_Droid_B1_E5_Test";
						rank="PRIVATE";
						position[]={1,-5,0};
					};
					class Unit6
					{
						side=0;
						vehicle="FST_Droid_B1_E5_Test";
						rank="PRIVATE";
						position[]={0,-0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="FST_Droid_B1_E5_Test";
						rank="PRIVATE";
						position[]={0,-1,0};
					};
					class Unit8
					{
						side=0;
						vehicle="FST_Droid_B1_E5_Test";
						rank="PRIVATE";
						position[]={0,-2,0};
					};
					class Unit9
					{
						side=0;
						vehicle="FST_Droid_B1_E5_Test";
						rank="PRIVATE";
						position[]={0,-3,0};
					};
					class Unit10
					{
						side=0;
						vehicle="FST_Droid_B1_E5_Test";
						rank="PRIVATE";
						position[]={0,-4,0};
					};
					class Unit11
					{
						side=0;
						vehicle="FST_Droid_B1_E5_Test";
						rank="PRIVATE";
						position[]={0,-5,0};
					};
				};
				//End Test Squad
				class FST_Droid_B1_E5_Squad_AT
				{
					name="[41st] B1 Squad (w/ AT)";
					faction="FST_BattleDroids_Faction";
					side=0;
					class Unit0
					{
						side=0;
						vehicle="FST_Droid_B1_Commander";
						rank="SERGEANT";
						position[]={1,-0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="FST_Droid_B1_AR";
						rank="PRIVATE";
						position[]={1,-1,0};
					};
					class Unit2
					{
						side=0;
						vehicle="FST_Droid_B1_E5";
						rank="PRIVATE";
						position[]={1,-2,0};
					};
					class Unit3
					{
						side=0;
						vehicle="FST_Droid_B1_E5";
						rank="PRIVATE";
						position[]={1,-3,0};
					};
					class Unit4
					{
						side=0;
						vehicle="FST_Droid_B1_E5";
						rank="PRIVATE";
						position[]={1,-4,0};
					};
					class Unit5
					{
						side=0;
						vehicle="FST_Droid_B1_E5";
						rank="PRIVATE";
						position[]={1,-5,0};
					};
					class Unit6
					{
						side=0;
						vehicle="FST_Droid_B1_AR";
						rank="PRIVATE";
						position[]={0,-0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="FST_Droid_B1_E5";
						rank="PRIVATE";
						position[]={0,-1,0};
					};
					class Unit8
					{
						side=0;
						vehicle="FST_Droid_B1_E5";
						rank="PRIVATE";
						position[]={0,-2,0};
					};
					class Unit9
					{
						side=0;
						vehicle="FST_Droid_B1_AT";
						rank="PRIVATE";
						position[]={0,-3,0};
					};
					class Unit10
					{
						side=0;
						vehicle="FST_Droid_B1_E5";
						rank="PRIVATE";
						position[]={0,-4,0};
					};
					class Unit11
					{
						side=0;
						vehicle="FST_Droid_B1_E5";
						rank="PRIVATE";
						position[]={0,-5,0};
					};
				};
				class FST_Droid_B1_E5_Squad_AA
				{
					name="[41st] B1 Squad (w/ AA)";
					faction="FST_BattleDroids_Faction";
					side=0;
					class Unit0
					{
						side=0;
						vehicle="FST_Droid_B1_Commander";
						rank="SERGEANT";
						position[]={1,-0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="FST_Droid_B1_AR";
						rank="PRIVATE";
						position[]={1,-1,0};
					};
					class Unit2
					{
						side=0;
						vehicle="FST_Droid_B1_E5";
						rank="PRIVATE";
						position[]={1,-2,0};
					};
					class Unit3
					{
						side=0;
						vehicle="FST_Droid_B1_E5";
						rank="PRIVATE";
						position[]={1,-3,0};
					};
					class Unit4
					{
						side=0;
						vehicle="FST_Droid_B1_E5";
						rank="PRIVATE";
						position[]={1,-4,0};
					};
					class Unit5
					{
						side=0;
						vehicle="FST_Droid_B1_E5";
						rank="PRIVATE";
						position[]={1,-5,0};
					};
					class Unit6
					{
						side=0;
						vehicle="FST_Droid_B1_AR";
						rank="PRIVATE";
						position[]={0,-0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="FST_Droid_B1_E5";
						rank="PRIVATE";
						position[]={0,-1,0};
					};
					class Unit8
					{
						side=0;
						vehicle="FST_Droid_B1_E5";
						rank="PRIVATE";
						position[]={0,-2,0};
					};
					class Unit9
					{
						side=0;
						vehicle="FST_Droid_B1_AA";
						rank="PRIVATE";
						position[]={0,-3,0};
					};
					class Unit10
					{
						side=0;
						vehicle="FST_Droid_B1_E5";
						rank="PRIVATE";
						position[]={0,-4,0};
					};
					class Unit11
					{
						side=0;
						vehicle="FST_Droid_B1_E5";
						rank="PRIVATE";
						position[]={0,-5,0};
					};
				};
				class FST_Droid_B1_E5_Squad_Both
				{
					name="[41st] B1 Squad (AT/AA)";
					faction="FST_BattleDroids_Faction";
					side=0;
					class Unit0
					{
						side=0;
						vehicle="FST_Droid_B1_Commander";
						rank="SERGEANT";
						position[]={1,-0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="FST_Droid_B1_AR";
						rank="PRIVATE";
						position[]={1,-1,0};
					};
					class Unit2
					{
						side=0;
						vehicle="FST_Droid_B1_E5";
						rank="PRIVATE";
						position[]={1,-2,0};
					};
					class Unit3
					{
						side=0;
						vehicle="FST_Droid_B1_E5";
						rank="PRIVATE";
						position[]={1,-3,0};
					};
					class Unit4
					{
						side=0;
						vehicle="FST_Droid_B1_AT";
						rank="PRIVATE";
						position[]={1,-4,0};
					};
					class Unit5
					{
						side=0;
						vehicle="FST_Droid_B1_E5";
						rank="PRIVATE";
						position[]={1,-5,0};
					};
					class Unit6
					{
						side=0;
						vehicle="FST_Droid_B1_AR";
						rank="PRIVATE";
						position[]={0,-0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="FST_Droid_B1_E5";
						rank="PRIVATE";
						position[]={0,-1,0};
					};
					class Unit8
					{
						side=0;
						vehicle="FST_Droid_B1_E5";
						rank="PRIVATE";
						position[]={0,-2,0};
					};
					class Unit9
					{
						side=0;
						vehicle="FST_Droid_B1_AA";
						rank="PRIVATE";
						position[]={0,-3,0};
					};
					class Unit10
					{
						side=0;
						vehicle="FST_Droid_B1_E5";
						rank="PRIVATE";
						position[]={0,-4,0};
					};
					class Unit11
					{
						side=0;
						vehicle="FST_Droid_B1_E5";
						rank="PRIVATE";
						position[]={0,-5,0};
					};
				};
				class FST_Droid_B1_E5_FireTeam
				{
					name="[41st] B1 Fireteam";
					faction="FST_BattleDroids_Faction";
					side=0;
					class Unit0
					{
						side=0;
						vehicle="FST_Droid_B1_E5";
						rank="SERGEANT";
						position[]={1,-0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="FST_Droid_B1_E5";
						rank="PRIVATE";
						position[]={1,-1,0};
					};
					class Unit2
					{
						side=0;
						vehicle="FST_Droid_B1_E5";
						rank="PRIVATE";
						position[]={1,-2,0};
					};
					class Unit3
					{
						side=0;
						vehicle="FST_Droid_B1_E5";
						rank="PRIVATE";
						position[]={0,-0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="FST_Droid_B1_AR";
						rank="PRIVATE";
						position[]={0,-1,0};
					};
					class Unit5
					{
						side=0;
						vehicle="FST_Droid_B1_E5";
						rank="PRIVATE";
						position[]={0,-2,0};
					};
				};
				class FST_Droid_B1_E5_GATeam
				{
					name="[41st] B1 Guided AT Team";
					faction="FST_BattleDroids_Faction";
					side=0;
					class Unit0
					{
						side=0;
						vehicle="FST_Droid_B1_E5";
						rank="SERGEANT";
						position[]={1,-0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="FST_Droid_B1_E5";
						rank="PRIVATE";
						position[]={1,-1,0};
					};
					class Unit2
					{
						side=0;
						vehicle="FST_Droid_B1_E5";
						rank="PRIVATE";
						position[]={1,-2,0};
					};
					class Unit3
					{
						side=0;
						vehicle="FST_Droid_B1_GAT";
						rank="PRIVATE";
						position[]={0,-0,0};
					};
				};
				class FST_BX_KillTeam
				{
					name="[41st] BX Kill Team";
					faction="FST_BattleDroids_Faction";
					side=0;
					class Unit0
					{
						side=0;
						vehicle="FST_BX";
						rank="SERGEANT";
						position[]={0,-0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="FST_BX";
						rank="PRIVATE";
						position[]={0,-1,0};
					};
					class Unit2
					{
						side=0;
						vehicle="FST_BX";
						rank="PRIVATE";
						position[]={1,-0,0};
					};
					class Unit3
					{
						side=0;
						vehicle="FST_BX";
						rank="PRIVATE";
						position[]={1,-1,0};
					};
				};
				class FST_BX_SniperTeam
				{
					name="[41st] BX Sniper Team";
					faction="FST_BattleDroids_Faction";
					side=0;
					class Unit0
					{
						side=0;
						vehicle="FST_BX_Sniper";
						rank="SERGEANT";
						position[]={0,-0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="FST_BX_Sniper";
						rank="PRIVATE";
						position[]={0,-1,0};
					};
				};
				class FST_B2_Team
				{
					name="[41st] B2 Team";
					faction="FST_BattleDroids_Faction";
					side=0;
					class Unit0
					{
						side=0;
						vehicle="FST_B2";
						rank="SERGEANT";
						position[]={0,-0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="FST_B2";
						rank="PRIVATE";
						position[]={0,-1,0};
					};
				};
				class FST_B2_Squad
				{
					name="[41st] B2 Squad";
					faction="FST_BattleDroids_Faction";
					side=0;
					class Unit0
					{
						side=0;
						vehicle="FST_B2";
						rank="SERGEANT";
						position[]={0,-0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="FST_B2";
						rank="PRIVATE";
						position[]={0,-1,0};
					};
					class Unit2
					{
						side=0;
						vehicle="FST_B2";
						rank="SERGEANT";
						position[]={0,-2,0};
					};
					class Unit3
					{
						side=0;
						vehicle="FST_B2";
						rank="PRIVATE";
						position[]={1,-0,-0};
					};
				};
				class FST_U_CIS_Heavy_FireTeam
				{
					name="[41st] Human Division Fireteam";
					faction="FST_BattleDroids_Faction";
					side=0;
					class Unit0
					{
						side=0;
						vehicle="FST_U_CIS_Heavy";
						rank="SERGEANT";
						position[]={1,-0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="FST_U_CIS_Heavy";
						rank="PRIVATE";
						position[]={1,-1,0};
					};
					class Unit2
					{
						side=0;
						vehicle="FST_U_CIS_Heavy_AT";
						rank="PRIVATE";
						position[]={1,-2,0};
					};
					class Unit3
					{
						side=0;
						vehicle="FST_U_CIS_Heavy";
						rank="PRIVATE";
						position[]={0,-0,0};
					};
					class Unit4
					{
						side=0;
						vehicle="FST_U_CIS_Heavy";
						rank="PRIVATE";
						position[]={0,-1,0};
					};
					class Unit5
					{
						side=0;
						vehicle="FST_U_CIS_Heavy";
						rank="PRIVATE";
						position[]={0,-2,0};
					};
				};
				class FST_U_CIS_Heavy_Squad
				{
					name="[41st] Human Division Squad";
					faction="FST_BattleDroids_Faction";
					side=0;
					class Unit0
					{
						side=0;
						vehicle="FST_U_CIS_Heavy";
						rank="SERGEANT";
						position[]={1,-0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="FST_U_CIS_Heavy";
						rank="PRIVATE";
						position[]={1,-1,0};
					};
					class Unit2
					{
						side=0;
						vehicle="FST_U_CIS_Heavy";
						rank="PRIVATE";
						position[]={1,-2,0};
					};
					class Unit3
					{
						side=0;
						vehicle="FST_U_CIS_Heavy_AT";
						rank="PRIVATE";
						position[]={1,-3,0};
					};
					class Unit4
					{
						side=0;
						vehicle="FST_U_CIS_Heavy";
						rank="PRIVATE";
						position[]={1,-4,0};
					};
					class Unit5
					{
						side=0;
						vehicle="FST_U_CIS_Heavy";
						rank="PRIVATE";
						position[]={1,-5,0};
					};
					class Unit6
					{
						side=0;
						vehicle="FST_U_CIS_Heavy";
						rank="PRIVATE";
						position[]={0,-0,0};
					};
					class Unit7
					{
						side=0;
						vehicle="FST_U_CIS_Heavy";
						rank="PRIVATE";
						position[]={0,-1,0};
					};
					class Unit8
					{
						side=0;
						vehicle="FST_U_CIS_Heavy_AT";
						rank="PRIVATE";
						position[]={0,-2,0};
					};
					class Unit9
					{
						side=0;
						vehicle="FST_U_CIS_Heavy";
						rank="PRIVATE";
						position[]={0,-3,0};
					};
					class Unit10
					{
						side=0;
						vehicle="FST_U_CIS_Heavy";
						rank="PRIVATE";
						position[]={0,-4,0};
					};
					class Unit11
					{
						side=0;
						vehicle="FST_U_CIS_Heavy";
						rank="PRIVATE";
						position[]={0,-5,0};
					};
				};
			};
		};
	};
};
