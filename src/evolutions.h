
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
    char_beekeeper = 26,
    char_bishop = 27,
    char_cabbage = 28,
    char_cabbage2 = 29,
    char_cactus = 30,
    char_capybara = 31,
    char_capybara2 = 32,
    char_cat1 = 33,
    char_cat2 = 34,
    char_cat3 = 35,
    char_cleric = 36,
    char_crab1 = 37,
    char_crab2 = 38,
    char_detective1 = 39,
    char_detective2 = 40,
    char_devil1 = 41,
    char_devil2 = 42,
    char_diver1 = 43,
    char_diver2 = 44,
    char_diver3 = 45,
    char_dog1 = 46,
    char_dragon1 = 47,
    char_dragon2 = 48,
    char_dragon3_fire = 49,
    char_dragon3_ice = 50,
    char_druid = 51,
    char_duck1 = 52,
    char_duck2 = 53,
    char_duck3 = 54,
    char_element_air = 55,
    char_element_earth = 56,
    char_element_fire = 57,
    char_elemental_water = 58,
    char_emerald = 59,
    char_explorer = 60,
    char_friar = 61,
    char_frog1 = 62,
    char_frog2 = 63,
    char_frog3 = 64,
    char_frog4 = 65,
    char_goblin = 66,
    char_hair = 67,
    char_hamburger = 68,
    char_honey_snail = 69,
    char_icecream1 = 70,
    char_icecream2 = 71,
    char_karate1 = 72,
    char_karate2 = 73,
    char_knight_amigurumi = 74,
    char_knight_axe = 75,
    char_knight_banner = 76,
    char_knight_blue = 77,
    char_knight_blue_swords = 78,
    char_knight_dual_swords = 79,
    char_knight_evil1 = 80,
    char_knight_evil3 = 81,
    char_knight_gold = 82,
    char_knight_gold_red_swords = 83,
    char_knight_ice_cream_vanilla = 84,
    char_knight_ice_cream_various = 85,
    char_knight_octopus_2 = 86,
    char_knight_octopus_3 = 87,
    char_knight_pegasus = 88,
    char_knight_pink = 89,
    char_knight_red_swords = 90,
    char_knight_red_swords_dragon1 = 91,
    char_knight_red_swords_dragon2 = 92,
    char_knight_scifi = 93,
    char_knight1 = 94,
    char_knight2 = 95,
    char_knight4 = 96,
    char_knight4b = 97,
    char_knight5b = 98,
    char_laser_sword = 99,
    char_lich = 100,
    char_mermaid1 = 101,
    char_mermaid2a = 102,
    char_mermaid2b = 103,
    char_mermaid2c = 104,
    char_mermaid3a = 105,
    char_mermaid4a = 106,
    char_monk = 107,
    char_monk_elemental = 108,
    char_monk3 = 109,
    char_mummy = 110,
    char_mummy2 = 111,
    char_mummy3 = 112,
    char_mushroom_frogs_1 = 113,
    char_mushroom_frogs_2 = 114,
    char_mushroom_frogs_3 = 115,
    char_mushroom1 = 116,
    char_mushroom2a = 117,
    char_mushroom2b = 118,
    char_mushroom3a = 119,
    char_mushroom3c = 120,
    char_mushroom4a = 121,
    char_mustache_chef = 122,
    char_mustache_painter = 123,
    char_mustache1 = 124,
    char_mustache2a = 125,
    char_mustache2b = 126,
    char_ninja = 127,
    char_octopus1 = 128,
    char_octopus2 = 129,
    char_octopus3 = 130,
    char_paladin = 131,
    char_penguin1 = 132,
    char_penguin2a = 133,
    char_penguin2b = 134,
    char_penguin2c = 135,
    char_pizza = 136,
    char_plant1 = 137,
    char_plant2 = 138,
    char_plant3 = 139,
    char_pope = 140,
    char_popstar = 141,
    char_postman = 142,
    char_postman2 = 143,
    char_postman3 = 144,
    char_priest = 145,
    char_princess = 146,
    char_princess_blue = 147,
    char_princess_red = 148,
    char_princess_white = 149,
    char_princess_white_hamster = 150,
    char_princess_yellow = 151,
    char_pug = 152,
    char_pug_toys = 153,
    char_punk1 = 154,
    char_punk2 = 155,
    char_punk3 = 156,
    char_queen_bee = 157,
    char_rocker = 158,
    char_rockstar = 159,
    char_rockstar2 = 160,
    char_royal1 = 161,
    char_royal2a = 162,
    char_royal2b = 163,
    char_ruby = 164,
    char_samurai = 165,
    char_scifi_soldier_2 = 166,
    char_scout = 167,
    char_seahorse = 168,
    char_shaggy = 169,
    char_shark1 = 170,
    char_shark2 = 171,
    char_skater = 172,
    char_skeleton = 173,
    char_skeleton_amigurumi = 174,
    char_snail = 175,
    char_snail_honey = 176,
    char_spaghetti1 = 177,
    char_spaghetti2 = 178,
    char_spider1 = 179,
    char_spider2 = 180,
    char_strawberry = 181,
    char_superhero = 182,
    char_thief = 183,
    char_volleyball1 = 184,
    char_volleyball2 = 185,
    char_waiter1 = 186,
    char_waiter2 = 187,
    char_waiter3 = 188,
    char_wizard1a = 189,
    char_wizard2 = 190,
    char_wizard2a = 191,
    char_wolf1 = 192,
    char_wolf2 = 193,
    char_wolf3 = 194,
    char_count
};
struct CharacterInfo {
    const CharacterId* evolutions;
    uint8_t evolutionCount;
};

const CharacterId char_alienEvolutions[] = {char_emerald, char_snail};
const CharacterId char_amigurumi1Evolutions[] = {char_amigurumi2, char_knight_amigurumi, char_skeleton_amigurumi};
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
const CharacterId char_axolotl3eEvolutions[] = {char_axolotl2};
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
const CharacterId char_beekeeperEvolutions[] = {char_queen_bee, char_snail_honey};
const CharacterId char_bishopEvolutions[] = {char_pope, char_priest};
const CharacterId char_cabbageEvolutions[] = {char_avocado, char_cabbage2, char_plant1};
const CharacterId char_cabbage2Evolutions[] = {char_cabbage};
const CharacterId char_cactusEvolutions[] = {char_plant1};
const CharacterId char_capybaraEvolutions[] = {char_capybara2, char_cat1};
const CharacterId char_capybara2Evolutions[] = {char_capybara};
const CharacterId char_cat1Evolutions[] = {char_base, char_capybara, char_cat2, char_dog1};
const CharacterId char_cat2Evolutions[] = {char_cat1, char_cat3};
const CharacterId char_cat3Evolutions[] = {char_cat2};
const CharacterId char_clericEvolutions[] = {char_monk, char_wizard2a};
const CharacterId char_crab1Evolutions[] = {char_crab2, char_diver1, char_spider1};
const CharacterId char_crab2Evolutions[] = {char_crab1};
const CharacterId char_detective1Evolutions[] = {char_detective2, char_scout};
const CharacterId char_detective2Evolutions[] = {char_detective1};
const CharacterId char_devil1Evolutions[] = {char_angel, char_devil2, char_dragon1};
const CharacterId char_devil2Evolutions[] = {char_devil1, char_ruby};
const CharacterId char_diver1Evolutions[] = {char_axolotl1, char_base, char_crab1, char_diver2, char_frog1, char_octopus1, char_seahorse, char_shark1};
const CharacterId char_diver2Evolutions[] = {char_diver1, char_diver3};
const CharacterId char_diver3Evolutions[] = {char_astronaut, char_diver2};
const CharacterId char_dog1Evolutions[] = {char_beagle, char_cat1, char_wolf1};
const CharacterId char_dragon1Evolutions[] = {char_base, char_devil1, char_dragon2};
const CharacterId char_dragon2Evolutions[] = {char_dragon1, char_dragon3_fire, char_dragon3_ice};
const CharacterId char_dragon3_fireEvolutions[] = {char_dragon2, char_element_fire};
const CharacterId char_dragon3_iceEvolutions[] = {char_dragon2};
const CharacterId char_druidEvolutions[] = {char_plant3, char_wizard2};
const CharacterId char_duck1Evolutions[] = {char_base, char_duck2};
const CharacterId char_duck2Evolutions[] = {char_duck1, char_duck3, char_penguin1};
const CharacterId char_duck3Evolutions[] = {char_duck2};
const CharacterId char_element_airEvolutions[] = {char_element_fire, char_elemental_water, char_monk_elemental};
const CharacterId char_element_earthEvolutions[] = {char_element_fire, char_elemental_water, char_plant3};
const CharacterId char_element_fireEvolutions[] = {char_dragon3_fire, char_element_air, char_element_earth};
const CharacterId char_elemental_waterEvolutions[] = {char_element_air, char_element_earth, char_octopus3};
const CharacterId char_emeraldEvolutions[] = {char_alien, char_ruby};
const CharacterId char_explorerEvolutions[] = {char_scout};
const CharacterId char_friarEvolutions[] = {char_monk, char_priest};
const CharacterId char_frog1Evolutions[] = {char_diver1, char_frog2};
const CharacterId char_frog2Evolutions[] = {char_frog1, char_frog3};
const CharacterId char_frog3Evolutions[] = {char_frog2, char_frog4};
const CharacterId char_frog4Evolutions[] = {char_frog3, char_royal2b};
const CharacterId char_goblinEvolutions[] = {char_mummy, char_punk1, char_skeleton};
const CharacterId char_hairEvolutions[] = {char_base, char_rocker, char_skater};
const CharacterId char_hamburgerEvolutions[] = {char_pizza};
const CharacterId char_honey_snailEvolutions[] = {char_queen_bee, char_snail_honey};
const CharacterId char_icecream1Evolutions[] = {char_banana, char_icecream2, char_knight_ice_cream_vanilla};
const CharacterId char_icecream2Evolutions[] = {char_icecream1};
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
const CharacterId char_knight_ice_cream_variousEvolutions[] = {char_knight_pink};
const CharacterId char_knight_octopus_2Evolutions[] = {char_knight_octopus_3, char_knight2};
const CharacterId char_knight_octopus_3Evolutions[] = {char_knight_octopus_2, char_octopus3};
const CharacterId char_knight_pegasusEvolutions[] = {char_knight2};
const CharacterId char_knight_pinkEvolutions[] = {char_knight_ice_cream_vanilla, char_knight_ice_cream_various};
const CharacterId char_knight_red_swordsEvolutions[] = {char_knight_dual_swords, char_knight_red_swords_dragon1};
const CharacterId char_knight_red_swords_dragon1Evolutions[] = {char_knight_red_swords, char_knight_red_swords_dragon2};
const CharacterId char_knight_red_swords_dragon2Evolutions[] = {char_knight_red_swords_dragon1};
const CharacterId char_knight_scifiEvolutions[] = {char_knight_blue_swords};
const CharacterId char_knight1Evolutions[] = {char_karate1, char_knight_banner, char_knight2, char_paladin};
const CharacterId char_knight2Evolutions[] = {char_knight_amigurumi, char_knight_axe, char_knight_dual_swords, char_knight_evil1, char_knight_gold, char_knight_ice_cream_vanilla, char_knight_octopus_2, char_knight_pegasus, char_knight1, char_knight4, char_knight4b};
const CharacterId char_knight4Evolutions[] = {char_knight2};
const CharacterId char_knight4bEvolutions[] = {char_knight2, char_knight5b};
const CharacterId char_knight5bEvolutions[] = {char_knight4b, char_mermaid3a};
const CharacterId char_laser_swordEvolutions[] = {char_astronaut, char_knight_blue_swords, char_scifi_soldier_2};
const CharacterId char_lichEvolutions[] = {char_beagle4, char_skeleton};
const CharacterId char_mermaid1Evolutions[] = {char_mermaid2a, char_mermaid2b, char_mermaid2c, char_seahorse};
const CharacterId char_mermaid2aEvolutions[] = {char_mermaid1, char_mermaid3a};
const CharacterId char_mermaid2bEvolutions[] = {char_mermaid1};
const CharacterId char_mermaid2cEvolutions[] = {char_mermaid1};
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
const CharacterId char_ninjaEvolutions[] = {char_samurai};
const CharacterId char_octopus1Evolutions[] = {char_diver1, char_octopus2};
const CharacterId char_octopus2Evolutions[] = {char_octopus1, char_octopus3};
const CharacterId char_octopus3Evolutions[] = {char_elemental_water, char_knight_octopus_3, char_octopus2};
const CharacterId char_paladinEvolutions[] = {char_knight1, char_samurai};
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
const CharacterId char_princessEvolutions[] = {char_princess_white, char_royal1};
const CharacterId char_princess_blueEvolutions[] = {char_princess_white};
const CharacterId char_princess_redEvolutions[] = {char_princess_white};
const CharacterId char_princess_whiteEvolutions[] = {char_princess, char_princess_blue, char_princess_red, char_princess_white_hamster, char_princess_yellow};
const CharacterId char_princess_white_hamsterEvolutions[] = {char_princess_white};
const CharacterId char_princess_yellowEvolutions[] = {char_princess_white};
const CharacterId char_pugEvolutions[] = {char_beagle, char_pug_toys};
const CharacterId char_pug_toysEvolutions[] = {char_pug};
const CharacterId char_punk1Evolutions[] = {char_goblin, char_punk2, char_rocker};
const CharacterId char_punk2Evolutions[] = {char_punk1, char_punk3};
const CharacterId char_punk3Evolutions[] = {char_punk2};
const CharacterId char_queen_beeEvolutions[] = {char_beekeeper, char_honey_snail, char_snail_honey};
const CharacterId char_rockerEvolutions[] = {char_bard, char_hair, char_popstar, char_punk1, char_rockstar};
const CharacterId char_rockstarEvolutions[] = {char_axolotl5d, char_rocker, char_rockstar2};
const CharacterId char_rockstar2Evolutions[] = {char_rockstar};
const CharacterId char_royal1Evolutions[] = {char_princess, char_royal2a, char_royal2b};
const CharacterId char_royal2aEvolutions[] = {char_royal1};
const CharacterId char_royal2bEvolutions[] = {char_frog4, char_royal1};
const CharacterId char_rubyEvolutions[] = {char_devil2, char_emerald};
const CharacterId char_samuraiEvolutions[] = {char_ninja, char_paladin};
const CharacterId char_scifi_soldier_2Evolutions[] = {char_laser_sword};
const CharacterId char_scoutEvolutions[] = {char_base, char_detective1, char_explorer};
const CharacterId char_seahorseEvolutions[] = {char_diver1, char_mermaid1};
const CharacterId char_shaggyEvolutions[] = {char_wolf1};
const CharacterId char_shark1Evolutions[] = {char_diver1, char_shark2};
const CharacterId char_shark2Evolutions[] = {char_shark1};
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
const CharacterId char_volleyball1Evolutions[] = {char_base, char_karate1, char_volleyball2};
const CharacterId char_volleyball2Evolutions[] = {char_volleyball1};
const CharacterId char_waiter1Evolutions[] = {char_mustache1, char_postman, char_waiter2};
const CharacterId char_waiter2Evolutions[] = {char_waiter1, char_waiter3};
const CharacterId char_waiter3Evolutions[] = {char_waiter2};
const CharacterId char_wizard1aEvolutions[] = {char_mustache1, char_wizard2};
const CharacterId char_wizard2Evolutions[] = {char_druid, char_wizard1a, char_wizard2a};
const CharacterId char_wizard2aEvolutions[] = {char_cleric, char_wizard2};
const CharacterId char_wolf1Evolutions[] = {char_dog1, char_shaggy, char_wolf2};
const CharacterId char_wolf2Evolutions[] = {char_wolf1, char_wolf3};
const CharacterId char_wolf3Evolutions[] = {char_wolf2};
const CharacterInfo characters[char_count] = {
    {char_alienEvolutions, 2},  // char_alien
    {char_amigurumi1Evolutions, 3},  // char_amigurumi1
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
    {char_axolotl3eEvolutions, 1},  // char_axolotl3e
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
    {char_beekeeperEvolutions, 2},  // char_beekeeper
    {char_bishopEvolutions, 2},  // char_bishop
    {char_cabbageEvolutions, 3},  // char_cabbage
    {char_cabbage2Evolutions, 1},  // char_cabbage2
    {char_cactusEvolutions, 1},  // char_cactus
    {char_capybaraEvolutions, 2},  // char_capybara
    {char_capybara2Evolutions, 1},  // char_capybara2
    {char_cat1Evolutions, 4},  // char_cat1
    {char_cat2Evolutions, 2},  // char_cat2
    {char_cat3Evolutions, 1},  // char_cat3
    {char_clericEvolutions, 2},  // char_cleric
    {char_crab1Evolutions, 3},  // char_crab1
    {char_crab2Evolutions, 1},  // char_crab2
    {char_detective1Evolutions, 2},  // char_detective1
    {char_detective2Evolutions, 1},  // char_detective2
    {char_devil1Evolutions, 3},  // char_devil1
    {char_devil2Evolutions, 2},  // char_devil2
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
    {char_duck2Evolutions, 3},  // char_duck2
    {char_duck3Evolutions, 1},  // char_duck3
    {char_element_airEvolutions, 3},  // char_element_air
    {char_element_earthEvolutions, 3},  // char_element_earth
    {char_element_fireEvolutions, 3},  // char_element_fire
    {char_elemental_waterEvolutions, 3},  // char_elemental_water
    {char_emeraldEvolutions, 2},  // char_emerald
    {char_explorerEvolutions, 1},  // char_explorer
    {char_friarEvolutions, 2},  // char_friar
    {char_frog1Evolutions, 2},  // char_frog1
    {char_frog2Evolutions, 2},  // char_frog2
    {char_frog3Evolutions, 2},  // char_frog3
    {char_frog4Evolutions, 2},  // char_frog4
    {char_goblinEvolutions, 3},  // char_goblin
    {char_hairEvolutions, 3},  // char_hair
    {char_hamburgerEvolutions, 1},  // char_hamburger
    {char_honey_snailEvolutions, 2},  // char_honey_snail
    {char_icecream1Evolutions, 3},  // char_icecream1
    {char_icecream2Evolutions, 1},  // char_icecream2
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
    {char_knight_ice_cream_variousEvolutions, 1},  // char_knight_ice_cream_various
    {char_knight_octopus_2Evolutions, 2},  // char_knight_octopus_2
    {char_knight_octopus_3Evolutions, 2},  // char_knight_octopus_3
    {char_knight_pegasusEvolutions, 1},  // char_knight_pegasus
    {char_knight_pinkEvolutions, 2},  // char_knight_pink
    {char_knight_red_swordsEvolutions, 2},  // char_knight_red_swords
    {char_knight_red_swords_dragon1Evolutions, 2},  // char_knight_red_swords_dragon1
    {char_knight_red_swords_dragon2Evolutions, 1},  // char_knight_red_swords_dragon2
    {char_knight_scifiEvolutions, 1},  // char_knight_scifi
    {char_knight1Evolutions, 4},  // char_knight1
    {char_knight2Evolutions, 11},  // char_knight2
    {char_knight4Evolutions, 1},  // char_knight4
    {char_knight4bEvolutions, 2},  // char_knight4b
    {char_knight5bEvolutions, 2},  // char_knight5b
    {char_laser_swordEvolutions, 3},  // char_laser_sword
    {char_lichEvolutions, 2},  // char_lich
    {char_mermaid1Evolutions, 4},  // char_mermaid1
    {char_mermaid2aEvolutions, 2},  // char_mermaid2a
    {char_mermaid2bEvolutions, 1},  // char_mermaid2b
    {char_mermaid2cEvolutions, 1},  // char_mermaid2c
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
    {char_ninjaEvolutions, 1},  // char_ninja
    {char_octopus1Evolutions, 2},  // char_octopus1
    {char_octopus2Evolutions, 2},  // char_octopus2
    {char_octopus3Evolutions, 3},  // char_octopus3
    {char_paladinEvolutions, 2},  // char_paladin
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
    {char_princessEvolutions, 2},  // char_princess
    {char_princess_blueEvolutions, 1},  // char_princess_blue
    {char_princess_redEvolutions, 1},  // char_princess_red
    {char_princess_whiteEvolutions, 5},  // char_princess_white
    {char_princess_white_hamsterEvolutions, 1},  // char_princess_white_hamster
    {char_princess_yellowEvolutions, 1},  // char_princess_yellow
    {char_pugEvolutions, 2},  // char_pug
    {char_pug_toysEvolutions, 1},  // char_pug_toys
    {char_punk1Evolutions, 3},  // char_punk1
    {char_punk2Evolutions, 2},  // char_punk2
    {char_punk3Evolutions, 1},  // char_punk3
    {char_queen_beeEvolutions, 3},  // char_queen_bee
    {char_rockerEvolutions, 5},  // char_rocker
    {char_rockstarEvolutions, 3},  // char_rockstar
    {char_rockstar2Evolutions, 1},  // char_rockstar2
    {char_royal1Evolutions, 3},  // char_royal1
    {char_royal2aEvolutions, 1},  // char_royal2a
    {char_royal2bEvolutions, 2},  // char_royal2b
    {char_rubyEvolutions, 2},  // char_ruby
    {char_samuraiEvolutions, 2},  // char_samurai
    {char_scifi_soldier_2Evolutions, 1},  // char_scifi_soldier_2
    {char_scoutEvolutions, 3},  // char_scout
    {char_seahorseEvolutions, 2},  // char_seahorse
    {char_shaggyEvolutions, 1},  // char_shaggy
    {char_shark1Evolutions, 2},  // char_shark1
    {char_shark2Evolutions, 1},  // char_shark2
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
    {char_volleyball1Evolutions, 3},  // char_volleyball1
    {char_volleyball2Evolutions, 1},  // char_volleyball2
    {char_waiter1Evolutions, 3},  // char_waiter1
    {char_waiter2Evolutions, 2},  // char_waiter2
    {char_waiter3Evolutions, 1},  // char_waiter3
    {char_wizard1aEvolutions, 2},  // char_wizard1a
    {char_wizard2Evolutions, 3},  // char_wizard2
    {char_wizard2aEvolutions, 2},  // char_wizard2a
    {char_wolf1Evolutions, 3},  // char_wolf1
    {char_wolf2Evolutions, 2},  // char_wolf2
    {char_wolf3Evolutions, 1},  // char_wolf3
};
