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
	{ 0x3fa64d02, "ethtool_op_get_link" },
	{ 0x372e8e21, "eth_validate_addr" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x349cba85, "strchr" },
	{ 0xad27f361, "__warn_printk" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xb621d8c9, "netif_schedule_queue" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0xb9a8986d, "pci_write_config_word" },
	{ 0xf33f3525, "pci_read_config_word" },
	{ 0xbd51e506, "__napi_schedule" },
	{ 0x3bfae68b, "__dev_kfree_skb_irq" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7cfd3bbc, "napi_complete_done" },
	{ 0x7e6f0d64, "napi_gro_receive" },
	{ 0x45a3a859, "eth_type_trans" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x8ee1b4e5, "__napi_alloc_skb" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x3b862893, "mii_check_media" },
	{ 0x56898d73, "pci_restore_state" },
	{ 0xc3946e2d, "netif_device_attach" },
	{ 0xb6df8e55, "netdev_err" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x1c6ec503, "__napi_schedule_irqoff" },
	{ 0x11ab34a4, "napi_schedule_prep" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0xbfef472c, "netdev_warn" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x4388bd04, "netif_carrier_off" },
	{ 0x696fa89e, "napi_disable" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0x36b3d463, "dma_ops" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x27e1a049, "printk" },
	{ 0xe6478472, "_dev_info" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x38a7735c, "netdev_info" },
	{ 0xdce6588d, "register_netdev" },
	{ 0xbac87e5b, "netif_napi_add" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0x835648b8, "pci_set_mwi" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x2842a1d7, "alloc_etherdev_mqs" },
	{ 0x4ea25709, "dql_reset" },
	{ 0x58f85378, "__pskb_pull_tail" },
	{ 0x4bea39f, "__dynamic_netdev_dbg" },
	{ 0xc2b0d67a, "generic_mii_ioctl" },
	{ 0x5792f848, "strlcpy" },
	{ 0xbb7845aa, "mii_nway_restart" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0xed8c0cf9, "mii_ethtool_get_link_ksettings" },
	{ 0x4bf28362, "mii_ethtool_set_link_ksettings" },
	{ 0x43d0701a, "free_netdev" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xac5e6228, "pci_clear_mwi" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x93f0703, "unregister_netdev" },
	{ 0x20f5048a, "pci_set_power_state" },
	{ 0xf062ac06, "pci_enable_wake" },
	{ 0xee7915ff, "pci_choose_state" },
	{ 0x93527c4c, "pci_save_state" },
	{ 0x4bb012cf, "netif_device_detach" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe78bfacd, "crc32_le" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mii";

MODULE_ALIAS("pci:v000010ECd00008139sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00000357d0000000Asv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "65ED0929D6AFBD19291B038");
MODULE_INFO(rhelversion, "8.0");
