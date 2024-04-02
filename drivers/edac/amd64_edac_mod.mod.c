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
	{ 0x81221cad, "amd_nb_num" },
	{ 0xaf8edaac, "edac_mc_add_mc_with_groups" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd7c584a, "pci_write_config_dword" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xe8e202b6, "node_to_amd_nb" },
	{ 0x3441445f, "msrs_free" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xb4206d25, "edac_pci_release_generic_ctl" },
	{ 0x15244c9d, "boot_cpu_data" },
	{ 0xad27f361, "__warn_printk" },
	{ 0xf5a5c84c, "msrs_alloc" },
	{ 0x8cac8c08, "free_cpumask_var" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xa792fd7f, "cpumask_next" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xb51fbd64, "edac_op_state" },
	{ 0x27e1a049, "printk" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0xe30fe639, "rdmsr_on_cpus" },
	{ 0x509a75f3, "edac_mc_handle_error" },
	{ 0x14878009, "amd_report_gart_errors" },
	{ 0x525c1ee, "zalloc_cpumask_var" },
	{ 0x830c469f, "amd_register_ecc_decoder" },
	{ 0xe8c2d4d9, "edac_mc_free" },
	{ 0x632d9353, "wrmsr_on_cpus" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xfc37562, "amd_smn_read" },
	{ 0xfdcb18b8, "edac_mc_alloc" },
	{ 0x4e4fb9a, "edac_pci_create_generic_ctl" },
	{ 0x987ab0a5, "amd_get_nb_id" },
	{ 0xe5203135, "find_mci_by_dev" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0x109525c0, "pv_cpu_ops" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x37a0cba, "kfree" },
	{ 0xd919806a, "amd_cache_northbridges" },
	{ 0xaf761418, "amd_unregister_ecc_decoder" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x39ecd774, "pci_get_device" },
	{ 0xbb2ac63c, "edac_mc_find" },
	{ 0x52671f22, "edac_mc_del_mc" },
	{ 0x2c2719bd, "pci_dev_put" },
	{ 0xa9854364, "umc_normaddr_to_sysaddr" },
	{ 0xefeafcf1, "edac_has_mcs" },
	{ 0xbec30d05, "x86_match_cpu" },
	{ 0x5ab09745, "edac_get_owner" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=edac_mce_amd";

MODULE_ALIAS("cpu:type:x86,ven0002fam000Fmod*:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0002fam0010mod*:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0002fam0015mod*:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0002fam0016mod*:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0002fam0017mod*:feature:*");

MODULE_INFO(srcversion, "CB27EBA4FAC9AD4A94DFF39");
MODULE_INFO(rhelversion, "8.0");
