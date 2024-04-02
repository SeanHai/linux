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
	{ 0x2d3385d3, "system_wq" },
	{ 0x402b8281, "__request_module" },
	{ 0xb6d860ba, "i8042_install_filter" },
	{ 0x8a490c90, "rfkill_set_sw_state" },
	{ 0xf5284f7e, "debugfs_create_dir" },
	{ 0xc7f4b92, "single_open" },
	{ 0x985ca3e0, "single_release" },
	{ 0x5d1c022e, "backlight_device_register" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0xc41033c1, "seq_printf" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x4cabed9, "rfkill_register" },
	{ 0xb03676a8, "debugfs_create_file" },
	{ 0x91715312, "sprintf" },
	{ 0x5d11132b, "debugfs_remove_recursive" },
	{ 0x4b94a99b, "seq_read" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x16500d9a, "of_led_classdev_register" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xf9019aa0, "kstrtou8" },
	{ 0xd57f0cd9, "rfkill_alloc" },
	{ 0x27e1a049, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x97b6982d, "platform_device_del" },
	{ 0xedafd5ca, "platform_device_alloc" },
	{ 0x97999817, "rfkill_set_hw_state" },
	{ 0xe0c31db6, "platform_device_add" },
	{ 0x5a921311, "strncmp" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x27892028, "i8042_remove_filter" },
	{ 0x3cf48db4, "platform_device_unregister" },
	{ 0x373db350, "kstrtoint" },
	{ 0xd6c6b12d, "dell_laptop_unregister_notifier" },
	{ 0x6de7f7ff, "acpi_video_get_backlight_type" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x4fdee897, "i8042_command" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x45170471, "dell_smbios_call" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc2871e79, "dell_smbios_error" },
	{ 0x84a914a7, "led_classdev_unregister" },
	{ 0x2c208607, "power_supply_is_system_supplied" },
	{ 0x291eb36, "seq_lseek" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0xc0763484, "rfkill_blocked" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x1b0b3141, "dell_laptop_register_notifier" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0x72a6ba54, "backlight_device_unregister" },
	{ 0x7fd2ce06, "dell_smbios_find_token" },
	{ 0x27a0b904, "platform_device_put" },
	{ 0x81e6b37f, "dmi_get_system_info" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rfkill,dell-smbios,video";

MODULE_ALIAS("dmi*:svn*DellInc.*:ct*8*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:ct*9*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:ct*10*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:ct*30*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:ct*31*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:ct*32*:");
MODULE_ALIAS("dmi*:svn*DellComputerCorporation*:ct*8*:");

MODULE_INFO(srcversion, "0BC62967AECC10757E382C6");
MODULE_INFO(rhelversion, "8.0");
