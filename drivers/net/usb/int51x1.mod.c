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
	{ 0xf9f3b0ed, "usbnet_get_stats64" },
	{ 0x7e9f153f, "usbnet_tx_timeout" },
	{ 0x28669e41, "usbnet_change_mtu" },
	{ 0x372e8e21, "eth_validate_addr" },
	{ 0xc826b84c, "eth_mac_addr" },
	{ 0x80a50a34, "usbnet_start_xmit" },
	{ 0x99002040, "usbnet_stop" },
	{ 0xa5cbe32e, "usbnet_open" },
	{ 0xc62a69e, "usbnet_resume" },
	{ 0xa8676eaa, "usbnet_suspend" },
	{ 0x329503a9, "usbnet_disconnect" },
	{ 0x7bda1555, "usbnet_probe" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0xb6df8e55, "netdev_err" },
	{ 0x58f85378, "__pskb_pull_tail" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0x145fd4a, "usbnet_get_endpoints" },
	{ 0xce9d2cd6, "usbnet_get_ethernet_addr" },
	{ 0x38a7735c, "netdev_info" },
	{ 0x4bea39f, "__dynamic_netdev_dbg" },
	{ 0x9a00a2ba, "usbnet_write_cmd_async" },
	{ 0xfb578fc5, "memset" },
	{ 0xb0e602eb, "memmove" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0xfad0a7f6, "skb_copy_expand" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet";

MODULE_ALIAS("usb:v09E1p5121d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "8770B7C2A21740EB80A8FE4");
MODULE_INFO(rhelversion, "8.0");
