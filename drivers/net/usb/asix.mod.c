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
	{ 0x38a7735c, "netdev_info" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x89d697d5, "mii_ethtool_gset" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x65092c1a, "phy_disconnect" },
	{ 0xc62a69e, "usbnet_resume" },
	{ 0x3169a670, "phy_stop" },
	{ 0x7bda1555, "usbnet_probe" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x78bda8c, "usbnet_link_change" },
	{ 0xdb35a6a2, "__mdiobus_register" },
	{ 0xa26d3f17, "phy_ethtool_nway_reset" },
	{ 0x329503a9, "usbnet_disconnect" },
	{ 0xc2b0d67a, "generic_mii_ioctl" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x99002040, "usbnet_stop" },
	{ 0x73e961e4, "usbnet_update_max_qlen" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x111e391, "mdiobus_unregister" },
	{ 0x4bea39f, "__dynamic_netdev_dbg" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0x426b071e, "phy_print_status" },
	{ 0x3294b5fc, "usbnet_nway_reset" },
	{ 0xae2a81e5, "usbnet_set_link_ksettings" },
	{ 0x383706a5, "phy_start" },
	{ 0xbb7845aa, "mii_nway_restart" },
	{ 0xf9f3b0ed, "usbnet_get_stats64" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x55087ce6, "mdiobus_free" },
	{ 0x145fd4a, "usbnet_get_endpoints" },
	{ 0x7871459e, "usbnet_get_link_ksettings" },
	{ 0x5792f848, "strlcpy" },
	{ 0xd36f5fd6, "usbnet_get_drvinfo" },
	{ 0x5def83f9, "skb_push" },
	{ 0x21e77254, "usbnet_read_cmd_nopm" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xe78bfacd, "crc32_le" },
	{ 0x80a50a34, "usbnet_start_xmit" },
	{ 0xa8676eaa, "usbnet_suspend" },
	{ 0x7045fe5b, "usbnet_get_link" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x2046283, "usbnet_write_cmd_nopm" },
	{ 0x85e8b5d2, "phy_ethtool_get_link_ksettings" },
	{ 0xfad0a7f6, "skb_copy_expand" },
	{ 0xad9383f8, "usbnet_read_cmd" },
	{ 0x12a38747, "usleep_range" },
	{ 0x7e9f153f, "usbnet_tx_timeout" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0xdbcdb48d, "genphy_resume" },
	{ 0xdad2fe11, "usbnet_skb_return" },
	{ 0xa5cbe32e, "usbnet_open" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3b862893, "mii_check_media" },
	{ 0xd27d018e, "usbnet_get_msglevel" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb6df8e55, "netdev_err" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xbfef472c, "netdev_warn" },
	{ 0xf533b14b, "usbnet_unlink_rx_urbs" },
	{ 0x372e8e21, "eth_validate_addr" },
	{ 0x6f4a5ead, "phy_ethtool_set_link_ksettings" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9a00a2ba, "usbnet_write_cmd_async" },
	{ 0x28669e41, "usbnet_change_mtu" },
	{ 0x1458d3d0, "phy_connect" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0x2b1344fe, "phy_mii_ioctl" },
	{ 0x28318305, "snprintf" },
	{ 0x89539790, "mii_link_ok" },
	{ 0xb0e602eb, "memmove" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0xc826b84c, "eth_mac_addr" },
	{ 0xad605485, "usbnet_write_cmd" },
	{ 0x1dbd7111, "usbnet_set_msglevel" },
	{ 0x63b49316, "mdiobus_alloc_size" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mii,usbnet";

MODULE_ALIAS("usb:v077Bp2226d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p1040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p1A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p1720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p420Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp90FFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp0114d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0557p2009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p003Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p006Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6189p182Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0056d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p061Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1189p0893d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1631p6200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F1p3008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp7203d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p772Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p7720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p1780d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p0160d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1557p7720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p1A02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1737p0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0930d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp5055d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp1402d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p772Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14EApAB11d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0pA877d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p7E2Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p172Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp20F9d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "79EB3E1D151F080AA5B0A3A");
MODULE_INFO(rhelversion, "8.0");
