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
	{ 0x6dc87645, "param_array_ops" },
	{ 0x372e8e21, "eth_validate_addr" },
	{ 0xc826b84c, "eth_mac_addr" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x7cfd3bbc, "napi_complete_done" },
	{ 0x3bfae68b, "__dev_kfree_skb_irq" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x4bf28362, "mii_ethtool_set_link_ksettings" },
	{ 0xed8c0cf9, "mii_ethtool_get_link_ksettings" },
	{ 0xbd51e506, "__napi_schedule" },
	{ 0x11ab34a4, "napi_schedule_prep" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x509f625d, "consume_skb" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0xc41c945e, "dma_direct_sync_single_for_device" },
	{ 0xff4f5a38, "dma_direct_sync_single_for_cpu" },
	{ 0xb6df8e55, "netdev_err" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0x9ed2ac08, "netif_receive_skb" },
	{ 0x45a3a859, "eth_type_trans" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x696fa89e, "napi_disable" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xeb9faa8b, "__skb_pad" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x36b3d463, "dma_ops" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xdce6588d, "register_netdev" },
	{ 0xbac87e5b, "netif_napi_add" },
	{ 0xe6478472, "_dev_info" },
	{ 0x27e1a049, "printk" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x25c5ba6e, "pci_iomap" },
	{ 0x2842a1d7, "alloc_etherdev_mqs" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x318f7969, "add_timer" },
	{ 0x38a7735c, "netdev_info" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xc2b0d67a, "generic_mii_ioctl" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x5792f848, "strlcpy" },
	{ 0xbb7845aa, "mii_nway_restart" },
	{ 0x89539790, "mii_link_ok" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0xbfef472c, "netdev_warn" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0x43d0701a, "free_netdev" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0xc94fb8eb, "pci_iounmap" },
	{ 0x93f0703, "unregister_netdev" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0xf10de535, "ioread8" },
	{ 0xc5534d64, "ioread16" },
	{ 0x4bea39f, "__dynamic_netdev_dbg" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0xe484e35f, "ioread32" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mii";

MODULE_ALIAS("pci:v000010B8d00000005sv00001092sd00000AB4bc*sc*i*");
MODULE_ALIAS("pci:v000010B8d00000005sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B8d00000006sv*sd*bc02sc00i*");

MODULE_INFO(srcversion, "73EF20D98BD26A5FEC2CB01");
MODULE_INFO(rhelversion, "8.0");
