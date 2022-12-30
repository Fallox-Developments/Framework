/*

private _weapon = [currentWeapon player, "Bare Hands"] select (count (currentWeapon player) == 0);
private _faction = switch (playerSide) do {
    case west: {"Poilce"};
    case east: {"Rebel"};
    case independent: {"Medic"};
    case civilian: {"Citizen"};
    default {"Unknown"};
};

["Example_arkathos",[profileName, getplayeruid player, _weapon, _faction]] call DiscordEmbedBuilder_fnc_buildCfg;

*/

class Example_arkathos {
    webhook="Example_connected_hook"; // CfgDiscordEmbedWebhooks
    message="";
    username="";
    avatar="https://discord.com/assets/28174a34e77bb5e5310ced9f95cb480b.png";
    tts=0;
    // Maximum of 10 embeds per template
    class Embeds {
        class Embed1: CfgDiscordEmbedTemplate {
            title="Player Connected";
            description="A player has connected to the server";
            timestamp=1;
            fields[]={
                {"Name","%1",1},
                {"SteamID","%2",1},
                {"Weapon","%3",1},
                {"Faction","%4",1}
            };
        };
    };
};
