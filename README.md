# Tamagacha

Discover and care for 200+ creatures on your
[M5 Stick S3](https://docs.m5stack.com/en/core/StickS3).

Press button A (on the front) to feed the creature.

Hold button B (on the right) and rotate the device to preview possible evolutions.
Release button B to make your choice.

![base](assets/base/0.jpg) ![plant1](assets/plant1/6.jpg) ![eel](assets/eel/0.jpg) ![astronaut](assets/astronaut/5.jpg)

## Make your own

Open the vault directory in [Obsidian](https://obsidian.md/). Edit the Lineages canvas.
This graph of images is the evolution tree. `base` is the starting state. You can replace
everything, or just make a few changes.

Once you're happy with the evolution tree, run all cells in `prep.ipynb`.
This generates `data/images.bin`.

Lastly, run "Upload Filesystem Image" and "Upload" in [PlatformIO](https://platformio.org/).
I've used the VS Code extension.
