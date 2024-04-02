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
	{ 0x135d5c6a, "acpi_bus_register_driver" },
	{ 0x5eba9410, "__request_region" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x5d1c022e, "backlight_device_register" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x42c62921, "acpi_bus_unregister_driver" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xca27d0c4, "ioport_resource" },
	{ 0x27e1a049, "printk" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xdfe3440, "pci_get_domain_bus_and_slot" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe45c1b14, "__release_region" },
	{ 0x2c2719bd, "pci_dev_put" },
	{ 0x72a6ba54, "backlight_device_unregister" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("acpi*:APP0002:*");

MODULE_INFO(srcversion, "2674CE8B9C82BEA642A6375");
MODULE_INFO(rhelversion, "8.0");
