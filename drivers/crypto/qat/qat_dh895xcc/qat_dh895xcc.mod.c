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
	{ 0xdd5c21c, "pci_read_config_byte" },
	{ 0x752747f2, "adf_reset_sbr" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0xb8cec420, "pcie_set_readrq" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xbbd40f36, "adf_dev_init" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0x8bcd35b8, "adf_dev_stop" },
	{ 0x2b6ad4a9, "adf_devmgr_rm_dev" },
	{ 0xa9caa2d5, "adf_init_arb" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x2bbaf7e1, "adf_dev_shutdown" },
	{ 0xc63628d1, "adf_disable_aer" },
	{ 0xfa5bba5, "adf_cfg_dev_add" },
	{ 0xc94fb8eb, "pci_iounmap" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x27e1a049, "printk" },
	{ 0xc8766f98, "adf_isr_resource_alloc" },
	{ 0x79a335e9, "debugfs_remove" },
	{ 0x85cfa1dc, "adf_cfg_dev_remove" },
	{ 0xca0148b, "adf_disable_sriov" },
	{ 0x57864c35, "adf_isr_resource_free" },
	{ 0xde1c883b, "adf_devmgr_add_dev" },
	{ 0xe68fed60, "pci_select_bars" },
	{ 0xdcd000b8, "kmem_cache_alloc_node_trace" },
	{ 0x6650c769, "adf_dev_start" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe9c9e25e, "adf_sriov_configure" },
	{ 0x65c14137, "adf_enable_aer" },
	{ 0xb09295b9, "adf_send_admin_init" },
	{ 0x3f1d531c, "adf_init_admin_comms" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0x4430ce13, "qat_crypto_dev_config" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0xf99d347e, "node_states" },
	{ 0x37a0cba, "kfree" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x7aa104c7, "adf_devmgr_pci_to_accel_dev" },
	{ 0x883c958b, "adf_exit_admin_comms" },
	{ 0x28318305, "snprintf" },
	{ 0x25c5ba6e, "pci_iomap" },
	{ 0xb9e9a85c, "adf_exit_arb" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x93527c4c, "pci_save_state" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=intel_qat";

MODULE_ALIAS("pci:v00008086d00000435sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "DEFA5CB5FCB8BB648744A2A");
MODULE_INFO(rhelversion, "8.0");
