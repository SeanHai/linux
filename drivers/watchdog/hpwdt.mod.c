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
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xb3a2dfdf, "nmi_panic" },
	{ 0x7129e5f8, "hex_asc" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x7b325197, "watchdog_register_device" },
	{ 0x9c790386, "watchdog_init_timeout" },
	{ 0xe6478472, "_dev_info" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x9a8a0ca3, "__register_nmi_handler" },
	{ 0x25c5ba6e, "pci_iomap" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xc94fb8eb, "pci_iounmap" },
	{ 0x5739af90, "watchdog_unregister_device" },
	{ 0xe64ad8ea, "unregister_nmi_handler" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xf10de535, "ioread8" },
	{ 0x848d372e, "iowrite8" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0xc5534d64, "ioread16" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00000E11d0000B203sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003306sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "DC63A2508F7F7E6C1C5CE18");
MODULE_INFO(rhelversion, "8.0");
