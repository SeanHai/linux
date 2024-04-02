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
	{ 0xb8b2b1f7, "mce_register_decode_chain" },
	{ 0xb51fbd64, "edac_op_state" },
	{ 0xaf8edaac, "edac_mc_add_mc_with_groups" },
	{ 0x95ef1ccc, "dmi_memdev_size" },
	{ 0x499bbf57, "nfit_get_smbios_id" },
	{ 0x44b5ee9a, "kasprintf" },
	{ 0xfdcb18b8, "edac_mc_alloc" },
	{ 0xe138ab3f, "pci_dev_get" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x39ecd774, "pci_get_device" },
	{ 0xbec30d05, "x86_match_cpu" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x5ab09745, "edac_get_owner" },
	{ 0x2c2719bd, "pci_dev_put" },
	{ 0xe8c2d4d9, "edac_mc_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x52671f22, "edac_mc_del_mc" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x4e91a072, "edac_get_report_status" },
	{ 0x27e1a049, "printk" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x509a75f3, "edac_mc_handle_error" },
	{ 0x28318305, "snprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfit";

MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0055:feature:*");

MODULE_INFO(srcversion, "949DF4F59525F22CA4320AF");
MODULE_INFO(rhelversion, "8.0");
