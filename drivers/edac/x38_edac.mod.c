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
	{ 0x2c2719bd, "pci_dev_put" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x39ecd774, "pci_get_device" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xb51fbd64, "edac_op_state" },
	{ 0x509a75f3, "edac_mc_handle_error" },
	{ 0x27e1a049, "printk" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe138ab3f, "pci_dev_get" },
	{ 0xaf8edaac, "edac_mc_add_mc_with_groups" },
	{ 0xb9a8986d, "pci_write_config_word" },
	{ 0xf33f3525, "pci_read_config_word" },
	{ 0xfdcb18b8, "edac_mc_alloc" },
	{ 0xdd5c21c, "pci_read_config_byte" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xd7c584a, "pci_write_config_dword" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0xe8c2d4d9, "edac_mc_free" },
	{ 0xedc03953, "iounmap" },
	{ 0x52671f22, "edac_mc_del_mc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00008086d000029E0sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D2D41C8A967EC5FC57344ED");
MODULE_INFO(rhelversion, "8.0");
