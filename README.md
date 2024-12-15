# QOOBIT Root Bone Adder

This is an Unreal Engine plugin that allows you to add a custom named root bone to the Skeleton of an existing Skeletal Mesh.

It will carry the existing weights of the existing root bone onto the same bone after the new root bone has been added.

## Demo Video

https://www.youtube.com/watch?v=1BLrMDrCOTA

## Installation
Copy the `QOO_RootBoneAdder` folder to your Unreal Engine 5.4 (main branch currently is built for this version) Engine/Plugins directory. For Windows, this is usually located in `C:\Program Files\Epic Games\UE_5.4\Engine\Plugins\Marketplace`.


## Using the Tool
After reloading Unreal, ensure that the Plugin has been activated.

![Alt text](ss-plugin.jpg?raw=true)

To use the tool, launch widget from the menu.

![Alt text](ss-menu.jpg?raw=true)

Populate the property view with a Skeletal Mesh and press the `Add Root Bone` button.

![Alt text](ss-loaded.jpg?raw=true)

> [!WARNING]
> You'll be notified that the changes will be permanent if the assets are saved after the operation. Remember to use `Revision Control` or make a duplicate of the Skeletal Mesh and Skeleton and assign them to each other before proceeding.

Before:

![Alt text](ss-before.jpg?raw=true)

After the operation is complete you should see your newly added unweighted root bone as well as the old root bone with the weights preserved.

![Alt text](ss-after.jpg?raw=true)

![Alt text](ss-rootweight.jpg?raw=true)

![Alt text](ss-hipweight.jpg?raw=true)

## Credits

Screenshot model provided by Mixamo (https://www.mixamo.com)

## Feature Requests / Other UE Versions

For builds in other versions or custom requests, please join our discord at: https://discord.com/invite/uDtYHhC9zd

## Additional Support

Please join our discord at: https://discord.com/invite/uDtYHhC9zd

or visit our website at: https://www.qoobit.com