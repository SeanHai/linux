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
	{ 0xf2d7d87, "mce_unregister_decode_chain" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x9b9f3648, "pcibios_scan_specific_bus" },
	{ 0xb8b2b1f7, "mce_register_decode_chain" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xb51fbd64, "edac_op_state" },
	{ 0x28318305, "snprintf" },
	{ 0x7c983a5d, "dmi_walk" },
	{ 0x4e4fb9a, "edac_pci_create_generic_ctl" },
	{ 0xcca62a76, "device_add" },
	{ 0x76ca9e4e, "dev_set_name" },
	{ 0x551be51f, "device_initialize" },
	{ 0xaf8edaac, "edac_mc_add_mc_with_groups" },
	{ 0x44b5ee9a, "kasprintf" },
	{ 0xfdcb18b8, "edac_mc_alloc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xe138ab3f, "pci_dev_get" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x39ecd774, "pci_get_device" },
	{ 0xc28e110e, "pci_find_next_bus" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x2c2719bd, "pci_dev_put" },
	{ 0xe8c2d4d9, "edac_mc_free" },
	{ 0x52671f22, "edac_mc_del_mc" },
	{ 0x91018733, "device_del" },
	{ 0xd0c86c05, "put_device" },
	{ 0xb4206d25, "edac_pci_release_generic_ctl" },
	{ 0x509a75f3, "edac_mc_handle_error" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x91715312, "sprintf" },
	{ 0x27e1a049, "printk" },
	{ 0xf9a482f9, "msleep" },
	{ 0x60ea2d6, "kstrtoull" },
	{ 0xd7c584a, "pci_write_config_dword" },
	{ 0x37a0cba, "kfree" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00008086d0000342Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002C90sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "7D09018C11E542ADBFEAB67");
MODULE_INFO(rhelversion, "8.0");
