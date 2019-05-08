#include "../defines_battle.h"
#include "../../include/pokedex.h"
#include "../../include/constants/species.h"
#include "../../include/constants/items.h"

#define ALTERNATE_SIZE(species, height, weight) {species, height * 10, weight * 10}

const struct AlternateSize gAlternateSpeciesSizeTable[] =
{
	ALTERNATE_SIZE(SPECIES_VENUSAUR_MEGA, 2.4, 155.5),
	ALTERNATE_SIZE(SPECIES_CHARIZARD_MEGA_Y, 1.7, 100.5),
	ALTERNATE_SIZE(SPECIES_CHARIZARD_MEGA_X, 1.7, 110.5),
	ALTERNATE_SIZE(SPECIES_BLASTOISE_MEGA, 1.6, 101.1),
	ALTERNATE_SIZE(SPECIES_BEEDRILL_MEGA, 1.4, 40.5),
	ALTERNATE_SIZE(SPECIES_PIDGEOT, 2.2, 50.5),
	ALTERNATE_SIZE(SPECIES_RATTATA_A, 0.3, 3.8),
	ALTERNATE_SIZE(SPECIES_RATICATE_A, 0.7, 25.5),
	ALTERNATE_SIZE(SPECIES_RAICHU_A, 0.7, 21.0),
	ALTERNATE_SIZE(SPECIES_SANDSHREW_A, 0.7, 40.0),
	ALTERNATE_SIZE(SPECIES_SANDSLASH_A, 1.2, 55.0),
	ALTERNATE_SIZE(SPECIES_DIGLETT_A, 0.2, 1.0),
	ALTERNATE_SIZE(SPECIES_DUGTRIO_A, 0.7, 66.6),
	ALTERNATE_SIZE(SPECIES_PERSIAN_A, 1.1, 33.0),
	ALTERNATE_SIZE(SPECIES_ALAKAZAM_MEGA, 1.2, 105.8),
	ALTERNATE_SIZE(SPECIES_GEODUDE_A, 0.4, 20.3),
	ALTERNATE_SIZE(SPECIES_GRAVELER_A, 1.0, 110.0),
	ALTERNATE_SIZE(SPECIES_GOLEM_A, 1.7, 316.0),
	ALTERNATE_SIZE(SPECIES_SLOWBRO_MEGA, 2.0, 120.0),
	ALTERNATE_SIZE(SPECIES_GRIMER_A, 0.7, 42.0),
	ALTERNATE_SIZE(SPECIES_MUK_A, 1.0, 52.0),
	ALTERNATE_SIZE(SPECIES_GENGAR_MEGA, 1.4, 40.5),	
	ALTERNATE_SIZE(SPECIES_EXEGGUTOR_A, 10.9, 415.6),
	ALTERNATE_SIZE(SPECIES_MAROWAK_A, 1.0, 34.0),
	ALTERNATE_SIZE(SPECIES_KANGASKHAN_MEGA, 2.2, 100.0),
	ALTERNATE_SIZE(SPECIES_PINSIR_MEGA, 1.7, 59.0),
	ALTERNATE_SIZE(SPECIES_GYARADOS_MEGA, 6.5, 305.0),
	ALTERNATE_SIZE(SPECIES_AERODACTYL_MEGA, 2.1, 79.0),
	ALTERNATE_SIZE(SPECIES_MEWTWO_MEGA_Y, 1.5, 33.0),
	ALTERNATE_SIZE(SPECIES_MEWTWO_MEGA_X, 2.3, 127.0),
	ALTERNATE_SIZE(SPECIES_STEELIX_MEGA, 10.5, 740.0),
	ALTERNATE_SIZE(SPECIES_SCIZOR_MEGA, 2.0, 125.0),
	ALTERNATE_SIZE(SPECIES_HERACROSS_MEGA, 1.7, 62.5),
	ALTERNATE_SIZE(SPECIES_HOUNDOOM_MEGA, 1.9, 49.5),
	ALTERNATE_SIZE(SPECIES_TYRANITAR_MEGA, 2.5, 255.0),
	ALTERNATE_SIZE(SPECIES_SCEPTILE_MEGA, 1.9, 55.2),
	ALTERNATE_SIZE(SPECIES_SWAMPERT_MEGA, 1.9, 102.0),
	ALTERNATE_SIZE(SPECIES_SABLEYE_MEGA, 0.5, 161.0),
	ALTERNATE_SIZE(SPECIES_MAWILE_MEGA, 1.0, 23.5),
	ALTERNATE_SIZE(SPECIES_AGGRON_MEGA, 2.2, 395.0),
	ALTERNATE_SIZE(SPECIES_MANECTRIC_MEGA, 1.8, 44.0),
	ALTERNATE_SIZE(SPECIES_SHARPEDO_MEGA, 2.5, 130.3),
	ALTERNATE_SIZE(SPECIES_CAMERUPT_MEGA, 2.5, 320.5),
	ALTERNATE_SIZE(SPECIES_ALTARIA_MEGA, 1.5, 20.6),
	ALTERNATE_SIZE(SPECIES_BANETTE_MEGA, 1.2, 13.0),
	ALTERNATE_SIZE(SPECIES_ABSOL_MEGA, 1.2, 49.0),
	ALTERNATE_SIZE(SPECIES_GLALIE_MEGA, 2.1, 350.2),
	ALTERNATE_SIZE(SPECIES_SALAMENCE_MEGA, 1.8, 112.6),
	ALTERNATE_SIZE(SPECIES_METAGROSS_MEGA, 2.5, 942.9),
	ALTERNATE_SIZE(SPECIES_LATIAS_MEGA, 1.8, 52.0),
	ALTERNATE_SIZE(SPECIES_LATIOS_MEGA, 2.3, 70.0),
	ALTERNATE_SIZE(SPECIES_KYOGRE_PRIMAL, 9.8, 430.0),
	ALTERNATE_SIZE(SPECIES_GROUDON_PRIMAL, 5.0, 999.7),
	ALTERNATE_SIZE(SPECIES_RAYQUAZA_MEGA, 10.8, 392.0),
	ALTERNATE_SIZE(SPECIES_LOPUNNY_MEGA, 1.3, 28.3),
	ALTERNATE_SIZE(SPECIES_LUCARIO_MEGA, 1.3, 57.5),
	ALTERNATE_SIZE(SPECIES_ABOMASNOW_MEGA, 2.7, 185.0),
	ALTERNATE_SIZE(SPECIES_GALLADE_MEGA, 1.6, 56.4),
	ALTERNATE_SIZE(SPECIES_GIRATINA_ORIGIN, 6.9, 650.0),
	ALTERNATE_SIZE(SPECIES_SHAYMIN_SKY, 0.4, 5.2),
	ALTERNATE_SIZE(SPECIES_AUDINO_MEGA, 1.5, 32.0),
	ALTERNATE_SIZE(SPECIES_TORNADUS_THERIAN, 1.4, 63.0),
	ALTERNATE_SIZE(SPECIES_THUNDURUS_THERIAN, 3.0, 61.0),
	ALTERNATE_SIZE(SPECIES_LANDORUS_THERIAN, 1.3, 68.0),
	ALTERNATE_SIZE(SPECIES_KYUREM_BLACK, 3.3, 325.0),
	ALTERNATE_SIZE(SPECIES_KYUREM_WHITE, 3.6, 325.0),
	ALTERNATE_SIZE(SPECIES_PUMPKABOO_M, 0.4, 5.0),
	ALTERNATE_SIZE(SPECIES_PUMPKABOO_L, 0.5, 7.5),
	ALTERNATE_SIZE(SPECIES_PUMPKABOO_XL, 0.8, 15.0),
	ALTERNATE_SIZE(SPECIES_GOURGEIST_M, 0.9, 12.5),
	ALTERNATE_SIZE(SPECIES_GOURGEIST_L, 1.1, 14.0),
	ALTERNATE_SIZE(SPECIES_GOURGEIST_XL, 1.7, 39.0),
	ALTERNATE_SIZE(SPECIES_ZYGARDE_10, 1.2, 33.5),
	ALTERNATE_SIZE(SPECIES_ZYGARDE_COMPLETE, 4.5, 610.0),
	ALTERNATE_SIZE(SPECIES_DIANCIE_MEGA, 1.1, 27.8),
	ALTERNATE_SIZE(SPECIES_HOOPA_UNBOUND, 6.5, 490.0),
	ALTERNATE_SIZE(SPECIES_LYCANROC_N, 1.1, 25.0),
	ALTERNATE_SIZE(SPECIES_WISHIWASHI_S, 8.2, 78.6),
	ALTERNATE_SIZE(SPECIES_MINIOR_RED, 0.3, 0.3),	
	ALTERNATE_SIZE(SPECIES_MINIOR_BLUE, 0.3, 0.3),
	ALTERNATE_SIZE(SPECIES_MINIOR_ORANGE, 0.3, 0.3),
	ALTERNATE_SIZE(SPECIES_MINIOR_YELLOW, 0.3, 0.3),
	ALTERNATE_SIZE(SPECIES_MINIOR_INDIGO, 0.3, 0.3),
	ALTERNATE_SIZE(SPECIES_MINIOR_GREEN, 0.3, 0.3),
	ALTERNATE_SIZE(SPECIES_MINIOR_VIOLET, 0.3, 0.3),
	ALTERNATE_SIZE(SPECIES_NECROZMA_WINGS, 4.2, 350.0),
	ALTERNATE_SIZE(SPECIES_NECROZMA_MANE, 3.8, 460.0),
	ALTERNATE_SIZE(SPECIES_NECROZMA_ULTRA, 7.5, 230.0),
	ALTERNATE_SIZE(SPECIES_TABLES_TERMIN, 0, 0),
};

//The move Telekinesis don't affect these Pokemon
const species_t TelekinesisBanList[] =
{
	SPECIES_DIGLETT,
	SPECIES_DUGTRIO,
	SPECIES_DIGLETT_A,
	SPECIES_DUGTRIO_A,
	SPECIES_SANDYGAST,
	SPECIES_PALOSSAND,
	SPECIES_GENGAR_MEGA,
	SPECIES_TABLES_TERMIN
};

const species_t gSkyBattleBannedSpeciesList[] =
{
#ifndef UNBOUND
	SPECIES_SPEAROW,
	SPECIES_FAFETCHD,
	SPECIES_HOOTHOOT,
	SPECIES_NATU,
	SPECIES_MURKROW,
	SPECIES_DELIBIRD,
	SPECIES_TAILOW,
	SPECIES_STARLY,
	SPECIES_CHATOT,
	SPECIES_SHAYMIN_SKY,
	SPECIES_PIDOVE,
	SPECIES_ARCHEN,
	SPECIES_DUCKLETT,
	SPECIES_RUFFLET,
	SPECIES_VULLABY,
	SPECIES_FLETCHLING,
	SPECIES_HAWLUCHA,
	SPECIES_ROWLET,
	SPECIES_PIKIPEK,
#endif
	SPECIES_GENGAR,
	SPECIES_SILVALLY_FLYING,
	SPECIES_DODUO,
	SPECIES_DODRIO,
};

//For the purposes of the Beast Ball
const species_t UltraBeastTable[] =
{
	SPECIES_NIHILEGO,
	SPECIES_BUZZWOLE,
	SPECIES_PHEROMOSA,
	SPECIES_XURKITREE,
	SPECIES_CELESTEELA,
	SPECIES_KARTANA,
	SPECIES_GUZZLORD,
	SPECIES_POIPOLE,
	SPECIES_NAGANADEL,
	SPECIES_STAKATAKA,
	SPECIES_BLACEPHALON,
	SPECIES_TABLES_TERMIN
};

const species_t StandardSpeciesBanList[] = 
{
	SPECIES_MEWTWO,
	SPECIES_MEW,
	SPECIES_LUGIA,
	SPECIES_HO_OH,
	SPECIES_CELEBI,
	SPECIES_KYOGRE,
	SPECIES_GROUDON,
	SPECIES_RAYQUAZA,
	SPECIES_JIRACHI,
	SPECIES_DEOXYS,
	SPECIES_DEOXYS_ATTACK,
	SPECIES_DEOXYS_DEFENSE,
	SPECIES_DEOXYS_SPEED,
	SPECIES_DIALGA,
	SPECIES_PALKIA,
	SPECIES_GIRATINA,
	SPECIES_GIRATINA_ORIGIN,
	SPECIES_PHIONE,
	SPECIES_MANAPHY,
	SPECIES_DARKRAI,
	SPECIES_SHAYMIN,
	SPECIES_SHAYMIN_SKY,
	SPECIES_ARCEUS,
	SPECIES_ARCEUS_FIGHT,
	SPECIES_ARCEUS_FLYING,
	SPECIES_ARCEUS_POISON,
	SPECIES_ARCEUS_GROUND,
	SPECIES_ARCEUS_ROCK,
	SPECIES_ARCEUS_BUG,
	SPECIES_ARCEUS_GHOST,
	SPECIES_ARCEUS_STEEL,
	SPECIES_ARCEUS_FIRE,
	SPECIES_ARCEUS_WATER,
	SPECIES_ARCEUS_GRASS,
	SPECIES_ARCEUS_ELECTRIC,
	SPECIES_ARCEUS_PSYCHIC,
	SPECIES_ARCEUS_ICE,
	SPECIES_ARCEUS_DRAGON,
	SPECIES_ARCEUS_DARK,
	SPECIES_ARCEUS_FAIRY,
	SPECIES_VICTINI,
	SPECIES_RESHIRAM,
	SPECIES_ZEKROM,
	SPECIES_KYUREM,
	SPECIES_KYUREM_BLACK,
	SPECIES_KYUREM_WHITE,
	SPECIES_KELDEO,
	SPECIES_KELDEO_RESOLUTE,
	SPECIES_MELOETTA,
	SPECIES_MELOETTA_PIROUETTE,
	SPECIES_GENESECT,
	SPECIES_GENESECT_SHOCK,
	SPECIES_GENESECT_BURN,
	SPECIES_GENESECT_CHILL,
	SPECIES_GENESECT_DOUSE,
	SPECIES_XERNEAS,
	SPECIES_YVELTAL,
	SPECIES_DIANCIE,
	SPECIES_HOOPA,
	SPECIES_HOOPA_UNBOUND,
	SPECIES_VOLCANION,
	SPECIES_ZYGARDE,
	SPECIES_ZYGARDE_10,
	SPECIES_COSMOG,
	SPECIES_COSMOEM,
	SPECIES_SOLGALEO,
	SPECIES_LUNALA,
	SPECIES_MAGEARNA,
	SPECIES_MAGEARNA_P,
	SPECIES_MARSHADOW,
	SPECIES_NECROZMA,
	SPECIES_NECROZMA_MANE,
	SPECIES_NECROZMA_WINGS,
	SPECIES_ZERAORA,
	SPECIES_TABLES_TERMIN
};

const species_t OU_SpeciesBanList[] = 
{
	SPECIES_AEGISLASH,
	SPECIES_ARCEUS,
	SPECIES_ARCEUS_FIGHT,
	SPECIES_ARCEUS_FLYING,
	SPECIES_ARCEUS_POISON,
	SPECIES_ARCEUS_GROUND,
	SPECIES_ARCEUS_ROCK,
	SPECIES_ARCEUS_BUG,
	SPECIES_ARCEUS_GHOST,
	SPECIES_ARCEUS_STEEL,
	SPECIES_ARCEUS_FIRE,
	SPECIES_ARCEUS_WATER,
	SPECIES_ARCEUS_GRASS,
	SPECIES_ARCEUS_ELECTRIC,
	SPECIES_ARCEUS_PSYCHIC,
	SPECIES_ARCEUS_ICE,
	SPECIES_ARCEUS_DRAGON,
	SPECIES_ARCEUS_DARK,
	SPECIES_ARCEUS_FAIRY,
	SPECIES_BLAZIKEN,
	SPECIES_DARKRAI,
	SPECIES_DEOXYS,
	SPECIES_DEOXYS_ATTACK,
	SPECIES_DEOXYS_DEFENSE,
	SPECIES_DEOXYS_SPEED,
	SPECIES_DIALGA,
	SPECIES_GENESECT,
	SPECIES_GENESECT_SHOCK,
	SPECIES_GENESECT_BURN,
	SPECIES_GENESECT_CHILL,
	SPECIES_GENESECT_DOUSE,
	SPECIES_GIRATINA,
	SPECIES_GIRATINA_ORIGIN,
	SPECIES_GROUDON,
	SPECIES_HO_OH,
	SPECIES_KYOGRE,
	SPECIES_KYUREM,
	SPECIES_KYUREM_BLACK,
	SPECIES_KYUREM_WHITE,
	SPECIES_LANDORUS,
	SPECIES_LUGIA,
	SPECIES_LUNALA,
	SPECIES_MARSHADOW,
	SPECIES_MEWTWO,
	SPECIES_NAGANADEL,
	SPECIES_NECROZMA_MANE,
	SPECIES_NECROZMA_WINGS,
	SPECIES_PALKIA,
	SPECIES_PHEROMOSA,
	SPECIES_RAYQUAZA,
	SPECIES_RESHIRAM,
	SPECIES_SHAYMIN_SKY,
	SPECIES_SOLGALEO,
	SPECIES_XERNEAS,
	SPECIES_YVELTAL,
	SPECIES_ZEKROM,
	SPECIES_TABLES_TERMIN
};

const ability_t OU_AbilityBanList[] = 
{
	ABILITY_ARENATRAP,
	ABILITY_SHADOWTAG,
	ABILITY_POWERCONSTRUCT,
	ABILITY_MOODY,
	ABILITY_TABLES_TERMIN
};

const item_t StandardItemBanList[] = 
{
	#ifdef OLD_SOUL_DEW_EFFECT
	ITEM_SOUL_DEW,
	#endif
	ITEM_TABLES_TERMIN
};

const item_t OU_ItemBanList[] = 
{
	ITEM_BLAZIKENITE,
	ITEM_GENGARITE,
	ITEM_LUCARIONITE,
	ITEM_METAGROSSITE,
	ITEM_SALAMENCITE,
	ITEM_RED_ORB,
	ITEM_BLUE_ORB,
	#ifdef OLD_SOUL_DEW_EFFECT
	ITEM_SOUL_DEW,
	#endif
	ITEM_TABLES_TERMIN
};

const move_t SmogonMoveBanList[] = 
{
	MOVE_DOUBLETEAM,
	MOVE_MINIMIZE,
	MOVE_FISSURE,
	MOVE_GUILLOTINE,
	MOVE_HORNDRILL,
	MOVE_SHEERCOLD,
	MOVE_SWAGGER,
	MOVE_TABLES_TERMIN
};

const species_t LittleCup_SpeciesList[] = 
{
	SPECIES_ABRA,
	SPECIES_AMAURA,
	SPECIES_ANORITH,
	SPECIES_ARCHEN,
	SPECIES_ARON,
	SPECIES_AXEW,
	SPECIES_AZURILL,
	SPECIES_BAGON,
	SPECIES_BALTOY,
	SPECIES_BARBOACH,
	SPECIES_BELDUM,
	SPECIES_BELLSPROUT,
	SPECIES_BERGMITE,
	SPECIES_BIDOOF,
	SPECIES_BINACLE,
	SPECIES_BLITZLE,
	SPECIES_BONSLY,
	SPECIES_BOUNSWEET,
	SPECIES_BRONZOR,
	SPECIES_BUDEW,
	SPECIES_BUIZEL,
	SPECIES_BULBASAUR,
	SPECIES_BUNEARY,
	SPECIES_BUNNELBY,
	SPECIES_BURMY,
	SPECIES_BURMY_SANDY,
	SPECIES_BURMY_TRASH,
	SPECIES_CACNEA,
	SPECIES_CARVANHA,
	SPECIES_CATERPIE,
	SPECIES_CHARMANDER,
	SPECIES_CHERUBI,
	SPECIES_CHESPIN,
	SPECIES_CHIKORITA,
	SPECIES_CHIMCHAR,
	SPECIES_CHINCHOU,
	SPECIES_CHINGLING,
	SPECIES_CLAMPERL,
	SPECIES_CLAUNCHER,
	SPECIES_CLEFFA,
	SPECIES_COMBEE,
	SPECIES_CORPHISH,
	SPECIES_COSMOG,
	SPECIES_COTTONEE,
	SPECIES_CRABRAWLER,
	SPECIES_CRANIDOS,
	SPECIES_CROAGUNK,
	SPECIES_CUBCHOO,
	SPECIES_CUBONE,
	SPECIES_CYNDAQUIL,
	SPECIES_DARUMAKA,
	SPECIES_DEERLING,
	SPECIES_DEERLING_SUMMER,
	SPECIES_DEERLING_AUTUMN,
	SPECIES_DEERLING_WINTER,
	SPECIES_DEINO,
	SPECIES_DEWPIDER,
	SPECIES_DIGLETT,
	SPECIES_DIGLETT_A,
	SPECIES_DODUO,
	SPECIES_DRATINI,
	SPECIES_DRILBUR,
	SPECIES_DROWZEE,
	SPECIES_DUCKLETT,
	SPECIES_DUSKULL,
	SPECIES_DWEBBLE,
	SPECIES_EEVEE,
	SPECIES_EKANS,
	SPECIES_ELECTRIKE,
	SPECIES_ELEKID,
	SPECIES_ELGYEM,
	SPECIES_ESPURR,
	SPECIES_EXEGGCUTE,
	SPECIES_FEEBAS,
	SPECIES_FENNEKIN,
	SPECIES_FERROSEED,
	SPECIES_FINNEON,
	SPECIES_FLABEBE,
	SPECIES_FLABEBE_BLUE,
	SPECIES_FLABEBE_ORANGE,
	SPECIES_FLABEBE_YELLOW,
	SPECIES_FLABEBE_WHITE,
	SPECIES_FLETCHLING,
	SPECIES_FOMANTIS,
	SPECIES_FOONGUS,
	SPECIES_FRILLISH,
	SPECIES_FRILLISH_F,
	SPECIES_FROAKIE,
	SPECIES_GASTLY,
	SPECIES_GEODUDE,
	SPECIES_GEODUDE_A,
	SPECIES_GIBLE,
	SPECIES_GLAMEOW,
	SPECIES_GOLDEEN,
	SPECIES_GOLETT,
	SPECIES_GOOMY,
	SPECIES_GRIMER,
	SPECIES_GRIMER_A,
	SPECIES_GROWLITHE,
	SPECIES_GRUBBIN,
	SPECIES_GULPIN,
	SPECIES_HAPPINY,
	SPECIES_HELIOPTILE,
	SPECIES_HIPPOPOTAS,
	SPECIES_HIPPOPOTAS_F,
	SPECIES_HONEDGE,
	SPECIES_HOOTHOOT,
	SPECIES_HOPPIP,
	SPECIES_HORSEA,
	SPECIES_HOUNDOUR,
	SPECIES_IGGLYBUFF,
	SPECIES_INKAY,
	SPECIES_JANGMO_O,
	SPECIES_JOLTIK,
	SPECIES_KABUTO,
	SPECIES_KARRABLAST,
	SPECIES_KLINK,
	SPECIES_KOFFING,
	SPECIES_KRABBY,
	SPECIES_KRICKETOT,
	SPECIES_LARVESTA,
	SPECIES_LARVITAR,
	SPECIES_LEDYBA,
	SPECIES_LICKITUNG,
	SPECIES_LILEEP,
	SPECIES_LILLIPUP,
	SPECIES_LITLEO,
	SPECIES_LITTEN,
	SPECIES_LITWICK,
	SPECIES_LOTAD,
	SPECIES_MACHOP,
	SPECIES_MAGBY,
	SPECIES_MAGIKARP,
	SPECIES_MAGNEMITE,
	SPECIES_MAKUHITA,
	SPECIES_MANKEY,
	SPECIES_MANTYKE,
	SPECIES_MAREANIE,
	SPECIES_MAREEP,
	SPECIES_MEOWTH,
	SPECIES_MEOWTH_A,
	SPECIES_MIENFOO,
	SPECIES_MIME_JR,
	SPECIES_MINCCINO,
	SPECIES_MORELULL,
	SPECIES_MUDBRAY,
	SPECIES_MUDKIP,
	SPECIES_MUNCHLAX,
	SPECIES_MUNNA,
	SPECIES_NATU,
	SPECIES_NIDORAN_F,
	SPECIES_NIDORAN_M,
	SPECIES_NINCADA,
	SPECIES_NOIBAT,
	SPECIES_NOSEPASS,
	SPECIES_NUMEL,
	SPECIES_ODDISH,
	SPECIES_OMANYTE,
	SPECIES_ONIX,
	SPECIES_OSHAWOTT,
	SPECIES_PANCHAM,
	SPECIES_PANPOUR,
	SPECIES_PANSAGE,
	SPECIES_PANSEAR,
	SPECIES_PARAS,
	SPECIES_PATRAT,
	SPECIES_PAWNIARD,
	SPECIES_PETILIL,
	SPECIES_PHANPY,
	SPECIES_PHANTUMP,
	SPECIES_PICHU,
	SPECIES_PIDGEY,
	SPECIES_PIDOVE,
	SPECIES_PIKIPEK,
	SPECIES_PINECO,
	SPECIES_PIPLUP,
	SPECIES_POLIWAG,
	SPECIES_PONYTA,
	SPECIES_POOCHYENA,
	SPECIES_POPPLIO,
	SPECIES_PSYDUCK,
	SPECIES_PUMPKABOO,
	SPECIES_PUMPKABOO_XL,
	SPECIES_PUMPKABOO_L,
	SPECIES_PUMPKABOO_M,
	SPECIES_PURRLOIN,
	SPECIES_RALTS,
	SPECIES_RATTATA,
	SPECIES_RATTATA_A,
	SPECIES_REMORAID,
	SPECIES_RHYHORN,
	SPECIES_RIOLU,
	SPECIES_ROCKRUFF,
	SPECIES_ROGGENROLA,
	SPECIES_ROWLET,
	SPECIES_RUFFLET,
	SPECIES_SALANDIT,
	SPECIES_SANDILE,
	SPECIES_SANDSHREW,
	SPECIES_SANDSHREW_A,
	SPECIES_SANDYGAST,
	SPECIES_SCATTERBUG,
	SPECIES_SCRAGGY,
	SPECIES_SEEDOT,
	SPECIES_SEEL,
	SPECIES_SENTRET,
	SPECIES_SEWADDLE,
	SPECIES_SHELLDER,
	SPECIES_SHELLOS,
	SPECIES_SHELLOS_EAST,
	SPECIES_SHELMET,
	SPECIES_SHIELDON,
	SPECIES_SHINX,
	SPECIES_SHROOMISH,
	SPECIES_SHUPPET,
	SPECIES_SKIDDO,
	SPECIES_SKITTY,
	SPECIES_SKORUPI,
	SPECIES_SKRELP,
	SPECIES_SLAKOTH,
	SPECIES_SLOWPOKE,
	SPECIES_SLUGMA,
	SPECIES_SMOOCHUM,
	SPECIES_SNIVY,
	SPECIES_SNORUNT,
	SPECIES_SNOVER,
	SPECIES_SNUBBULL,
	SPECIES_SOLOSIS,
	SPECIES_SPEAROW,
	SPECIES_SPHEAL,
	SPECIES_SPINARAK,
	SPECIES_SPOINK,
	SPECIES_SPRITZEE,
	SPECIES_SQUIRTLE,
	SPECIES_STARLY,
	SPECIES_STARYU,
	SPECIES_STUFFUL,
	SPECIES_STUNKY,
	SPECIES_SUNKERN,
	SPECIES_SURSKIT,
	SPECIES_SWABLU,
	SPECIES_SWINUB,
	SPECIES_TAILLOW,
	SPECIES_TEDDIURSA,
	SPECIES_TENTACOOL,
	SPECIES_TEPIG,
	SPECIES_TIMBURR,
	SPECIES_TIRTOUGA,
	SPECIES_TOGEPI,
	SPECIES_TOTODILE,
	SPECIES_TRAPINCH,
	SPECIES_TREECKO,
	SPECIES_TRUBBISH,
	SPECIES_TURTWIG,
	SPECIES_TYMPOLE,
	SPECIES_TYNAMO,
	SPECIES_TYROGUE,
	SPECIES_TYRUNT,
	SPECIES_VANILLITE,
	SPECIES_VENIPEDE,
	SPECIES_VENONAT,
	SPECIES_VOLTORB,
	SPECIES_VULLABY,
	SPECIES_VULPIX_A,
	SPECIES_WAILMER,
	SPECIES_WEEDLE,
	SPECIES_WHISMUR,
	SPECIES_WIMPOD,
	SPECIES_WINGULL,
	SPECIES_WOOBAT,
	SPECIES_WOOPER,
	SPECIES_WURMPLE,
	SPECIES_WYNAUT,
	SPECIES_YAMASK,
	SPECIES_YUNGOOS,
	SPECIES_ZIGZAGOON,
	SPECIES_ZORUA,
	SPECIES_ZUBAT,
	SPECIES_TABLES_TERMIN
};

const move_t LittleCup_MoveBanList[] = 
{
	MOVE_DRAGONRAGE,
	MOVE_SONICBOOM,
	MOVE_SWAGGER,
	MOVE_TABLES_TERMIN
};

#ifdef CREATE_WITH_X_PERFECT_IVS
const species_t gSetPerfectXIvList[] =
{
	SPECIES_ARTICUNO,
	SPECIES_ZAPDOS,
	SPECIES_MOLTRES,
	SPECIES_MEWTWO,
	SPECIES_MEW,
	SPECIES_RAIKOU,
	SPECIES_ENTEI,
	SPECIES_SUICUNE,
	SPECIES_LUGIA,
	SPECIES_HO_OH,
	SPECIES_CELEBI,
	SPECIES_REGIROCK,
	SPECIES_REGICE,
	SPECIES_REGISTEEL,
	SPECIES_LATIAS,
	SPECIES_LATIOS,
	SPECIES_KYOGRE,
	SPECIES_KYOGRE_PRIMAL,
	SPECIES_GROUDON,
	SPECIES_GROUDON_PRIMAL,
	SPECIES_RAYQUAZA,
	SPECIES_JIRACHI,
	SPECIES_DEOXYS,
	SPECIES_DEOXYS_ATTACK,
	SPECIES_DEOXYS_DEFENSE,
	SPECIES_DEOXYS_SPEED,
	SPECIES_AZELF,
	SPECIES_MESPRIT,
	SPECIES_UXIE,
	SPECIES_DIALGA,
	SPECIES_DIALGA_PRIMAL,
	SPECIES_PALKIA,
	SPECIES_PALKIA_PRIMAL,
	SPECIES_GIRATINA,
	SPECIES_GIRATINA_ORIGIN,
	SPECIES_CRESSELIA,
	SPECIES_HEATRAN,
	SPECIES_REGIGIGAS,
	SPECIES_PHIONE,
	SPECIES_MANAPHY,
	SPECIES_DARKRAI,
	SPECIES_SHAYMIN,
	SPECIES_SHAYMIN_SKY,
	SPECIES_ARCEUS,
	SPECIES_ARCEUS_FIGHT,
	SPECIES_ARCEUS_FLYING,
	SPECIES_ARCEUS_POISON,
	SPECIES_ARCEUS_GROUND,
	SPECIES_ARCEUS_ROCK,
	SPECIES_ARCEUS_BUG,
	SPECIES_ARCEUS_GHOST,
	SPECIES_ARCEUS_STEEL,
	SPECIES_ARCEUS_FIRE,
	SPECIES_ARCEUS_WATER,
	SPECIES_ARCEUS_GRASS,
	SPECIES_ARCEUS_ELECTRIC,
	SPECIES_ARCEUS_PSYCHIC,
	SPECIES_ARCEUS_ICE,
	SPECIES_ARCEUS_DRAGON,
	SPECIES_ARCEUS_DARK,
	SPECIES_ARCEUS_FAIRY,
	SPECIES_VICTINI,
	SPECIES_COBALION,
	SPECIES_TERRAKION,
	SPECIES_VIRIZION,
	SPECIES_TORNADUS,
	SPECIES_TORNADUS_THERIAN,
	SPECIES_THUNDURUS,
	SPECIES_THUNDURUS_THERIAN,
	SPECIES_LANDORUS,
	SPECIES_LANDORUS_THERIAN,
	SPECIES_RESHIRAM,
	SPECIES_ZEKROM,
	SPECIES_KYUREM,
	SPECIES_KYUREM_BLACK,
	SPECIES_KYUREM_WHITE,
	SPECIES_KELDEO,
	SPECIES_KELDEO_RESOLUTE,
	SPECIES_MELOETTA,
	SPECIES_MELOETTA_PIROUETTE,
	SPECIES_GENESECT,
	SPECIES_GENESECT_SHOCK,
	SPECIES_GENESECT_BURN,
	SPECIES_GENESECT_CHILL,
	SPECIES_GENESECT_DOUSE,
	SPECIES_XERNEAS,
	SPECIES_YVELTAL,
	SPECIES_DIANCIE,
	SPECIES_HOOPA,
	SPECIES_HOOPA_UNBOUND,
	SPECIES_VOLCANION,
	SPECIES_ZYGARDE,
	SPECIES_ZYGARDE_10,
	SPECIES_TYPE_NULL,
	SPECIES_SILVALLY,
	SPECIES_TAPU_KOKO,
	SPECIES_TAPU_LELE,
	SPECIES_TAPU_BULU,
	SPECIES_TAPU_FINI,
	SPECIES_COSMOG,
	SPECIES_COSMOEM,
	SPECIES_SOLGALEO,
	SPECIES_LUNALA,
	SPECIES_NIHILEGO,
	SPECIES_BUZZWOLE,
	SPECIES_PHEROMOSA,
	SPECIES_XURKITREE,
	SPECIES_CELESTEELA,
	SPECIES_KARTANA,
	SPECIES_GUZZLORD,
	SPECIES_POIPOLE,
	SPECIES_NAGANADEL,
	SPECIES_STAKATAKA,
	SPECIES_BLACEPHALON,
	SPECIES_MAGEARNA,
	SPECIES_MAGEARNA_P,
	SPECIES_MARSHADOW,
	SPECIES_NECROZMA,
	SPECIES_NECROZMA_MANE,
	SPECIES_NECROZMA_WINGS,
	SPECIES_ZERAORA,
	SPECIES_MELTAN,
	SPECIES_MELMETAL,
	SPECIES_TABLES_TERMIN
};
#endif

#ifdef UNBOUND
const species_t gRandomizerBanList[] =
{
	0xFC,
	0xFD,
	0xFE,
	0xFF,
	0x100,
	0x101,
	0x102,
	0x103,
	0x104,
	0x105,
	0x106,
	0x107,
	0x108,
	0x109,
	0x10A,
	0x10B,
	0x10C,
	0x10D,
	0x10E,
	0x10F,
	0x110,
	0x111,
	0x112,
	0x113,
	0x114,
	SPECIES_EGG,
	SPECIES_UNOWN_B,
	SPECIES_UNOWN_C,
	SPECIES_UNOWN_D,
	SPECIES_UNOWN_E,
	SPECIES_UNOWN_F,
	SPECIES_UNOWN_G,
	SPECIES_UNOWN_H,
	SPECIES_UNOWN_I,
	SPECIES_UNOWN_J,
	SPECIES_UNOWN_K,
	SPECIES_UNOWN_L,
	SPECIES_UNOWN_M,
	SPECIES_UNOWN_N,
	SPECIES_UNOWN_O,
	SPECIES_UNOWN_P,
	SPECIES_UNOWN_Q,
	SPECIES_UNOWN_R,
	SPECIES_UNOWN_S,
	SPECIES_UNOWN_T,
	SPECIES_UNOWN_U,
	SPECIES_UNOWN_V,
	SPECIES_UNOWN_W,
	SPECIES_UNOWN_X,
	SPECIES_UNOWN_Y,
	SPECIES_UNOWN_Z,
	SPECIES_UNOWN_EXCLAMATION,
	SPECIES_UNOWN_QUESTION,
	SPECIES_UNFEZANT_F,
	SPECIES_FRILLISH_F,
	SPECIES_JELLICENT_F,
	SPECIES_SHADOW_WARRIOR,
	SPECIES_ROTOM_HEAT,
	SPECIES_ROTOM_WASH,
	SPECIES_ROTOM_FROST,
	SPECIES_ROTOM_FAN,
	SPECIES_ROTOM_MOW,
	SPECIES_GIRATINA_ORIGIN,
	SPECIES_SHAYMIN_SKY,
	SPECIES_ARCEUS_FIGHT,
	SPECIES_ARCEUS_FLYING,
	SPECIES_ARCEUS_POISON,
	SPECIES_ARCEUS_GROUND,
	SPECIES_ARCEUS_ROCK,
	SPECIES_ARCEUS_BUG,
	SPECIES_ARCEUS_GHOST,
	SPECIES_ARCEUS_STEEL,
	SPECIES_ARCEUS_FIRE,
	SPECIES_ARCEUS_WATER,
	SPECIES_ARCEUS_GRASS,
	SPECIES_ARCEUS_ELECTRIC,
	SPECIES_ARCEUS_PSYCHIC,
	SPECIES_ARCEUS_ICE,
	SPECIES_ARCEUS_DRAGON,
	SPECIES_ARCEUS_DARK,
	SPECIES_DARMANITANZEN,
	SPECIES_HIPPOPOTAS_F,
	SPECIES_HIPPOWDON_F,
	SPECIES_MELOETTA_PIROUETTE,
	SPECIES_GENESECT_SHOCK,
	SPECIES_GENESECT_BURN,
	SPECIES_GENESECT_CHILL,
	SPECIES_GENESECT_DOUSE,
	SPECIES_CHERRIM_SUN,
	SPECIES_KYUREM_BLACK,
	SPECIES_KYUREM_WHITE,
	SPECIES_TORNADUS_THERIAN,
	SPECIES_THUNDURUS_THERIAN,
	SPECIES_LANDORUS_THERIAN,
	SPECIES_KELDEO_RESOLUTE,
	SPECIES_HOOPA_UNBOUND,
	SPECIES_PYROAR_FEMALE,
	SPECIES_MEOWSTIC_FEMALE,
	SPECIES_AEGISLASH_BLADE,
	SPECIES_ARCEUS_FAIRY,
	SPECIES_ZYGARDE_CELL,
	SPECIES_ZYGARDE_CORE,
	SPECIES_ZYGARDE_10,
	SPECIES_ZYGARDE_COMPLETE,
	SPECIES_ASHGRENINJA,
	SPECIES_FURFROU_HEART,
	SPECIES_FURFROU_DIAMOND,
	SPECIES_FURFROU_STAR,
	SPECIES_FURFROU_PHAROAH,
	SPECIES_FURFROU_KABUKI,
	SPECIES_FURFROU_LA_REINE,
	SPECIES_FURFROU_MATRON,
	SPECIES_FURFROU_DANDY,
	SPECIES_FURFROU_DEBUTANTE,
	SPECIES_VENUSAUR_MEGA,
	SPECIES_CHARIZARD_MEGA_X,
	SPECIES_CHARIZARD_MEGA_Y,
	SPECIES_BLASTOISE_MEGA,
	SPECIES_BEEDRILL_MEGA,
	SPECIES_PIDGEOT_MEGA,
	SPECIES_ALAKAZAM_MEGA,
	SPECIES_SLOWBRO_MEGA,
	SPECIES_GENGAR_MEGA,
	SPECIES_KANGASKHAN_MEGA,
	SPECIES_PINSIR_MEGA,
	SPECIES_GYARADOS_MEGA,
	SPECIES_AERODACTYL_MEGA,
	SPECIES_MEWTWO_MEGA_X,
	SPECIES_MEWTWO_MEGA_Y,
	SPECIES_AMPHAROS_MEGA,
	SPECIES_STEELIX_MEGA,
	SPECIES_SCIZOR_MEGA,
	SPECIES_HERACROSS_MEGA,
	SPECIES_HOUNDOOM_MEGA,
	SPECIES_TYRANITAR_MEGA,
	SPECIES_SCEPTILE_MEGA,
	SPECIES_BLAZIKEN_MEGA,
	SPECIES_SWAMPERT_MEGA,
	SPECIES_GARDEVOIR_MEGA,
	SPECIES_SABLEYE_MEGA,
	SPECIES_MAWILE_MEGA,
	SPECIES_AGGRON_MEGA,
	SPECIES_MEDICHAM_MEGA,
	SPECIES_MANECTRIC_MEGA,
	SPECIES_SHARPEDO_MEGA,
	SPECIES_CAMERUPT_MEGA,
	SPECIES_ALTARIA_MEGA,
	SPECIES_BANETTE_MEGA,
	SPECIES_ABSOL_MEGA,
	SPECIES_GLALIE_MEGA,
	SPECIES_SALAMENCE_MEGA,
	SPECIES_METAGROSS_MEGA,
	SPECIES_LATIAS_MEGA,
	SPECIES_LATIOS_MEGA,
	SPECIES_GROUDON_PRIMAL,
	SPECIES_KYOGRE_PRIMAL,
	SPECIES_RAYQUAZA_MEGA,
	SPECIES_LOPUNNY_MEGA,
	SPECIES_GARCHOMP_MEGA,
	SPECIES_LUCARIO_MEGA,
	SPECIES_ABOMASNOW_MEGA,
	SPECIES_GALLADE_MEGA,
	SPECIES_AUDINO_MEGA,
	SPECIES_DIANCIE_MEGA,
	SPECIES_DIALGA_PRIMAL,
	SPECIES_PALKIA_PRIMAL,
	SPECIES_DEOXYS_ATTACK,
	SPECIES_DEOXYS_DEFENSE,
	SPECIES_DEOXYS_SPEED,
	SPECIES_WISHIWASHI_S,
	SPECIES_SILVALLY_FIGHT,
	SPECIES_SILVALLY_FLYING,
	SPECIES_SILVALLY_POISON,
	SPECIES_SILVALLY_GROUND,
	SPECIES_SILVALLY_ROCK,
	SPECIES_SILVALLY_BUG,
	SPECIES_SILVALLY_GHOST,
	SPECIES_SILVALLY_STEEL,
	SPECIES_SILVALLY_FIRE,
	SPECIES_SILVALLY_WATER,
	SPECIES_SILVALLY_GRASS,
	SPECIES_SILVALLY_ELECTRIC,
	SPECIES_SILVALLY_PSYCHIC,
	SPECIES_SILVALLY_ICE,
	SPECIES_SILVALLY_DRAGON,
	SPECIES_SILVALLY_DARK,
	SPECIES_SILVALLY_FAIRY,
	SPECIES_MIMIKYU_BUSTED,
	SPECIES_MAGEARNA_P,
	SPECIES_NECROZMA_MANE,
	SPECIES_NECROZMA_WINGS,
	SPECIES_NECROZMA_ULTRA,
	SPECIES_PIKACHU_SURFING,
	SPECIES_PIKACHU_FLYING,
	SPECIES_PIKACHU_COSPLAY,
	SPECIES_PIKACHU_LIBRE,
	SPECIES_PIKACHU_POP_STAR,
	SPECIES_PIKACHU_ROCK_STAR,
	SPECIES_PIKACHU_BELLE,
	SPECIES_PIKACHU_PHD,
	SPECIES_PIKACHU_CAP_ORIGINAL,
	SPECIES_PIKACHU_CAP_HOENN,
	SPECIES_PIKACHU_CAP_SINNOH,
	SPECIES_PIKACHU_CAP_UNOVA,
	SPECIES_PIKACHU_CAP_KALOS,
	SPECIES_PIKACHU_CAP_ALOLA,
	SPECIES_PIKACHU_CAP_PARTNER,
	SPECIES_PICHU_SPIKY,
	SPECIES_XERNEAS_NATURAL,
	SPECIES_TABLES_TERMIN
};
#endif