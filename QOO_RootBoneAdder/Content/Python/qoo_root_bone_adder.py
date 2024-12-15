import unreal


class QOORootBoneAdder:
    def setup_menu():
        main_menu = unreal.ToolMenus.get().find_menu("LevelEditor.MainMenu")

        qoo_main_menu = main_menu.add_sub_menu(
            "QOOBITMenu", "Python", "QOOBIT", "QOOBIT"
        )

        rigging_menu = qoo_main_menu.add_sub_menu(
            "QOORiggingMenu", "Python", "QOORigging", "Rigging"
        )

        entry = unreal.ToolMenuEntry(
            name="QOORootBoneAdder",
            type=unreal.MultiBlockType.MENU_ENTRY,
        )

        command = [
            "package_path = '/QOO_RootBoneAdder/Widgets/BP_QOORootBoneAdder'",
            "unreal.EditorUtilitySubsystem().spawn_and_register_tab(unreal.EditorAssetLibrary.load_asset(package_path))",
        ]
        entry.set_string_command(
            unreal.ToolMenuStringCommandType.PYTHON,
            custom_type="",
            string=";".join(command),
        )
        entry.set_label("Root Bone Adder")
        rigging_menu.add_menu_entry("Items", entry)
