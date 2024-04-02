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
	{ 0xf9c388e5, "dev_err" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0xc3946e2d, "netif_device_attach" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x4bb012cf, "netif_device_detach" },
	{ 0x318f7969, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x848d372e, "iowrite8" },
	{ 0x4bf28362, "mii_ethtool_set_link_ksettings" },
	{ 0xed8c0cf9, "mii_ethtool_get_link_ksettings" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0xc41c945e, "dma_direct_sync_single_for_device" },
	{ 0xff4f5a38, "dma_direct_sync_single_for_cpu" },
	{ 0x3bfae68b, "__dev_kfree_skb_irq" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xabd938ef, "netif_rx" },
	{ 0x45a3a859, "eth_type_trans" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4bea39f, "__dynamic_netdev_dbg" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0x509f625d, "consume_skb" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x36b3d463, "dma_ops" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4388bd04, "netif_carrier_off" },
	{ 0xf0c8e802, "netif_carrier_on" },
	{ 0x27e1a049, "printk" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xe6478472, "_dev_info" },
	{ 0xdce6588d, "register_netdev" },
	{ 0x25c5ba6e, "pci_iomap" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0x2842a1d7, "alloc_etherdev_mqs" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x5792f848, "strlcpy" },
	{ 0xbb7845aa, "mii_nway_restart" },
	{ 0x89539790, "mii_link_ok" },
	{ 0x43d0701a, "free_netdev" },
	{ 0xc94fb8eb, "pci_iounmap" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0x93f0703, "unregister_netdev" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe78bfacd, "crc32_le" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0xe484e35f, "ioread32" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x58388972, "pv_lock_ops" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mii";

MODULE_ALIAS("pci:v00001050d00000840sv*sd00008153bc*sc*i*");
MODULE_ALIAS("pci:v00001050d00000840sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011F6d00002011sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "994972AE50C8A3A2E3CF030");
MODULE_INFO(rhelversion, "8.0");
