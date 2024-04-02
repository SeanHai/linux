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
	{ 0x402b8281, "__request_module" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xf5284f7e, "debugfs_create_dir" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xc6f60ec0, "adf_vf2pf_init" },
	{ 0xbbd40f36, "adf_dev_init" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x9481b9c7, "adf_vf2pf_shutdown" },
	{ 0x8f88d754, "adf_enable_vf2pf_comms" },
	{ 0x218dc898, "adf_vf_isr_resource_free" },
	{ 0xcb8f1d76, "adf_devmgr_update_class_index" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0x8bcd35b8, "adf_dev_stop" },
	{ 0x2b6ad4a9, "adf_devmgr_rm_dev" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x2bbaf7e1, "adf_dev_shutdown" },
	{ 0xfa5bba5, "adf_cfg_dev_add" },
	{ 0xc94fb8eb, "pci_iounmap" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x27e1a049, "printk" },
	{ 0x79a335e9, "debugfs_remove" },
	{ 0x85cfa1dc, "adf_cfg_dev_remove" },
	{ 0xde1c883b, "adf_devmgr_add_dev" },
	{ 0xe68fed60, "pci_select_bars" },
	{ 0xdcd000b8, "kmem_cache_alloc_node_trace" },
	{ 0x6650c769, "adf_dev_start" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4430ce13, "qat_crypto_dev_config" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0xcc3b167a, "adf_clean_vf_map" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x7aa104c7, "adf_devmgr_pci_to_accel_dev" },
	{ 0x28318305, "snprintf" },
	{ 0x25c5ba6e, "pci_iomap" },
	{ 0xb467f9f1, "adf_vf_isr_resource_alloc" },
	{ 0x1d29dff0, "pci_enable_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=intel_qat";

MODULE_ALIAS("pci:v00008086d00000443sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "E16C17C638DC67E2366D95A");
MODULE_INFO(rhelversion, "8.0");
