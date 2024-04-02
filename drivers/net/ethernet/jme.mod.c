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
	{ 0x372e8e21, "eth_validate_addr" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xfb578fc5, "memset" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x4bb012cf, "netif_device_detach" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0xbd51e506, "__napi_schedule" },
	{ 0x11ab34a4, "napi_schedule_prep" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0x9ed2ac08, "netif_receive_skb" },
	{ 0x7cfd3bbc, "napi_complete_done" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xfcec1a67, "pci_enable_msi" },
	{ 0xc3946e2d, "netif_device_attach" },
	{ 0x696fa89e, "napi_disable" },
	{ 0x88cfc160, "pci_disable_msi" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x4dd53b69, "pci_pme_active" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0xd3ad0c22, "pskb_expand_head" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xc41c945e, "dma_direct_sync_single_for_device" },
	{ 0xff4f5a38, "dma_direct_sync_single_for_cpu" },
	{ 0x45a3a859, "eth_type_trans" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x36b3d463, "dma_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0xd7c584a, "pci_write_config_dword" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0xdce6588d, "register_netdev" },
	{ 0xe57587e0, "device_init_wakeup" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xbac87e5b, "netif_napi_add" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xabd938ef, "netif_rx" },
	{ 0x2842a1d7, "alloc_etherdev_mqs" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x96393c2a, "pci_disable_link_state" },
	{ 0xdd5c21c, "pci_read_config_byte" },
	{ 0x38a7735c, "netdev_info" },
	{ 0x4388bd04, "netif_carrier_off" },
	{ 0xf0c8e802, "netif_carrier_on" },
	{ 0xe914e41e, "strcpy" },
	{ 0xe78bfacd, "crc32_le" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xc2b0d67a, "generic_mii_ioctl" },
	{ 0x2652b43c, "netdev_update_features" },
	{ 0x5792f848, "strlcpy" },
	{ 0xed8c0cf9, "mii_ethtool_get_link_ksettings" },
	{ 0xb6df8e55, "netdev_err" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0x43d0701a, "free_netdev" },
	{ 0xedc03953, "iounmap" },
	{ 0x93f0703, "unregister_netdev" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0x37a0cba, "kfree" },
	{ 0x509f625d, "consume_skb" },
	{ 0x4bf28362, "mii_ethtool_set_link_ksettings" },
	{ 0x27e1a049, "printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mii";

MODULE_ALIAS("pci:v0000197Bd00000250sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000197Bd00000260sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "ABE921E11F7395E1BC4EB3E");
MODULE_INFO(rhelversion, "8.0");
