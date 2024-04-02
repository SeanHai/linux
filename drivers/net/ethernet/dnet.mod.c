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
	{ 0x6f4a5ead, "phy_ethtool_set_link_ksettings" },
	{ 0x85e8b5d2, "phy_ethtool_get_link_ksettings" },
	{ 0x9efab5ee, "ethtool_op_get_ts_info" },
	{ 0x3fa64d02, "ethtool_op_get_link" },
	{ 0x372e8e21, "eth_validate_addr" },
	{ 0xc826b84c, "eth_mac_addr" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x1d61bf97, "phy_attached_info" },
	{ 0xe6478472, "_dev_info" },
	{ 0x1458d3d0, "phy_connect" },
	{ 0xa37242b5, "phy_find_first" },
	{ 0xdb35a6a2, "__mdiobus_register" },
	{ 0x28318305, "snprintf" },
	{ 0x63b49316, "mdiobus_alloc_size" },
	{ 0xd4a6e695, "phy_register_fixup_for_uid" },
	{ 0xdce6588d, "register_netdev" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xbac87e5b, "netif_napi_add" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x8d4abd8, "devm_ioremap_resource" },
	{ 0x996c611b, "platform_get_resource" },
	{ 0x2842a1d7, "alloc_etherdev_mqs" },
	{ 0x874ce5f3, "platform_get_irq" },
	{ 0x383706a5, "phy_start" },
	{ 0x259a6d0a, "phy_start_aneg" },
	{ 0x4388bd04, "netif_carrier_off" },
	{ 0x3169a670, "phy_stop" },
	{ 0x696fa89e, "napi_disable" },
	{ 0xf9a482f9, "msleep" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0xbd51e506, "__napi_schedule" },
	{ 0x11ab34a4, "napi_schedule_prep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x433ee4cd, "skb_tstamp_tx" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x509f625d, "consume_skb" },
	{ 0xe548f5fe, "skb_clone_tx_timestamp" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2b1344fe, "phy_mii_ioctl" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x27e1a049, "printk" },
	{ 0x7cfd3bbc, "napi_complete_done" },
	{ 0x9ed2ac08, "netif_receive_skb" },
	{ 0x45a3a859, "eth_type_trans" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0x5792f848, "strlcpy" },
	{ 0x5964e65e, "mdiobus_write" },
	{ 0x43d0701a, "free_netdev" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x93f0703, "unregister_netdev" },
	{ 0x55087ce6, "mdiobus_free" },
	{ 0x111e391, "mdiobus_unregister" },
	{ 0x65092c1a, "phy_disconnect" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "837E791CB27A79A70F39A20");
MODULE_INFO(rhelversion, "8.0");
