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
	{ 0x6f4a5ead, "phy_ethtool_set_link_ksettings" },
	{ 0x85e8b5d2, "phy_ethtool_get_link_ksettings" },
	{ 0x9efab5ee, "ethtool_op_get_ts_info" },
	{ 0x3fa64d02, "ethtool_op_get_link" },
	{ 0xa26d3f17, "phy_ethtool_nway_reset" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0xa37242b5, "phy_find_first" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xa9d9c835, "devm_clk_get" },
	{ 0xdce6588d, "register_netdev" },
	{ 0xbac87e5b, "netif_napi_add" },
	{ 0x2c267500, "phy_connect_direct" },
	{ 0xdb35a6a2, "__mdiobus_register" },
	{ 0x28318305, "snprintf" },
	{ 0x63b49316, "mdiobus_alloc_size" },
	{ 0xf0191bff, "dmam_alloc_attrs" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0xa1a888e1, "devm_ioremap_nocache" },
	{ 0xeb411599, "__devm_request_region" },
	{ 0x8e82828e, "iomem_resource" },
	{ 0x996c611b, "platform_get_resource" },
	{ 0x2842a1d7, "alloc_etherdev_mqs" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x12a38747, "usleep_range" },
	{ 0xbd51e506, "__napi_schedule" },
	{ 0x11ab34a4, "napi_schedule_prep" },
	{ 0xe6478472, "_dev_info" },
	{ 0x383706a5, "phy_start" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe78bfacd, "crc32_le" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x7cfd3bbc, "napi_complete_done" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x9ed2ac08, "netif_receive_skb" },
	{ 0x45a3a859, "eth_type_trans" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xeb9faa8b, "__skb_pad" },
	{ 0x433ee4cd, "skb_tstamp_tx" },
	{ 0x509f625d, "consume_skb" },
	{ 0xe548f5fe, "skb_clone_tx_timestamp" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x69acdf38, "memcpy" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x426b071e, "phy_print_status" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe419bc99, "iowrite32be" },
	{ 0x3169a670, "phy_stop" },
	{ 0x696fa89e, "napi_disable" },
	{ 0xe484e35f, "ioread32" },
	{ 0xfdb9b629, "ioread32be" },
	{ 0x2b1344fe, "phy_mii_ioctl" },
	{ 0x98cb7f38, "mdiobus_get_phy" },
	{ 0x43d0701a, "free_netdev" },
	{ 0x93f0703, "unregister_netdev" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x55087ce6, "mdiobus_free" },
	{ 0x111e391, "mdiobus_unregister" },
	{ 0x65092c1a, "phy_disconnect" },
	{ 0x4604d0c3, "netif_napi_del" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Copencores,ethoc");
MODULE_ALIAS("of:N*T*Copencores,ethocC*");

MODULE_INFO(srcversion, "569DD63E35EFEF47346B357");
MODULE_INFO(rhelversion, "8.0");
