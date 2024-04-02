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
	{ 0x372e8e21, "eth_validate_addr" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xabd938ef, "netif_rx" },
	{ 0x45a3a859, "eth_type_trans" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0xee7915ff, "pci_choose_state" },
	{ 0x93527c4c, "pci_save_state" },
	{ 0x4bb012cf, "netif_device_detach" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xc3946e2d, "netif_device_attach" },
	{ 0xf062ac06, "pci_enable_wake" },
	{ 0x56898d73, "pci_restore_state" },
	{ 0x20f5048a, "pci_set_power_state" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0xfb578fc5, "memset" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xdce6588d, "register_netdev" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x9166fada, "strncpy" },
	{ 0xd7c584a, "pci_write_config_dword" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x2842a1d7, "alloc_etherdev_mqs" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0xc5534d64, "ioread16" },
	{ 0xe78bfacd, "crc32_le" },
	{ 0x37a0cba, "kfree" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0x69acdf38, "memcpy" },
	{ 0x5792f848, "strlcpy" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x27e1a049, "printk" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0xf0c8e802, "netif_carrier_on" },
	{ 0x4388bd04, "netif_carrier_off" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0x43d0701a, "free_netdev" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x93f0703, "unregister_netdev" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0x88cfc160, "pci_disable_msi" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x848d372e, "iowrite8" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb9a8986d, "pci_write_config_word" },
	{ 0xf33f3525, "pci_read_config_word" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xfcec1a67, "pci_enable_msi" },
	{ 0x121da905, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe484e35f, "ioread32" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001969d00002048sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "0BC85376C90551A32422C7D");
MODULE_INFO(rhelversion, "8.0");
