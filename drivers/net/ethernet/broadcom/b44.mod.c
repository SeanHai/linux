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
	{ 0xcd7a65f8, "ssb_driver_unregister" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x15fa4d9f, "__ssb_driver_register" },
	{ 0xe54d2f44, "ssb_pcihost_register" },
	{ 0xb621d8c9, "netif_schedule_queue" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0x9ed2ac08, "netif_receive_skb" },
	{ 0x45a3a859, "eth_type_trans" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x8ee1b4e5, "__napi_alloc_skb" },
	{ 0x3bfae68b, "__dev_kfree_skb_irq" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x7cfd3bbc, "napi_complete_done" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0xe4697f5a, "phy_ethtool_ksettings_set" },
	{ 0xc3946e2d, "netif_device_attach" },
	{ 0x383706a5, "phy_start" },
	{ 0x318f7969, "add_timer" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x3169a670, "phy_stop" },
	{ 0x696fa89e, "napi_disable" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x4bb012cf, "netif_device_detach" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0xc2b0d67a, "generic_mii_ioctl" },
	{ 0x2b1344fe, "phy_mii_ioctl" },
	{ 0xf9ffe550, "device_set_wakeup_enable" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xff4f5a38, "dma_direct_sync_single_for_cpu" },
	{ 0xc41c945e, "dma_direct_sync_single_for_device" },
	{ 0x4ea25709, "dql_reset" },
	{ 0xbfef472c, "netdev_warn" },
	{ 0xf0c8e802, "netif_carrier_on" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0x36b3d463, "dma_ops" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xe6478472, "_dev_info" },
	{ 0x7a1144e8, "device_set_wakeup_capable" },
	{ 0x1d61bf97, "phy_attached_info" },
	{ 0x1458d3d0, "phy_connect" },
	{ 0xf760ef79, "mdiobus_is_registered_device" },
	{ 0xdb35a6a2, "__mdiobus_register" },
	{ 0x28318305, "snprintf" },
	{ 0x63b49316, "mdiobus_alloc_size" },
	{ 0x4388bd04, "netif_carrier_off" },
	{ 0xdce6588d, "register_netdev" },
	{ 0x27e1a049, "printk" },
	{ 0xc312577b, "ssb_dma_translation" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0x6176c661, "ssb_bus_powerup" },
	{ 0xbac87e5b, "netif_napi_add" },
	{ 0x2842a1d7, "alloc_etherdev_mqs" },
	{ 0x37a0cba, "kfree" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xb9a8986d, "pci_write_config_word" },
	{ 0xf33f3525, "pci_read_config_word" },
	{ 0x5792f848, "strlcpy" },
	{ 0x20f5048a, "pci_set_power_state" },
	{ 0x55087ce6, "mdiobus_free" },
	{ 0x111e391, "mdiobus_unregister" },
	{ 0x65092c1a, "phy_disconnect" },
	{ 0x43d0701a, "free_netdev" },
	{ 0x4604d0c3, "netif_napi_del" },
	{ 0xf31de26a, "ssb_bus_may_powerdown" },
	{ 0xfaaf0711, "ssb_device_disable" },
	{ 0x93f0703, "unregister_netdev" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3f15a3e5, "ssb_clockspeed" },
	{ 0x72fe81f3, "ssb_pcicore_dev_irqvecs_enable" },
	{ 0x73fcf033, "ssb_device_enable" },
	{ 0x4d45bb17, "ssb_device_is_enabled" },
	{ 0xb6df8e55, "netdev_err" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x426b071e, "phy_print_status" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x1805fa7, "phy_ethtool_ksettings_get" },
	{ 0x38a7735c, "netdev_info" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xbd51e506, "__napi_schedule" },
	{ 0x11ab34a4, "napi_schedule_prep" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ssb,mii";

MODULE_ALIAS("ssb:v4243id0806rev*");
MODULE_ALIAS("pci:v000014E4d00004401sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004402sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000170Csv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "4965E176217B4A0913BFBDE");
MODULE_INFO(rhelversion, "8.0");
