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
	{ 0x42c62921, "acpi_bus_unregister_driver" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0x135d5c6a, "acpi_bus_register_driver" },
	{ 0x87e5eb3e, "devm_backlight_device_register" },
	{ 0x97b6982d, "platform_device_del" },
	{ 0xf0aeba88, "sysfs_create_group" },
	{ 0x27a0b904, "platform_device_put" },
	{ 0xe0c31db6, "platform_device_add" },
	{ 0xedafd5ca, "platform_device_alloc" },
	{ 0x2145ba1e, "devm_of_led_classdev_register" },
	{ 0xf789deff, "input_register_device" },
	{ 0xe134f8e2, "sparse_keymap_setup" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x28318305, "snprintf" },
	{ 0xbcab0473, "acpi_device_hid" },
	{ 0x5296e7b0, "devm_input_allocate_device" },
	{ 0x6de7f7ff, "acpi_video_get_backlight_type" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x97868aef, "__kfifo_alloc" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xe6478472, "_dev_info" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x5f726f82, "sparse_keymap_entry_from_scancode" },
	{ 0x5c310c55, "sparse_keymap_report_event" },
	{ 0xeccd3e0c, "acpi_handle_printk" },
	{ 0x509b64ea, "acpi_has_method" },
	{ 0xb4043948, "acpi_execute_simple_method" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x3cf48db4, "platform_device_unregister" },
	{ 0xdad01803, "sysfs_remove_group" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe9c9fc64, "__acpi_handle_debug" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x27e1a049, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=sparse-keymap,video";

MODULE_ALIAS("acpi*:FUJ02B1:*");
MODULE_ALIAS("acpi*:FUJ02E3:*");

MODULE_INFO(srcversion, "69922C06315F00B4BDDDCED");
MODULE_INFO(rhelversion, "8.0");
