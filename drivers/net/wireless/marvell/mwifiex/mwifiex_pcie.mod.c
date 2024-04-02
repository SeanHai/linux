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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x63c8b394, "pci_release_region" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xfa5223cc, "del_timer" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0x150b6997, "mwifiex_cancel_hs" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0x862fba34, "pci_disable_msix" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xff4f5a38, "dma_direct_sync_single_for_cpu" },
	{ 0xc048555f, "mwifiex_disable_auto_ds" },
	{ 0x5d3b02cd, "pci_try_reset_function" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0x8858cbe7, "mwifiex_write_data_complete" },
	{ 0x487e9521, "mwifiex_process_sleep_confirm_resp" },
	{ 0x999e8297, "vfree" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x91715312, "sprintf" },
	{ 0xaef4e0f9, "mwifiex_queue_main_work" },
	{ 0xe531df6e, "mwifiex_prepare_fw_dump_info" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x98b8f0a5, "_mwifiex_dbg" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x38c84b56, "mwifiex_add_card" },
	{ 0xf10de535, "ioread8" },
	{ 0xc94fb8eb, "pci_iounmap" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x27e1a049, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x5def83f9, "skb_push" },
	{ 0x7226a60b, "mwifiex_shutdown_sw" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0xfcec1a67, "pci_enable_msi" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x6e4edad6, "pci_clear_master" },
	{ 0x31bd9748, "mwifiex_alloc_dma_align_buf" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xea4805c2, "skb_queue_tail" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x12a38747, "usleep_range" },
	{ 0x21f51fb1, "pci_enable_msix_range" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x88cfc160, "pci_disable_msi" },
	{ 0xe449d554, "mwifiex_reinit_sw" },
	{ 0xc41c945e, "dma_direct_sync_single_for_device" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x8130d609, "mwifiex_handle_rx_packet" },
	{ 0xcd828fc9, "mwifiex_deauthenticate_all" },
	{ 0xb37a8230, "mwifiex_remove_card" },
	{ 0xdf6cd3d2, "mwifiex_enable_hs" },
	{ 0x82cef748, "mwifiex_upload_device_dump" },
	{ 0x121da905, "queue_work_on" },
	{ 0xb0e602eb, "memmove" },
	{ 0x25c5ba6e, "pci_iomap" },
	{ 0x667ade5c, "mwifiex_drv_info_dump" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x4b15b07a, "mwifiex_init_shutdown_fw" },
	{ 0x18c475b, "pci_request_region" },
	{ 0x36b3d463, "dma_ops" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mwifiex";

MODULE_ALIAS("pci:v000011ABd00002B30sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002B38sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002B42sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001B4Bd00002B42sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "8683768EC3130DD0943C0A7");
MODULE_INFO(rhelversion, "8.0");
