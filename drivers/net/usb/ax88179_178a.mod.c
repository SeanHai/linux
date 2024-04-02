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
	{ 0x3294b5fc, "usbnet_nway_reset" },
	{ 0x1dbd7111, "usbnet_set_msglevel" },
	{ 0xd27d018e, "usbnet_get_msglevel" },
	{ 0xf9f3b0ed, "usbnet_get_stats64" },
	{ 0x7e9f153f, "usbnet_tx_timeout" },
	{ 0x372e8e21, "eth_validate_addr" },
	{ 0x80a50a34, "usbnet_start_xmit" },
	{ 0x99002040, "usbnet_stop" },
	{ 0xa5cbe32e, "usbnet_open" },
	{ 0x329503a9, "usbnet_disconnect" },
	{ 0x7bda1555, "usbnet_probe" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0xf0c8e802, "netif_carrier_on" },
	{ 0x89d697d5, "mii_ethtool_gset" },
	{ 0x145fd4a, "usbnet_get_endpoints" },
	{ 0xbb7845aa, "mii_nway_restart" },
	{ 0xe78bfacd, "crc32_le" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x9a00a2ba, "usbnet_write_cmd_async" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x38a7735c, "netdev_info" },
	{ 0xa8676eaa, "usbnet_suspend" },
	{ 0xc62a69e, "usbnet_resume" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x78bda8c, "usbnet_link_change" },
	{ 0x73e961e4, "usbnet_update_max_qlen" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2046283, "usbnet_write_cmd_nopm" },
	{ 0xad605485, "usbnet_write_cmd" },
	{ 0xbfef472c, "netdev_warn" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x21e77254, "usbnet_read_cmd_nopm" },
	{ 0xad9383f8, "usbnet_read_cmd" },
	{ 0xc2b0d67a, "generic_mii_ioctl" },
	{ 0xed8c0cf9, "mii_ethtool_get_link_ksettings" },
	{ 0x4bf28362, "mii_ethtool_set_link_ksettings" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0xdad2fe11, "usbnet_skb_return" },
	{ 0x8c24bd72, "skb_clone" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0x5def83f9, "skb_push" },
	{ 0xd3ad0c22, "pskb_expand_head" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe3fffae9, "__x86_indirect_thunk_rbp" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet,mii";

MODULE_ALIAS("usb:v0B95p1790d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p178Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p3610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p4A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0072d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8pA100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp304Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp0128d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "7446805714F797CC7FEA6BC");
MODULE_INFO(rhelversion, "8.0");
