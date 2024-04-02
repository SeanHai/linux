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
	{ 0xae2a81e5, "usbnet_set_link_ksettings" },
	{ 0x7871459e, "usbnet_get_link_ksettings" },
	{ 0x3294b5fc, "usbnet_nway_reset" },
	{ 0x1dbd7111, "usbnet_set_msglevel" },
	{ 0xd27d018e, "usbnet_get_msglevel" },
	{ 0xf9f3b0ed, "usbnet_get_stats64" },
	{ 0x7e9f153f, "usbnet_tx_timeout" },
	{ 0x28669e41, "usbnet_change_mtu" },
	{ 0x372e8e21, "eth_validate_addr" },
	{ 0x80a50a34, "usbnet_start_xmit" },
	{ 0x99002040, "usbnet_stop" },
	{ 0xa5cbe32e, "usbnet_open" },
	{ 0xc62a69e, "usbnet_resume" },
	{ 0xa8676eaa, "usbnet_suspend" },
	{ 0x329503a9, "usbnet_disconnect" },
	{ 0x7bda1555, "usbnet_probe" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0xbb7845aa, "mii_nway_restart" },
	{ 0x27e1a049, "printk" },
	{ 0x145fd4a, "usbnet_get_endpoints" },
	{ 0x78bda8c, "usbnet_link_change" },
	{ 0xe78bfacd, "crc32_le" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0xb6df8e55, "netdev_err" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xad605485, "usbnet_write_cmd" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x9a00a2ba, "usbnet_write_cmd_async" },
	{ 0xad9383f8, "usbnet_read_cmd" },
	{ 0xc2b0d67a, "generic_mii_ioctl" },
	{ 0xd36f5fd6, "usbnet_get_drvinfo" },
	{ 0x89539790, "mii_link_ok" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4bea39f, "__dynamic_netdev_dbg" },
	{ 0x89d697d5, "mii_ethtool_gset" },
	{ 0x3b862893, "mii_check_media" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0xfb578fc5, "memset" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0xfad0a7f6, "skb_copy_expand" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet,mii";

MODULE_ALIAS("usb:v07AAp9601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p9601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p6688d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p0268d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p8515d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A47p9601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE6p8101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE6p9700d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p9000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p9620d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p9621d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p9622d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p0269d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p1269d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "24DF6C9DE39145862D49CCB");
MODULE_INFO(rhelversion, "8.0");
