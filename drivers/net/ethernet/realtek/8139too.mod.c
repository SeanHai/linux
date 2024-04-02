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
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x372e8e21, "eth_validate_addr" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xc2b0d67a, "generic_mii_ioctl" },
	{ 0x4bf28362, "mii_ethtool_set_link_ksettings" },
	{ 0xed8c0cf9, "mii_ethtool_get_link_ksettings" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x7cfd3bbc, "napi_complete_done" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9ed2ac08, "netif_receive_skb" },
	{ 0x45a3a859, "eth_type_trans" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x69acdf38, "memcpy" },
	{ 0x8ee1b4e5, "__napi_alloc_skb" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xc3946e2d, "netif_device_attach" },
	{ 0x56898d73, "pci_restore_state" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x3b862893, "mii_check_media" },
	{ 0xb9a8986d, "pci_write_config_word" },
	{ 0xf33f3525, "pci_read_config_word" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0xb6df8e55, "netdev_err" },
	{ 0xbd51e506, "__napi_schedule" },
	{ 0x11ab34a4, "napi_schedule_prep" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xe6478472, "_dev_info" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x25c5ba6e, "pci_iomap" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0x38a7735c, "netdev_info" },
	{ 0xdce6588d, "register_netdev" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0xbac87e5b, "netif_napi_add" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x2842a1d7, "alloc_etherdev_mqs" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x696fa89e, "napi_disable" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0x62da6521, "skb_copy_and_csum_dev" },
	{ 0xad995dac, "netdev_stats_to_stats64" },
	{ 0x5792f848, "strlcpy" },
	{ 0xbb7845aa, "mii_nway_restart" },
	{ 0x89539790, "mii_link_ok" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0x93f0703, "unregister_netdev" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0x27e1a049, "printk" },
	{ 0x43d0701a, "free_netdev" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0xc94fb8eb, "pci_iounmap" },
	{ 0x20f5048a, "pci_set_power_state" },
	{ 0x4bb012cf, "netif_device_detach" },
	{ 0x93527c4c, "pci_save_state" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe78bfacd, "crc32_le" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x4bea39f, "__dynamic_netdev_dbg" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0xc5534d64, "ioread16" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe484e35f, "ioread32" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf10de535, "ioread8" },
	{ 0x848d372e, "iowrite8" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mii";

MODULE_ALIAS("pci:v000010ECd00008139sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008138sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001113d00001211sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001500d00001360sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00004033d00001360sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00001300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00001340sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013D1d0000AB06sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001259d0000A117sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001259d0000A11Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014EAd0000AB06sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014EAd0000AB07sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011DBd00001234sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00009130sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000002ACd00001012sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000018Ad00000106sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000126Cd00001211sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001743d00008139sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000021Bd00008139sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008129sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v*d00008139sv000010ECsd00008139bc*sc*i*");
MODULE_ALIAS("pci:v*d00008139sv00001186sd00001300bc*sc*i*");
MODULE_ALIAS("pci:v*d00008139sv000013D1sd0000AB06bc*sc*i*");

MODULE_INFO(srcversion, "3484D660EE0619AE90E4AAC");
MODULE_INFO(rhelversion, "8.0");
