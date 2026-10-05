#include <cstdint>
enum CharacterId {
    char_alien = 0,
    char_amigurumi1 = 1,
    char_amigurumi2 = 2,
    char_amigurumi3 = 3,
    char_angel = 4,
    char_astronaut = 5,
    char_astronaut2 = 6,
    char_astronaut3 = 7,
    char_avocado = 8,
    char_axolotl1 = 9,
    char_axolotl2 = 10,
    char_axolotl3a = 11,
    char_axolotl3b = 12,
    char_axolotl3c = 13,
    char_axolotl3d = 14,
    char_axolotl3e = 15,
    char_axolotl4d = 16,
    char_axolotl5d = 17,
    char_banana = 18,
    char_bard = 19,
    char_base = 20,
    char_batman = 21,
    char_beagle = 22,
    char_beagle2 = 23,
    char_beagle3 = 24,
    char_beagle4 = 25,
    char_beaver = 26,
    char_beekeeper = 27,
    char_bishop = 28,
    char_black_panther = 29,
    char_cabbage = 30,
    char_cabbage2 = 31,
    char_cactus = 32,
    char_capybara = 33,
    char_capybara_amigurumi = 34,
    char_capybara_amigurumi_pink = 35,
    char_capybara2 = 36,
    char_cat1 = 37,
    char_cat2 = 38,
    char_cat3 = 39,
    char_cheetah = 40,
    char_cleric = 41,
    char_crab1 = 42,
    char_crab2 = 43,
    char_crow = 44,
    char_crow_earth = 45,
    char_crow_jupiter = 46,
    char_crow_magical = 47,
    char_crow_mars = 48,
    char_crow_mercury = 49,
    char_crow_moon = 50,
    char_crow_moon_2 = 51,
    char_crow_neptune = 52,
    char_crow_pluto = 53,
    char_crow_saturn = 54,
    char_crow_uranus = 55,
    char_crow_venus = 56,
    char_detective1 = 57,
    char_detective2 = 58,
    char_devil1 = 59,
    char_devil2 = 60,
    char_displacer_beast = 61,
    char_diver1 = 62,
    char_diver2 = 63,
    char_diver3 = 64,
    char_dog1 = 65,
    char_dragon1 = 66,
    char_dragon2 = 67,
    char_dragon3_fire = 68,
    char_dragon3_ice = 69,
    char_druid = 70,
    char_duck1 = 71,
    char_duck2 = 72,
    char_duck3 = 73,
    char_eel = 74,
    char_element_air = 75,
    char_element_earth = 76,
    char_element_fire = 77,
    char_elemental_water = 78,
    char_emerald = 79,
    char_explorer = 80,
    char_friar = 81,
    char_frog_costume_2 = 82,
    char_frog1 = 83,
    char_frog2 = 84,
    char_frog3 = 85,
    char_frog4 = 86,
    char_goblin = 87,
    char_hair = 88,
    char_hamburger = 89,
    char_hello_kitty = 90,
    char_hello_kitty_long = 91,
    char_honey_snail = 92,
    char_icecream1 = 93,
    char_icecream2 = 94,
    char_karate1 = 95,
    char_karate2 = 96,
    char_knight_amigurumi = 97,
    char_knight_axe = 98,
    char_knight_banner = 99,
    char_knight_blue = 100,
    char_knight_blue_swords = 101,
    char_knight_dual_swords = 102,
    char_knight_evil1 = 103,
    char_knight_evil3 = 104,
    char_knight_gold = 105,
    char_knight_gold_red_swords = 106,
    char_knight_ice_cream_vanilla = 107,
    char_knight_ice_cream_various = 108,
    char_knight_octopus_2 = 109,
    char_knight_octopus_3 = 110,
    char_knight_pegasus = 111,
    char_knight_pink = 112,
    char_knight_red_swords = 113,
    char_knight_red_swords_dragon1 = 114,
    char_knight_red_swords_dragon2 = 115,
    char_knight_scifi = 116,
    char_knight1 = 117,
    char_knight2 = 118,
    char_knight4 = 119,
    char_knight4b = 120,
    char_knight5b = 121,
    char_kuromi = 122,
    char_kuromi_good = 123,
    char_kuromi1 = 124,
    char_laser_sword = 125,
    char_lich = 126,
    char_lion_adult = 127,
    char_mermaid1 = 128,
    char_mermaid2a = 129,
    char_mermaid2b = 130,
    char_mermaid2c = 131,
    char_mermaid3a = 132,
    char_mermaid4a = 133,
    char_monk = 134,
    char_monk_elemental = 135,
    char_monk3 = 136,
    char_mummy = 137,
    char_mummy2 = 138,
    char_mummy3 = 139,
    char_mushroom_frogs_1 = 140,
    char_mushroom_frogs_2 = 141,
    char_mushroom_frogs_3 = 142,
    char_mushroom1 = 143,
    char_mushroom2a = 144,
    char_mushroom2b = 145,
    char_mushroom3a = 146,
    char_mushroom3c = 147,
    char_mushroom4a = 148,
    char_mustache_chef = 149,
    char_mustache_painter = 150,
    char_mustache1 = 151,
    char_mustache2a = 152,
    char_mustache2b = 153,
    char_my_sweet_piano = 154,
    char_my_sweet_piano_green = 155,
    char_mymelo = 156,
    char_mymelo_pets = 157,
    char_mymelo1 = 158,
    char_ninja = 159,
    char_octocat = 160,
    char_octopanther = 161,
    char_octopus = 162,
    char_octopus1 = 163,
    char_octopus2 = 164,
    char_octopus3 = 165,
    char_paladin = 166,
    char_panda = 167,
    char_panda_amigurumi = 168,
    char_penguin1 = 169,
    char_penguin2a = 170,
    char_penguin2b = 171,
    char_penguin2c = 172,
    char_pizza = 173,
    char_plant1 = 174,
    char_plant2 = 175,
    char_plant3 = 176,
    char_pope = 177,
    char_popstar = 178,
    char_postman = 179,
    char_postman2 = 180,
    char_postman3 = 181,
    char_priest = 182,
    char_priestess = 183,
    char_princess = 184,
    char_princess_blue = 185,
    char_princess_red = 186,
    char_princess_white = 187,
    char_princess_white_hamster = 188,
    char_princess_yellow = 189,
    char_pug = 190,
    char_pug_amigurumi = 191,
    char_pug_toys = 192,
    char_punk1 = 193,
    char_punk2 = 194,
    char_punk3 = 195,
    char_queen_bee = 196,
    char_red_panda = 197,
    char_rocker = 198,
    char_rockstar = 199,
    char_rockstar2 = 200,
    char_royal1 = 201,
    char_royal2a = 202,
    char_royal2b = 203,
    char_ruby = 204,
    char_samurai = 205,
    char_scifi_soldier_2 = 206,
    char_scout = 207,
    char_seahorse = 208,
    char_shaggy = 209,
    char_shark1 = 210,
    char_shark2 = 211,
    char_skater = 212,
    char_skeleton = 213,
    char_skeleton_amigurumi = 214,
    char_snail = 215,
    char_snail_honey = 216,
    char_spaghetti1 = 217,
    char_spaghetti2 = 218,
    char_spider1 = 219,
    char_spider2 = 220,
    char_strawberry = 221,
    char_superhero = 222,
    char_thief = 223,
    char_tiger = 224,
    char_volleyball1 = 225,
    char_volleyball2 = 226,
    char_waiter1 = 227,
    char_waiter2 = 228,
    char_waiter3 = 229,
    char_weasel = 230,
    char_wizard1a = 231,
    char_wizard2 = 232,
    char_wizard2a = 233,
    char_wolf1 = 234,
    char_wolf2 = 235,
    char_wolf3 = 236,
    char_count
};
struct CharacterInfo {
    const CharacterId* evolutions;
    uint8_t evolutionCount;
};

const CharacterId char_alienEvolutions[] = {char_emerald, char_snail};
const CharacterId char_amigurumi1Evolutions[] = {char_amigurumi2, char_capybara_amigurumi, char_knight_amigurumi, char_skeleton_amigurumi};
const CharacterId char_amigurumi2Evolutions[] = {char_amigurumi1, char_amigurumi3};
const CharacterId char_amigurumi3Evolutions[] = {char_amigurumi2};
const CharacterId char_angelEvolutions[] = {char_devil1, char_pope, char_superhero};
const CharacterId char_astronautEvolutions[] = {char_astronaut2, char_diver3, char_laser_sword};
const CharacterId char_astronaut2Evolutions[] = {char_astronaut, char_astronaut3};
const CharacterId char_astronaut3Evolutions[] = {char_astronaut2};
const CharacterId char_avocadoEvolutions[] = {char_banana, char_cabbage, char_pizza, char_strawberry};
const CharacterId char_axolotl1Evolutions[] = {char_axolotl2, char_diver1};
const CharacterId char_axolotl2Evolutions[] = {char_axolotl1, char_axolotl3a, char_axolotl3b, char_axolotl3c, char_axolotl3d, char_axolotl3e};
const CharacterId char_axolotl3aEvolutions[] = {char_axolotl2};
const CharacterId char_axolotl3bEvolutions[] = {char_axolotl2};
const CharacterId char_axolotl3cEvolutions[] = {char_axolotl2};
const CharacterId char_axolotl3dEvolutions[] = {char_axolotl2, char_axolotl4d};
const CharacterId char_axolotl3eEvolutions[] = {char_axolotl2, char_eel};
const CharacterId char_axolotl4dEvolutions[] = {char_axolotl3d, char_axolotl5d};
const CharacterId char_axolotl5dEvolutions[] = {char_axolotl4d, char_rockstar};
const CharacterId char_bananaEvolutions[] = {char_avocado, char_icecream1};
const CharacterId char_bardEvolutions[] = {char_rocker};
const CharacterId char_baseEvolutions[] = {char_cat1, char_diver1, char_dragon1, char_duck1, char_hair, char_karate1, char_mushroom1, char_mustache1, char_plant1, char_postman, char_scout, char_snail, char_volleyball1};
const CharacterId char_batmanEvolutions[] = {char_superhero};
const CharacterId char_beagleEvolutions[] = {char_beagle2, char_dog1, char_pug};
const CharacterId char_beagle2Evolutions[] = {char_beagle, char_beagle3};
const CharacterId char_beagle3Evolutions[] = {char_beagle2, char_beagle4};
const CharacterId char_beagle4Evolutions[] = {char_beagle3, char_lich};
const CharacterId char_beaverEvolutions[] = {char_panda, char_weasel};
const CharacterId char_beekeeperEvolutions[] = {char_queen_bee, char_snail_honey};
const CharacterId char_bishopEvolutions[] = {char_pope, char_priest};
const CharacterId char_black_pantherEvolutions[] = {char_cheetah, char_displacer_beast, char_octocat, char_tiger};
const CharacterId char_cabbageEvolutions[] = {char_avocado, char_cabbage2, char_plant1};
const CharacterId char_cabbage2Evolutions[] = {char_cabbage};
const CharacterId char_cactusEvolutions[] = {char_plant1};
const CharacterId char_capybaraEvolutions[] = {char_capybara_amigurumi, char_capybara2, char_cat1, char_kuromi1, char_mymelo1};
const CharacterId char_capybara_amigurumiEvolutions[] = {char_amigurumi1, char_capybara, char_capybara_amigurumi_pink, char_panda_amigurumi, char_pug_amigurumi};
const CharacterId char_capybara_amigurumi_pinkEvolutions[] = {char_capybara_amigurumi, char_my_sweet_piano};
const CharacterId char_capybara2Evolutions[] = {char_capybara};
const CharacterId char_cat1Evolutions[] = {char_base, char_capybara, char_cat2, char_dog1};
const CharacterId char_cat2Evolutions[] = {char_cat1, char_cat3, char_weasel};
const CharacterId char_cat3Evolutions[] = {char_cat2, char_cheetah, char_lion_adult};
const CharacterId char_cheetahEvolutions[] = {char_black_panther, char_cat3, char_tiger};
const CharacterId char_clericEvolutions[] = {char_monk, char_priestess, char_wizard2a};
const CharacterId char_crab1Evolutions[] = {char_crab2, char_diver1, char_spider1};
const CharacterId char_crab2Evolutions[] = {char_crab1};
const CharacterId char_crowEvolutions[] = {char_crow_magical, char_crow_moon, char_duck2};
const CharacterId char_crow_earthEvolutions[] = {char_crow_mars, char_crow_moon, char_crow_venus};
const CharacterId char_crow_jupiterEvolutions[] = {char_crow_mars, char_crow_saturn};
const CharacterId char_crow_magicalEvolutions[] = {char_crow};
const CharacterId char_crow_marsEvolutions[] = {char_crow_earth, char_crow_jupiter};
const CharacterId char_crow_mercuryEvolutions[] = {char_crow_venus};
const CharacterId char_crow_moonEvolutions[] = {char_crow, char_crow_earth, char_crow_moon_2};
const CharacterId char_crow_moon_2Evolutions[] = {char_crow_moon};
const CharacterId char_crow_neptuneEvolutions[] = {char_crow_pluto, char_crow_uranus};
const CharacterId char_crow_plutoEvolutions[] = {char_crow_neptune};
const CharacterId char_crow_saturnEvolutions[] = {char_crow_jupiter, char_crow_uranus};
const CharacterId char_crow_uranusEvolutions[] = {char_crow_neptune, char_crow_saturn};
const CharacterId char_crow_venusEvolutions[] = {char_crow_earth, char_crow_mercury};
const CharacterId char_detective1Evolutions[] = {char_detective2, char_scout};
const CharacterId char_detective2Evolutions[] = {char_detective1};
const CharacterId char_devil1Evolutions[] = {char_angel, char_devil2, char_dragon1};
const CharacterId char_devil2Evolutions[] = {char_devil1, char_ruby};
const CharacterId char_displacer_beastEvolutions[] = {char_black_panther, char_octocat};
const CharacterId char_diver1Evolutions[] = {char_axolotl1, char_base, char_crab1, char_diver2, char_frog_costume_2, char_octopus1, char_seahorse, char_shark1};
const CharacterId char_diver2Evolutions[] = {char_diver1, char_diver3};
const CharacterId char_diver3Evolutions[] = {char_astronaut, char_diver2};
const CharacterId char_dog1Evolutions[] = {char_beagle, char_cat1, char_wolf1};
const CharacterId char_dragon1Evolutions[] = {char_base, char_devil1, char_dragon2};
const CharacterId char_dragon2Evolutions[] = {char_dragon1, char_dragon3_fire, char_dragon3_ice};
const CharacterId char_dragon3_fireEvolutions[] = {char_dragon2, char_element_fire};
const CharacterId char_dragon3_iceEvolutions[] = {char_dragon2};
const CharacterId char_druidEvolutions[] = {char_plant3, char_wizard2};
const CharacterId char_duck1Evolutions[] = {char_base, char_duck2};
const CharacterId char_duck2Evolutions[] = {char_crow, char_duck1, char_duck3, char_penguin1};
const CharacterId char_duck3Evolutions[] = {char_duck2};
const CharacterId char_eelEvolutions[] = {char_axolotl3e, char_shark2};
const CharacterId char_element_airEvolutions[] = {char_element_fire, char_elemental_water, char_monk_elemental};
const CharacterId char_element_earthEvolutions[] = {char_element_fire, char_elemental_water, char_plant3};
const CharacterId char_element_fireEvolutions[] = {char_dragon3_fire, char_element_air, char_element_earth};
const CharacterId char_elemental_waterEvolutions[] = {char_element_air, char_element_earth, char_octopus3};
const CharacterId char_emeraldEvolutions[] = {char_alien, char_ruby};
const CharacterId char_explorerEvolutions[] = {char_scout};
const CharacterId char_friarEvolutions[] = {char_monk, char_priest, char_scout};
const CharacterId char_frog_costume_2Evolutions[] = {char_diver1, char_frog2};
const CharacterId char_frog2Evolutions[] = {char_frog_costume_2, char_frog3};
const CharacterId char_frog3Evolutions[] = {char_frog2, char_frog4};
const CharacterId char_frog4Evolutions[] = {char_frog3, char_royal2b};
const CharacterId char_goblinEvolutions[] = {char_mummy, char_punk1, char_skeleton};
const CharacterId char_hairEvolutions[] = {char_base, char_rocker, char_skater};
const CharacterId char_hamburgerEvolutions[] = {char_pizza};
const CharacterId char_hello_kittyEvolutions[] = {char_hello_kitty_long, char_kuromi, char_my_sweet_piano, char_mymelo};
const CharacterId char_hello_kitty_longEvolutions[] = {char_hello_kitty};
const CharacterId char_honey_snailEvolutions[] = {char_queen_bee, char_snail_honey};
const CharacterId char_icecream1Evolutions[] = {char_banana, char_icecream2, char_knight_ice_cream_vanilla};
const CharacterId char_icecream2Evolutions[] = {char_icecream1, char_knight_ice_cream_various, char_my_sweet_piano_green};
const CharacterId char_karate1Evolutions[] = {char_base, char_karate2, char_knight1, char_volleyball1};
const CharacterId char_karate2Evolutions[] = {char_karate1};
const CharacterId char_knight_amigurumiEvolutions[] = {char_amigurumi1, char_knight2};
const CharacterId char_knight_axeEvolutions[] = {char_knight_blue, char_knight2};
const CharacterId char_knight_bannerEvolutions[] = {char_knight1};
const CharacterId char_knight_blueEvolutions[] = {char_knight_axe};
const CharacterId char_knight_blue_swordsEvolutions[] = {char_knight_dual_swords, char_knight_scifi, char_laser_sword};
const CharacterId char_knight_dual_swordsEvolutions[] = {char_knight_blue_swords, char_knight_red_swords, char_knight2};
const CharacterId char_knight_evil1Evolutions[] = {char_knight_evil3, char_knight2};
const CharacterId char_knight_evil3Evolutions[] = {char_knight_evil1};
const CharacterId char_knight_goldEvolutions[] = {char_knight_gold_red_swords, char_knight2};
const CharacterId char_knight_gold_red_swordsEvolutions[] = {char_knight_gold};
const CharacterId char_knight_ice_cream_vanillaEvolutions[] = {char_icecream1, char_knight_pink, char_knight2};
const CharacterId char_knight_ice_cream_variousEvolutions[] = {char_icecream2, char_knight_pink};
const CharacterId char_knight_octopus_2Evolutions[] = {char_knight_octopus_3, char_knight2};
const CharacterId char_knight_octopus_3Evolutions[] = {char_knight_octopus_2, char_octopus};
const CharacterId char_knight_pegasusEvolutions[] = {char_knight2};
const CharacterId char_knight_pinkEvolutions[] = {char_knight_ice_cream_vanilla, char_knight_ice_cream_various, char_my_sweet_piano};
const CharacterId char_knight_red_swordsEvolutions[] = {char_knight_dual_swords, char_knight_red_swords_dragon1};
const CharacterId char_knight_red_swords_dragon1Evolutions[] = {char_knight_red_swords, char_knight_red_swords_dragon2};
const CharacterId char_knight_red_swords_dragon2Evolutions[] = {char_knight_red_swords_dragon1};
const CharacterId char_knight_scifiEvolutions[] = {char_knight_blue_swords};
const CharacterId char_knight1Evolutions[] = {char_karate1, char_knight_banner, char_knight2, char_paladin};
const CharacterId char_knight2Evolutions[] = {char_knight_amigurumi, char_knight_axe, char_knight_dual_swords, char_knight_evil1, char_knight_gold, char_knight_ice_cream_vanilla, char_knight_octopus_2, char_knight_pegasus, char_knight1, char_knight4, char_knight4b};
const CharacterId char_knight4Evolutions[] = {char_knight2};
const CharacterId char_knight4bEvolutions[] = {char_knight2, char_knight5b};
const CharacterId char_knight5bEvolutions[] = {char_knight4b, char_mermaid3a};
const CharacterId char_kuromiEvolutions[] = {char_hello_kitty, char_kuromi_good, char_kuromi1};
const CharacterId char_kuromi_goodEvolutions[] = {char_kuromi};
const CharacterId char_kuromi1Evolutions[] = {char_capybara, char_kuromi};
const CharacterId char_laser_swordEvolutions[] = {char_astronaut, char_knight_blue_swords, char_scifi_soldier_2, char_shaggy};
const CharacterId char_lichEvolutions[] = {char_beagle4, char_skeleton};
const CharacterId char_lion_adultEvolutions[] = {char_cat3, char_tiger};
const CharacterId char_mermaid1Evolutions[] = {char_mermaid2a, char_mermaid2b, char_mermaid2c, char_seahorse};
const CharacterId char_mermaid2aEvolutions[] = {char_mermaid1, char_mermaid3a};
const CharacterId char_mermaid2bEvolutions[] = {char_mermaid1, char_mermaid2c};
const CharacterId char_mermaid2cEvolutions[] = {char_mermaid1, char_mermaid2b};
const CharacterId char_mermaid3aEvolutions[] = {char_knight5b, char_mermaid2a, char_mermaid4a};
const CharacterId char_mermaid4aEvolutions[] = {char_mermaid3a};
const CharacterId char_monkEvolutions[] = {char_cleric, char_friar, char_monk3, char_thief};
const CharacterId char_monk_elementalEvolutions[] = {char_element_air, char_monk3};
const CharacterId char_monk3Evolutions[] = {char_monk, char_monk_elemental};
const CharacterId char_mummyEvolutions[] = {char_goblin, char_mummy2};
const CharacterId char_mummy2Evolutions[] = {char_mummy, char_mummy3};
const CharacterId char_mummy3Evolutions[] = {char_mummy2};
const CharacterId char_mushroom_frogs_1Evolutions[] = {char_mushroom_frogs_2, char_mushroom2b};
const CharacterId char_mushroom_frogs_2Evolutions[] = {char_mushroom_frogs_1, char_mushroom_frogs_3};
const CharacterId char_mushroom_frogs_3Evolutions[] = {char_mushroom_frogs_2};
const CharacterId char_mushroom1Evolutions[] = {char_base, char_mushroom2a, char_mushroom2b};
const CharacterId char_mushroom2aEvolutions[] = {char_mushroom1, char_mushroom3a};
const CharacterId char_mushroom2bEvolutions[] = {char_mushroom_frogs_1, char_mushroom1, char_mushroom3c};
const CharacterId char_mushroom3aEvolutions[] = {char_mushroom2a, char_mushroom4a};
const CharacterId char_mushroom3cEvolutions[] = {char_mushroom2b};
const CharacterId char_mushroom4aEvolutions[] = {char_mushroom3a};
const CharacterId char_mustache_chefEvolutions[] = {char_mustache2a, char_mustache2b};
const CharacterId char_mustache_painterEvolutions[] = {char_mustache2a, char_mustache2b};
const CharacterId char_mustache1Evolutions[] = {char_base, char_mustache2a, char_waiter1, char_wizard1a};
const CharacterId char_mustache2aEvolutions[] = {char_mustache_chef, char_mustache_painter, char_mustache1, char_mustache2b};
const CharacterId char_mustache2bEvolutions[] = {char_mustache_chef, char_mustache_painter, char_mustache2a};
const CharacterId char_my_sweet_pianoEvolutions[] = {char_capybara_amigurumi_pink, char_hello_kitty, char_knight_pink, char_my_sweet_piano_green};
const CharacterId char_my_sweet_piano_greenEvolutions[] = {char_icecream2, char_my_sweet_piano};
const CharacterId char_mymeloEvolutions[] = {char_hello_kitty, char_mymelo_pets, char_mymelo1};
const CharacterId char_mymelo_petsEvolutions[] = {char_mymelo};
const CharacterId char_mymelo1Evolutions[] = {char_capybara, char_mymelo};
const CharacterId char_ninjaEvolutions[] = {char_samurai};
const CharacterId char_octocatEvolutions[] = {char_black_panther, char_displacer_beast, char_octopanther};
const CharacterId char_octopantherEvolutions[] = {char_octocat, char_octopus};
const CharacterId char_octopusEvolutions[] = {char_knight_octopus_3, char_octopanther, char_octopus3};
const CharacterId char_octopus1Evolutions[] = {char_diver1, char_octopus2};
const CharacterId char_octopus2Evolutions[] = {char_octopus1, char_octopus3};
const CharacterId char_octopus3Evolutions[] = {char_elemental_water, char_octopus, char_octopus2};
const CharacterId char_paladinEvolutions[] = {char_knight1, char_samurai};
const CharacterId char_pandaEvolutions[] = {char_beaver, char_panda_amigurumi, char_red_panda};
const CharacterId char_panda_amigurumiEvolutions[] = {char_capybara_amigurumi, char_panda};
const CharacterId char_penguin1Evolutions[] = {char_duck2, char_penguin2a, char_penguin2b, char_penguin2c};
const CharacterId char_penguin2aEvolutions[] = {char_penguin1};
const CharacterId char_penguin2bEvolutions[] = {char_penguin1};
const CharacterId char_penguin2cEvolutions[] = {char_penguin1};
const CharacterId char_pizzaEvolutions[] = {char_avocado, char_hamburger, char_spaghetti1};
const CharacterId char_plant1Evolutions[] = {char_base, char_cabbage, char_cactus, char_plant2};
const CharacterId char_plant2Evolutions[] = {char_plant1, char_plant3};
const CharacterId char_plant3Evolutions[] = {char_druid, char_element_earth, char_plant2};
const CharacterId char_popeEvolutions[] = {char_angel, char_bishop};
const CharacterId char_popstarEvolutions[] = {char_rocker};
const CharacterId char_postmanEvolutions[] = {char_base, char_postman2, char_waiter1};
const CharacterId char_postman2Evolutions[] = {char_postman, char_postman3};
const CharacterId char_postman3Evolutions[] = {char_postman2};
const CharacterId char_priestEvolutions[] = {char_bishop, char_friar};
const CharacterId char_priestessEvolutions[] = {char_cleric, char_princess_white_hamster};
const CharacterId char_princessEvolutions[] = {char_princess_white_hamster, char_royal1};
const CharacterId char_princess_blueEvolutions[] = {char_princess_red, char_princess_white_hamster};
const CharacterId char_princess_redEvolutions[] = {char_princess_blue, char_princess_white_hamster, char_princess_yellow};
const CharacterId char_princess_white_hamsterEvolutions[] = {char_priestess, char_princess, char_princess_blue, char_princess_red, char_princess_yellow};
const CharacterId char_princess_yellowEvolutions[] = {char_princess_red, char_princess_white_hamster};
const CharacterId char_pugEvolutions[] = {char_beagle, char_pug_amigurumi, char_pug_toys};
const CharacterId char_pug_amigurumiEvolutions[] = {char_capybara_amigurumi, char_pug};
const CharacterId char_pug_toysEvolutions[] = {char_pug};
const CharacterId char_punk1Evolutions[] = {char_goblin, char_punk2, char_rocker};
const CharacterId char_punk2Evolutions[] = {char_punk1, char_punk3};
const CharacterId char_punk3Evolutions[] = {char_punk2};
const CharacterId char_queen_beeEvolutions[] = {char_beekeeper, char_honey_snail, char_snail_honey};
const CharacterId char_red_pandaEvolutions[] = {char_panda, char_weasel};
const CharacterId char_rockerEvolutions[] = {char_bard, char_hair, char_popstar, char_punk1, char_rockstar};
const CharacterId char_rockstarEvolutions[] = {char_axolotl5d, char_rocker, char_rockstar2};
const CharacterId char_rockstar2Evolutions[] = {char_rockstar};
const CharacterId char_royal1Evolutions[] = {char_princess, char_royal2a, char_royal2b};
const CharacterId char_royal2aEvolutions[] = {char_royal1};
const CharacterId char_royal2bEvolutions[] = {char_frog4, char_royal1};
const CharacterId char_rubyEvolutions[] = {char_devil2, char_emerald};
const CharacterId char_samuraiEvolutions[] = {char_ninja, char_paladin};
const CharacterId char_scifi_soldier_2Evolutions[] = {char_laser_sword};
const CharacterId char_scoutEvolutions[] = {char_base, char_detective1, char_explorer, char_friar};
const CharacterId char_seahorseEvolutions[] = {char_diver1, char_mermaid1};
const CharacterId char_shaggyEvolutions[] = {char_laser_sword, char_wolf1};
const CharacterId char_shark1Evolutions[] = {char_diver1, char_shark2};
const CharacterId char_shark2Evolutions[] = {char_eel, char_shark1};
const CharacterId char_skaterEvolutions[] = {char_hair};
const CharacterId char_skeletonEvolutions[] = {char_goblin, char_lich, char_skeleton_amigurumi};
const CharacterId char_skeleton_amigurumiEvolutions[] = {char_amigurumi1, char_skeleton};
const CharacterId char_snailEvolutions[] = {char_alien, char_base, char_snail_honey};
const CharacterId char_snail_honeyEvolutions[] = {char_beekeeper, char_honey_snail, char_queen_bee, char_snail};
const CharacterId char_spaghetti1Evolutions[] = {char_pizza, char_spaghetti2};
const CharacterId char_spaghetti2Evolutions[] = {char_spaghetti1};
const CharacterId char_spider1Evolutions[] = {char_crab1, char_spider2};
const CharacterId char_spider2Evolutions[] = {char_spider1};
const CharacterId char_strawberryEvolutions[] = {char_avocado};
const CharacterId char_superheroEvolutions[] = {char_angel, char_batman};
const CharacterId char_thiefEvolutions[] = {char_monk};
const CharacterId char_tigerEvolutions[] = {char_black_panther, char_cheetah, char_lion_adult};
const CharacterId char_volleyball1Evolutions[] = {char_base, char_karate1, char_volleyball2};
const CharacterId char_volleyball2Evolutions[] = {char_volleyball1};
const CharacterId char_waiter1Evolutions[] = {char_mustache1, char_postman, char_waiter2};
const CharacterId char_waiter2Evolutions[] = {char_waiter1, char_waiter3};
const CharacterId char_waiter3Evolutions[] = {char_waiter2};
const CharacterId char_weaselEvolutions[] = {char_beaver, char_cat2, char_red_panda};
const CharacterId char_wizard1aEvolutions[] = {char_mustache1, char_wizard2};
const CharacterId char_wizard2Evolutions[] = {char_druid, char_wizard1a, char_wizard2a};
const CharacterId char_wizard2aEvolutions[] = {char_cleric, char_wizard2};
const CharacterId char_wolf1Evolutions[] = {char_dog1, char_shaggy, char_wolf2};
const CharacterId char_wolf2Evolutions[] = {char_wolf1, char_wolf3};
const CharacterId char_wolf3Evolutions[] = {char_wolf2};
const CharacterInfo characters[char_count] = {
    {char_alienEvolutions, 2},  // char_alien
    {char_amigurumi1Evolutions, 4},  // char_amigurumi1
    {char_amigurumi2Evolutions, 2},  // char_amigurumi2
    {char_amigurumi3Evolutions, 1},  // char_amigurumi3
    {char_angelEvolutions, 3},  // char_angel
    {char_astronautEvolutions, 3},  // char_astronaut
    {char_astronaut2Evolutions, 2},  // char_astronaut2
    {char_astronaut3Evolutions, 1},  // char_astronaut3
    {char_avocadoEvolutions, 4},  // char_avocado
    {char_axolotl1Evolutions, 2},  // char_axolotl1
    {char_axolotl2Evolutions, 6},  // char_axolotl2
    {char_axolotl3aEvolutions, 1},  // char_axolotl3a
    {char_axolotl3bEvolutions, 1},  // char_axolotl3b
    {char_axolotl3cEvolutions, 1},  // char_axolotl3c
    {char_axolotl3dEvolutions, 2},  // char_axolotl3d
    {char_axolotl3eEvolutions, 2},  // char_axolotl3e
    {char_axolotl4dEvolutions, 2},  // char_axolotl4d
    {char_axolotl5dEvolutions, 2},  // char_axolotl5d
    {char_bananaEvolutions, 2},  // char_banana
    {char_bardEvolutions, 1},  // char_bard
    {char_baseEvolutions, 13},  // char_base
    {char_batmanEvolutions, 1},  // char_batman
    {char_beagleEvolutions, 3},  // char_beagle
    {char_beagle2Evolutions, 2},  // char_beagle2
    {char_beagle3Evolutions, 2},  // char_beagle3
    {char_beagle4Evolutions, 2},  // char_beagle4
    {char_beaverEvolutions, 2},  // char_beaver
    {char_beekeeperEvolutions, 2},  // char_beekeeper
    {char_bishopEvolutions, 2},  // char_bishop
    {char_black_pantherEvolutions, 4},  // char_black_panther
    {char_cabbageEvolutions, 3},  // char_cabbage
    {char_cabbage2Evolutions, 1},  // char_cabbage2
    {char_cactusEvolutions, 1},  // char_cactus
    {char_capybaraEvolutions, 5},  // char_capybara
    {char_capybara_amigurumiEvolutions, 5},  // char_capybara_amigurumi
    {char_capybara_amigurumi_pinkEvolutions, 2},  // char_capybara_amigurumi_pink
    {char_capybara2Evolutions, 1},  // char_capybara2
    {char_cat1Evolutions, 4},  // char_cat1
    {char_cat2Evolutions, 3},  // char_cat2
    {char_cat3Evolutions, 3},  // char_cat3
    {char_cheetahEvolutions, 3},  // char_cheetah
    {char_clericEvolutions, 3},  // char_cleric
    {char_crab1Evolutions, 3},  // char_crab1
    {char_crab2Evolutions, 1},  // char_crab2
    {char_crowEvolutions, 3},  // char_crow
    {char_crow_earthEvolutions, 3},  // char_crow_earth
    {char_crow_jupiterEvolutions, 2},  // char_crow_jupiter
    {char_crow_magicalEvolutions, 1},  // char_crow_magical
    {char_crow_marsEvolutions, 2},  // char_crow_mars
    {char_crow_mercuryEvolutions, 1},  // char_crow_mercury
    {char_crow_moonEvolutions, 3},  // char_crow_moon
    {char_crow_moon_2Evolutions, 1},  // char_crow_moon_2
    {char_crow_neptuneEvolutions, 2},  // char_crow_neptune
    {char_crow_plutoEvolutions, 1},  // char_crow_pluto
    {char_crow_saturnEvolutions, 2},  // char_crow_saturn
    {char_crow_uranusEvolutions, 2},  // char_crow_uranus
    {char_crow_venusEvolutions, 2},  // char_crow_venus
    {char_detective1Evolutions, 2},  // char_detective1
    {char_detective2Evolutions, 1},  // char_detective2
    {char_devil1Evolutions, 3},  // char_devil1
    {char_devil2Evolutions, 2},  // char_devil2
    {char_displacer_beastEvolutions, 2},  // char_displacer_beast
    {char_diver1Evolutions, 8},  // char_diver1
    {char_diver2Evolutions, 2},  // char_diver2
    {char_diver3Evolutions, 2},  // char_diver3
    {char_dog1Evolutions, 3},  // char_dog1
    {char_dragon1Evolutions, 3},  // char_dragon1
    {char_dragon2Evolutions, 3},  // char_dragon2
    {char_dragon3_fireEvolutions, 2},  // char_dragon3_fire
    {char_dragon3_iceEvolutions, 1},  // char_dragon3_ice
    {char_druidEvolutions, 2},  // char_druid
    {char_duck1Evolutions, 2},  // char_duck1
    {char_duck2Evolutions, 4},  // char_duck2
    {char_duck3Evolutions, 1},  // char_duck3
    {char_eelEvolutions, 2},  // char_eel
    {char_element_airEvolutions, 3},  // char_element_air
    {char_element_earthEvolutions, 3},  // char_element_earth
    {char_element_fireEvolutions, 3},  // char_element_fire
    {char_elemental_waterEvolutions, 3},  // char_elemental_water
    {char_emeraldEvolutions, 2},  // char_emerald
    {char_explorerEvolutions, 1},  // char_explorer
    {char_friarEvolutions, 3},  // char_friar
    {char_frog_costume_2Evolutions, 2},  // char_frog_costume_2
    {nullptr, 0},  // char_frog1
    {char_frog2Evolutions, 2},  // char_frog2
    {char_frog3Evolutions, 2},  // char_frog3
    {char_frog4Evolutions, 2},  // char_frog4
    {char_goblinEvolutions, 3},  // char_goblin
    {char_hairEvolutions, 3},  // char_hair
    {char_hamburgerEvolutions, 1},  // char_hamburger
    {char_hello_kittyEvolutions, 4},  // char_hello_kitty
    {char_hello_kitty_longEvolutions, 1},  // char_hello_kitty_long
    {char_honey_snailEvolutions, 2},  // char_honey_snail
    {char_icecream1Evolutions, 3},  // char_icecream1
    {char_icecream2Evolutions, 3},  // char_icecream2
    {char_karate1Evolutions, 4},  // char_karate1
    {char_karate2Evolutions, 1},  // char_karate2
    {char_knight_amigurumiEvolutions, 2},  // char_knight_amigurumi
    {char_knight_axeEvolutions, 2},  // char_knight_axe
    {char_knight_bannerEvolutions, 1},  // char_knight_banner
    {char_knight_blueEvolutions, 1},  // char_knight_blue
    {char_knight_blue_swordsEvolutions, 3},  // char_knight_blue_swords
    {char_knight_dual_swordsEvolutions, 3},  // char_knight_dual_swords
    {char_knight_evil1Evolutions, 2},  // char_knight_evil1
    {char_knight_evil3Evolutions, 1},  // char_knight_evil3
    {char_knight_goldEvolutions, 2},  // char_knight_gold
    {char_knight_gold_red_swordsEvolutions, 1},  // char_knight_gold_red_swords
    {char_knight_ice_cream_vanillaEvolutions, 3},  // char_knight_ice_cream_vanilla
    {char_knight_ice_cream_variousEvolutions, 2},  // char_knight_ice_cream_various
    {char_knight_octopus_2Evolutions, 2},  // char_knight_octopus_2
    {char_knight_octopus_3Evolutions, 2},  // char_knight_octopus_3
    {char_knight_pegasusEvolutions, 1},  // char_knight_pegasus
    {char_knight_pinkEvolutions, 3},  // char_knight_pink
    {char_knight_red_swordsEvolutions, 2},  // char_knight_red_swords
    {char_knight_red_swords_dragon1Evolutions, 2},  // char_knight_red_swords_dragon1
    {char_knight_red_swords_dragon2Evolutions, 1},  // char_knight_red_swords_dragon2
    {char_knight_scifiEvolutions, 1},  // char_knight_scifi
    {char_knight1Evolutions, 4},  // char_knight1
    {char_knight2Evolutions, 11},  // char_knight2
    {char_knight4Evolutions, 1},  // char_knight4
    {char_knight4bEvolutions, 2},  // char_knight4b
    {char_knight5bEvolutions, 2},  // char_knight5b
    {char_kuromiEvolutions, 3},  // char_kuromi
    {char_kuromi_goodEvolutions, 1},  // char_kuromi_good
    {char_kuromi1Evolutions, 2},  // char_kuromi1
    {char_laser_swordEvolutions, 4},  // char_laser_sword
    {char_lichEvolutions, 2},  // char_lich
    {char_lion_adultEvolutions, 2},  // char_lion_adult
    {char_mermaid1Evolutions, 4},  // char_mermaid1
    {char_mermaid2aEvolutions, 2},  // char_mermaid2a
    {char_mermaid2bEvolutions, 2},  // char_mermaid2b
    {char_mermaid2cEvolutions, 2},  // char_mermaid2c
    {char_mermaid3aEvolutions, 3},  // char_mermaid3a
    {char_mermaid4aEvolutions, 1},  // char_mermaid4a
    {char_monkEvolutions, 4},  // char_monk
    {char_monk_elementalEvolutions, 2},  // char_monk_elemental
    {char_monk3Evolutions, 2},  // char_monk3
    {char_mummyEvolutions, 2},  // char_mummy
    {char_mummy2Evolutions, 2},  // char_mummy2
    {char_mummy3Evolutions, 1},  // char_mummy3
    {char_mushroom_frogs_1Evolutions, 2},  // char_mushroom_frogs_1
    {char_mushroom_frogs_2Evolutions, 2},  // char_mushroom_frogs_2
    {char_mushroom_frogs_3Evolutions, 1},  // char_mushroom_frogs_3
    {char_mushroom1Evolutions, 3},  // char_mushroom1
    {char_mushroom2aEvolutions, 2},  // char_mushroom2a
    {char_mushroom2bEvolutions, 3},  // char_mushroom2b
    {char_mushroom3aEvolutions, 2},  // char_mushroom3a
    {char_mushroom3cEvolutions, 1},  // char_mushroom3c
    {char_mushroom4aEvolutions, 1},  // char_mushroom4a
    {char_mustache_chefEvolutions, 2},  // char_mustache_chef
    {char_mustache_painterEvolutions, 2},  // char_mustache_painter
    {char_mustache1Evolutions, 4},  // char_mustache1
    {char_mustache2aEvolutions, 4},  // char_mustache2a
    {char_mustache2bEvolutions, 3},  // char_mustache2b
    {char_my_sweet_pianoEvolutions, 4},  // char_my_sweet_piano
    {char_my_sweet_piano_greenEvolutions, 2},  // char_my_sweet_piano_green
    {char_mymeloEvolutions, 3},  // char_mymelo
    {char_mymelo_petsEvolutions, 1},  // char_mymelo_pets
    {char_mymelo1Evolutions, 2},  // char_mymelo1
    {char_ninjaEvolutions, 1},  // char_ninja
    {char_octocatEvolutions, 3},  // char_octocat
    {char_octopantherEvolutions, 2},  // char_octopanther
    {char_octopusEvolutions, 3},  // char_octopus
    {char_octopus1Evolutions, 2},  // char_octopus1
    {char_octopus2Evolutions, 2},  // char_octopus2
    {char_octopus3Evolutions, 3},  // char_octopus3
    {char_paladinEvolutions, 2},  // char_paladin
    {char_pandaEvolutions, 3},  // char_panda
    {char_panda_amigurumiEvolutions, 2},  // char_panda_amigurumi
    {char_penguin1Evolutions, 4},  // char_penguin1
    {char_penguin2aEvolutions, 1},  // char_penguin2a
    {char_penguin2bEvolutions, 1},  // char_penguin2b
    {char_penguin2cEvolutions, 1},  // char_penguin2c
    {char_pizzaEvolutions, 3},  // char_pizza
    {char_plant1Evolutions, 4},  // char_plant1
    {char_plant2Evolutions, 2},  // char_plant2
    {char_plant3Evolutions, 3},  // char_plant3
    {char_popeEvolutions, 2},  // char_pope
    {char_popstarEvolutions, 1},  // char_popstar
    {char_postmanEvolutions, 3},  // char_postman
    {char_postman2Evolutions, 2},  // char_postman2
    {char_postman3Evolutions, 1},  // char_postman3
    {char_priestEvolutions, 2},  // char_priest
    {char_priestessEvolutions, 2},  // char_priestess
    {char_princessEvolutions, 2},  // char_princess
    {char_princess_blueEvolutions, 2},  // char_princess_blue
    {char_princess_redEvolutions, 3},  // char_princess_red
    {nullptr, 0},  // char_princess_white
    {char_princess_white_hamsterEvolutions, 5},  // char_princess_white_hamster
    {char_princess_yellowEvolutions, 2},  // char_princess_yellow
    {char_pugEvolutions, 3},  // char_pug
    {char_pug_amigurumiEvolutions, 2},  // char_pug_amigurumi
    {char_pug_toysEvolutions, 1},  // char_pug_toys
    {char_punk1Evolutions, 3},  // char_punk1
    {char_punk2Evolutions, 2},  // char_punk2
    {char_punk3Evolutions, 1},  // char_punk3
    {char_queen_beeEvolutions, 3},  // char_queen_bee
    {char_red_pandaEvolutions, 2},  // char_red_panda
    {char_rockerEvolutions, 5},  // char_rocker
    {char_rockstarEvolutions, 3},  // char_rockstar
    {char_rockstar2Evolutions, 1},  // char_rockstar2
    {char_royal1Evolutions, 3},  // char_royal1
    {char_royal2aEvolutions, 1},  // char_royal2a
    {char_royal2bEvolutions, 2},  // char_royal2b
    {char_rubyEvolutions, 2},  // char_ruby
    {char_samuraiEvolutions, 2},  // char_samurai
    {char_scifi_soldier_2Evolutions, 1},  // char_scifi_soldier_2
    {char_scoutEvolutions, 4},  // char_scout
    {char_seahorseEvolutions, 2},  // char_seahorse
    {char_shaggyEvolutions, 2},  // char_shaggy
    {char_shark1Evolutions, 2},  // char_shark1
    {char_shark2Evolutions, 2},  // char_shark2
    {char_skaterEvolutions, 1},  // char_skater
    {char_skeletonEvolutions, 3},  // char_skeleton
    {char_skeleton_amigurumiEvolutions, 2},  // char_skeleton_amigurumi
    {char_snailEvolutions, 3},  // char_snail
    {char_snail_honeyEvolutions, 4},  // char_snail_honey
    {char_spaghetti1Evolutions, 2},  // char_spaghetti1
    {char_spaghetti2Evolutions, 1},  // char_spaghetti2
    {char_spider1Evolutions, 2},  // char_spider1
    {char_spider2Evolutions, 1},  // char_spider2
    {char_strawberryEvolutions, 1},  // char_strawberry
    {char_superheroEvolutions, 2},  // char_superhero
    {char_thiefEvolutions, 1},  // char_thief
    {char_tigerEvolutions, 3},  // char_tiger
    {char_volleyball1Evolutions, 3},  // char_volleyball1
    {char_volleyball2Evolutions, 1},  // char_volleyball2
    {char_waiter1Evolutions, 3},  // char_waiter1
    {char_waiter2Evolutions, 2},  // char_waiter2
    {char_waiter3Evolutions, 1},  // char_waiter3
    {char_weaselEvolutions, 3},  // char_weasel
    {char_wizard1aEvolutions, 2},  // char_wizard1a
    {char_wizard2Evolutions, 3},  // char_wizard2
    {char_wizard2aEvolutions, 2},  // char_wizard2a
    {char_wolf1Evolutions, 3},  // char_wolf1
    {char_wolf2Evolutions, 2},  // char_wolf2
    {char_wolf3Evolutions, 1},  // char_wolf3
};
