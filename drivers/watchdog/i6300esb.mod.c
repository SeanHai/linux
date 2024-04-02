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
	{ 0xd7258a3c, "dev_warn" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xe6478472, "_dev_info" },
	{ 0x7b325197, "watchdog_register_device" },
	{ 0xb9a8986d, "pci_write_config_word" },
	{ 0x9c790386, "watchdog_init_timeout" },
	{ 0x8c69e82c, "pci_ioremap_bar" },
	{ 0x18c475b, "pci_request_region" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xdd5c21c, "pci_read_config_byte" },
	{ 0x3288792d, "pci_write_config_byte" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0x63c8b394, "pci_release_region" },
	{ 0xedc03953, "iounmap" },
	{ 0x5739af90, "watchdog_unregister_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00008086d000025ABsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F6D3A2EEBB7643821EF9024");
MODULE_INFO(rhelversion, "8.0");
