#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xe6af07fa, "module_layout" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0x3cf48db4, "platform_device_unregister" },
	{ 0xda0e8aec, "input_unregister_device" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0x27a0b904, "platform_device_put" },
	{ 0x97b6982d, "platform_device_del" },
	{ 0xff9ef847, "debugfs_create_u32" },
	{ 0xf5284f7e, "debugfs_create_dir" },
	{ 0xe0c31db6, "platform_device_add" },
	{ 0xedafd5ca, "platform_device_alloc" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0x822030b4, "input_set_abs_params" },
	{ 0xdc75c81f, "input_free_device" },
	{ 0x76ae31fd, "wmi_remove_notify_handler" },
	{ 0xeb7f6046, "acpi_get_devices" },
	{ 0xf789deff, "input_register_device" },
	{ 0xf18bdd75, "wmi_install_notify_handler" },
	{ 0xe134f8e2, "sparse_keymap_setup" },
	{ 0xd55379f7, "input_allocate_device" },
	{ 0x6de7f7ff, "acpi_video_get_backlight_type" },
	{ 0xe92ca535, "acpi_video_set_dmi_backlight_type" },
	{ 0x141271bf, "acpi_dev_found" },
	{ 0xaba842fe, "wmi_query_block" },
	{ 0x7c983a5d, "dmi_walk" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x5d1c022e, "backlight_device_register" },
	{ 0x16500d9a, "of_led_classdev_register" },
	{ 0x4cabed9, "rfkill_register" },
	{ 0xd57f0cd9, "rfkill_alloc" },
	{ 0x97999817, "rfkill_set_hw_state" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0xfc4152fc, "ec_read" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0x72a6ba54, "backlight_device_unregister" },
	{ 0x84a914a7, "led_classdev_unregister" },
	{ 0xc9d4d6d1, "wmi_has_guid" },
	{ 0x1b8b95ad, "i8042_unlock_chip" },
	{ 0x4fdee897, "i8042_command" },
	{ 0x17f341a0, "i8042_lock_chip" },
	{ 0x79a335e9, "debugfs_remove" },
	{ 0xbcab0473, "acpi_device_hid" },
	{ 0x572e5012, "acpi_bus_get_device" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x8a490c90, "rfkill_set_sw_state" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x5c310c55, "sparse_keymap_report_event" },
	{ 0x5f726f82, "sparse_keymap_entry_from_scancode" },
	{ 0x17b0f8ca, "wmi_get_event_data" },
	{ 0xfe7843b, "input_event" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x37a0cba, "kfree" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x6068bedf, "wmi_evaluate_method" },
	{ 0xc708f1fe, "ec_write" },
	{ 0x27e1a049, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wmi,sparse-keymap,video,rfkill";


MODULE_INFO(srcversion, "F655B239ABF1FB2755AC147");
MODULE_INFO(rhelversion, "8.0");
