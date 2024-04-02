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
	{ 0x42c62921, "acpi_bus_unregister_driver" },
	{ 0x135d5c6a, "acpi_bus_register_driver" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xdc75c81f, "input_free_device" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x5eba9410, "__request_region" },
	{ 0xf789deff, "input_register_device" },
	{ 0xd4c7656d, "input_set_capability" },
	{ 0xd55379f7, "input_allocate_device" },
	{ 0x28318305, "snprintf" },
	{ 0x91715312, "sprintf" },
	{ 0xbcab0473, "acpi_device_hid" },
	{ 0xe2cffb14, "acpi_walk_resources" },
	{ 0x27e1a049, "printk" },
	{ 0xda0e8aec, "input_unregister_device" },
	{ 0xe45c1b14, "__release_region" },
	{ 0xca27d0c4, "ioport_resource" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfe7843b, "input_event" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("acpi*:FUJ02BD:*");
MODULE_ALIAS("acpi*:FUJ02BF:*");

MODULE_INFO(srcversion, "2D9EF56B32CA1EA4A83210F");
MODULE_INFO(rhelversion, "8.0");
