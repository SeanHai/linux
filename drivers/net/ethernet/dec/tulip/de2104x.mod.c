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
	{ 0xc826b84c, "eth_mac_addr" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xc41c945e, "dma_direct_sync_single_for_device" },
	{ 0xff4f5a38, "dma_direct_sync_single_for_cpu" },
	{ 0x3bfae68b, "__dev_kfree_skb_irq" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xb9a8986d, "pci_write_config_word" },
	{ 0xf33f3525, "pci_read_config_word" },
	{ 0xabd938ef, "netif_rx" },
	{ 0x45a3a859, "eth_type_trans" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4bb012cf, "netif_device_detach" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x318f7969, "add_timer" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0xb6df8e55, "netdev_err" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc3946e2d, "netif_device_attach" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xfb578fc5, "memset" },
	{ 0xe78bfacd, "crc32_le" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0x4bea39f, "__dynamic_netdev_dbg" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0x36b3d463, "dma_ops" },
	{ 0x509f625d, "consume_skb" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xf0c8e802, "netif_carrier_on" },
	{ 0x93f0703, "unregister_netdev" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x37a0cba, "kfree" },
	{ 0xdce6588d, "register_netdev" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0x43d0701a, "free_netdev" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x4388bd04, "netif_carrier_off" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x2842a1d7, "alloc_etherdev_mqs" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd7c584a, "pci_write_config_dword" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0x27e1a049, "printk" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x448eac3e, "kmemdup" },
	{ 0x5792f848, "strlcpy" },
	{ 0xbfef472c, "netdev_warn" },
	{ 0x38a7735c, "netdev_info" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xe484e35f, "ioread32" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001011d00000002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001011d00000014sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "50E430E37BECD2C50E0A00E");
MODULE_INFO(rhelversion, "8.0");
