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
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0x3cf48db4, "platform_device_unregister" },
	{ 0x6b8d353d, "device_remove_file" },
	{ 0x72a6ba54, "backlight_device_unregister" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0x27a0b904, "platform_device_put" },
	{ 0x97b6982d, "platform_device_del" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0x27892028, "i8042_remove_filter" },
	{ 0xdad01803, "sysfs_remove_group" },
	{ 0x5d2f1135, "device_create_file" },
	{ 0xf0aeba88, "sysfs_create_group" },
	{ 0xdc75c81f, "input_free_device" },
	{ 0xda0e8aec, "input_unregister_device" },
	{ 0xb6d860ba, "i8042_install_filter" },
	{ 0xf789deff, "input_register_device" },
	{ 0xe134f8e2, "sparse_keymap_setup" },
	{ 0xd55379f7, "input_allocate_device" },
	{ 0x4cabed9, "rfkill_register" },
	{ 0xd57f0cd9, "rfkill_alloc" },
	{ 0xe0c31db6, "platform_device_add" },
	{ 0xedafd5ca, "platform_device_alloc" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0x6de7f7ff, "acpi_video_get_backlight_type" },
	{ 0x5d1c022e, "backlight_device_register" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0x121da905, "queue_work_on" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0xc708f1fe, "ec_write" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xaa00fdc0, "ec_transaction" },
	{ 0x91715312, "sprintf" },
	{ 0x5c310c55, "sparse_keymap_report_event" },
	{ 0x8a490c90, "rfkill_set_sw_state" },
	{ 0x97999817, "rfkill_set_hw_state" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xfc4152fc, "ec_read" },
	{ 0x27e1a049, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=sparse-keymap,rfkill,video";


MODULE_INFO(srcversion, "99E35BD87F61DF02B3C0E57");
MODULE_INFO(rhelversion, "8.0");
