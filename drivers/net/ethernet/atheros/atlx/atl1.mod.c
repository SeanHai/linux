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
	{ 0x3fa64d02, "ethtool_op_get_link" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x372e8e21, "eth_validate_addr" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x67d084fd, "___pskb_trim" },
	{ 0xd3ad0c22, "pskb_expand_head" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0x20f5048a, "pci_set_power_state" },
	{ 0x7d34246b, "pci_wake_from_d3" },
	{ 0x4bb012cf, "netif_device_detach" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0x696fa89e, "napi_disable" },
	{ 0xc3946e2d, "netif_device_attach" },
	{ 0x88cfc160, "pci_disable_msi" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xfcec1a67, "pci_enable_msi" },
	{ 0x509f625d, "consume_skb" },
	{ 0x7cfd3bbc, "napi_complete_done" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x3bfae68b, "__dev_kfree_skb_irq" },
	{ 0x9ed2ac08, "netif_receive_skb" },
	{ 0x45a3a859, "eth_type_trans" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbd51e506, "__napi_schedule" },
	{ 0x11ab34a4, "napi_schedule_prep" },
	{ 0xe637fa94, "dev_printk" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0x36b3d463, "dma_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x37a0cba, "kfree" },
	{ 0xfb578fc5, "memset" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x2ae2fdba, "dev_notice" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xdce6588d, "register_netdev" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xbac87e5b, "netif_napi_add" },
	{ 0x25c5ba6e, "pci_iomap" },
	{ 0x2842a1d7, "alloc_etherdev_mqs" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x848d372e, "iowrite8" },
	{ 0xe78bfacd, "crc32_le" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc5534d64, "ioread16" },
	{ 0xc2b0d67a, "generic_mii_ioctl" },
	{ 0x5792f848, "strlcpy" },
	{ 0xf9ffe550, "device_set_wakeup_enable" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0x43d0701a, "free_netdev" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0xc94fb8eb, "pci_iounmap" },
	{ 0x93f0703, "unregister_netdev" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0xf0c8e802, "netif_carrier_on" },
	{ 0xe6478472, "_dev_info" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4388bd04, "netif_carrier_off" },
	{ 0x121da905, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe484e35f, "ioread32" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mii";

MODULE_ALIAS("pci:v00001969d00001048sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "FD91448DD840471833F26C0");
MODULE_INFO(rhelversion, "8.0");
