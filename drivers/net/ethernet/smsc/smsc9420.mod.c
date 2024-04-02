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
	{ 0x8f648a94, "param_ops_uint" },
	{ 0x6f4a5ead, "phy_ethtool_set_link_ksettings" },
	{ 0x85e8b5d2, "phy_ethtool_get_link_ksettings" },
	{ 0x9efab5ee, "ethtool_op_get_ts_info" },
	{ 0x3fa64d02, "ethtool_op_get_link" },
	{ 0xa26d3f17, "phy_ethtool_nway_reset" },
	{ 0x372e8e21, "eth_validate_addr" },
	{ 0xc826b84c, "eth_mac_addr" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x65092c1a, "phy_disconnect" },
	{ 0x3169a670, "phy_stop" },
	{ 0x4bb012cf, "netif_device_detach" },
	{ 0x696fa89e, "napi_disable" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xee7915ff, "pci_choose_state" },
	{ 0x93527c4c, "pci_save_state" },
	{ 0xc3946e2d, "netif_device_attach" },
	{ 0xf062ac06, "pci_enable_wake" },
	{ 0x56898d73, "pci_restore_state" },
	{ 0x20f5048a, "pci_set_power_state" },
	{ 0x55087ce6, "mdiobus_free" },
	{ 0x111e391, "mdiobus_unregister" },
	{ 0x383706a5, "phy_start" },
	{ 0x1d61bf97, "phy_attached_info" },
	{ 0x1458d3d0, "phy_connect" },
	{ 0x98cb7f38, "mdiobus_get_phy" },
	{ 0xdb35a6a2, "__mdiobus_register" },
	{ 0x28318305, "snprintf" },
	{ 0x63b49316, "mdiobus_alloc_size" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x4388bd04, "netif_carrier_off" },
	{ 0x7cfd3bbc, "napi_complete_done" },
	{ 0x9ed2ac08, "netif_receive_skb" },
	{ 0x45a3a859, "eth_type_trans" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x37a0cba, "kfree" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x433ee4cd, "skb_tstamp_tx" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0xe548f5fe, "skb_clone_tx_timestamp" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0x36b3d463, "dma_ops" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xe6478472, "_dev_info" },
	{ 0xdce6588d, "register_netdev" },
	{ 0xbac87e5b, "netif_napi_add" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0xb6df8e55, "netdev_err" },
	{ 0x2842a1d7, "alloc_etherdev_mqs" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x27e1a049, "printk" },
	{ 0xe78bfacd, "crc32_le" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x2b1344fe, "phy_mii_ioctl" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x5792f848, "strlcpy" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0x43d0701a, "free_netdev" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0x93f0703, "unregister_netdev" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf1ac43f5, "mdiobus_read" },
	{ 0x38a7735c, "netdev_info" },
	{ 0x4bea39f, "__dynamic_netdev_dbg" },
	{ 0xbfef472c, "netdev_warn" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbd51e506, "__napi_schedule" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0x11ab34a4, "napi_schedule_prep" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xe484e35f, "ioread32" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001055d0000E420sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "413A5B406AEAD777F67E564");
MODULE_INFO(rhelversion, "8.0");
