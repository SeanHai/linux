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
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xb51fbd64, "edac_op_state" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x27e1a049, "printk" },
	{ 0x4e4fb9a, "edac_pci_create_generic_ctl" },
	{ 0xaf8edaac, "edac_mc_add_mc_with_groups" },
	{ 0x37a0cba, "kfree" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x39ecd774, "pci_get_device" },
	{ 0xfdcb18b8, "edac_mc_alloc" },
	{ 0xdd5c21c, "pci_read_config_byte" },
	{ 0x509a75f3, "edac_mc_handle_error" },
	{ 0x28318305, "snprintf" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd7c584a, "pci_write_config_dword" },
	{ 0xf33f3525, "pci_read_config_word" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0xe8c2d4d9, "edac_mc_free" },
	{ 0x52671f22, "edac_mc_del_mc" },
	{ 0xb4206d25, "edac_pci_release_generic_ctl" },
	{ 0x2c2719bd, "pci_dev_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00008086d000025F0sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "027CDF93DA1005D8AC523E6");
MODULE_INFO(rhelversion, "8.0");
