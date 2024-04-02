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
	{ 0x52671f22, "edac_mc_del_mc" },
	{ 0xf2d7d87, "mce_unregister_decode_chain" },
	{ 0xb8b2b1f7, "mce_register_decode_chain" },
	{ 0xe8c2d4d9, "edac_mc_free" },
	{ 0xaf8edaac, "edac_mc_add_mc_with_groups" },
	{ 0xfdcb18b8, "edac_mc_alloc" },
	{ 0x83814079, "pci_find_bus" },
	{ 0xb51fbd64, "edac_op_state" },
	{ 0xbec30d05, "x86_match_cpu" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x5ab09745, "edac_get_owner" },
	{ 0x4e91a072, "edac_get_report_status" },
	{ 0x509a75f3, "edac_mc_handle_error" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x3288792d, "pci_write_config_byte" },
	{ 0xedc03953, "iounmap" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xdd5c21c, "pci_read_config_byte" },
	{ 0x2c2719bd, "pci_dev_put" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0x39ecd774, "pci_get_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x16ba404b, "pci_bus_write_config_byte" },
	{ 0xebad434c, "pci_bus_read_config_dword" },
	{ 0xf9c23b4b, "pci_bus_write_config_word" },
	{ 0x78040ede, "pci_bus_write_config_dword" },
	{ 0xd138b5bc, "pci_bus_read_config_word" },
	{ 0xb6ac6def, "pci_bus_read_config_byte" },
	{ 0x27e1a049, "printk" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x28318305, "snprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod005C:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod005F:feature:*");

MODULE_INFO(srcversion, "A43B79969ED0E26357EC64B");
MODULE_INFO(rhelversion, "8.0");
