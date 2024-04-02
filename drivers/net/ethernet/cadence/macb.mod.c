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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x38a7735c, "netdev_info" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x9efab5ee, "ethtool_op_get_ts_info" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x65092c1a, "phy_disconnect" },
	{ 0xe548f5fe, "skb_clone_tx_timestamp" },
	{ 0x815588a6, "clk_enable" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x3169a670, "phy_stop" },
	{ 0x696fa89e, "napi_disable" },
	{ 0x230a7694, "mdiobus_scan" },
	{ 0x11ab34a4, "napi_schedule_prep" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0xdb35a6a2, "__mdiobus_register" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xf0c8e802, "netif_carrier_on" },
	{ 0xba5b7eb9, "gpio_to_desc" },
	{ 0x4388bd04, "netif_carrier_off" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x8d4abd8, "devm_ioremap_resource" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x111e391, "mdiobus_unregister" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4bea39f, "__dynamic_netdev_dbg" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0x630630ad, "ptp_clock_unregister" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x383706a5, "phy_start" },
	{ 0xa37242b5, "phy_find_first" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0xcaff94e5, "netif_tx_stop_all_queues" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x27e1a049, "printk" },
	{ 0x3fa64d02, "ethtool_op_get_link" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x55087ce6, "mdiobus_free" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x43d0701a, "free_netdev" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xdce6588d, "register_netdev" },
	{ 0x9ed2ac08, "netif_receive_skb" },
	{ 0x365acda7, "set_normalized_timespec64" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x996c611b, "platform_get_resource" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xbac87e5b, "netif_napi_add" },
	{ 0xb8c8d6d0, "ptp_clock_register" },
	{ 0xe57587e0, "device_init_wakeup" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x85e8b5d2, "phy_ethtool_get_link_ksettings" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0xc3946e2d, "netif_device_attach" },
	{ 0x43f81957, "clk_round_rate" },
	{ 0xe6478472, "_dev_info" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x4bb012cf, "netif_device_detach" },
	{ 0x12a38747, "usleep_range" },
	{ 0xbd51e506, "__napi_schedule" },
	{ 0x2c267500, "phy_connect_direct" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x7cfd3bbc, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x45a3a859, "eth_type_trans" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xd3ad0c22, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb6df8e55, "netdev_err" },
	{ 0xa9d9c835, "devm_clk_get" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xbfef472c, "netdev_warn" },
	{ 0x372e8e21, "eth_validate_addr" },
	{ 0x6f4a5ead, "phy_ethtool_set_link_ksettings" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x1d61bf97, "phy_attached_info" },
	{ 0xa848e02c, "gpiod_to_irq" },
	{ 0xf7b182b1, "ptp_clock_index" },
	{ 0x93f0703, "unregister_netdev" },
	{ 0x2b1344fe, "phy_mii_ioctl" },
	{ 0x121da905, "queue_work_on" },
	{ 0x28318305, "snprintf" },
	{ 0x874ce5f3, "platform_get_irq" },
	{ 0x509f625d, "consume_skb" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0x433ee4cd, "skb_tstamp_tx" },
	{ 0xe3fffae9, "__x86_indirect_thunk_rbp" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0xc826b84c, "eth_mac_addr" },
	{ 0x1a8c3ad8, "devm_gpio_request" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x25d35c2d, "devm_request_threaded_irq" },
	{ 0x36b3d463, "dma_ops" },
	{ 0xf9ffe550, "device_set_wakeup_enable" },
	{ 0x2842a1d7, "alloc_etherdev_mqs" },
	{ 0x63b49316, "mdiobus_alloc_size" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "429FE680DB478CA95B1710E");
MODULE_INFO(rhelversion, "8.0");
