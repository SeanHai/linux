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
	{ 0x5eba9410, "__request_region" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdd5c21c, "pci_read_config_byte" },
	{ 0x3ada9e06, "acpi_check_region" },
	{ 0x1104443c, "i2c_add_adapter" },
	{ 0xca27d0c4, "ioport_resource" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xf33f3525, "pci_read_config_word" },
	{ 0xac7396a8, "i2c_del_adapter" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x109525c0, "pv_cpu_ops" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe45c1b14, "__release_region" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x28318305, "snprintf" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001022d0000740Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00007413sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00007443sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d0000746Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000001B4sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "EA23482F96DE4732A0BFD5B");
MODULE_INFO(rhelversion, "8.0");
