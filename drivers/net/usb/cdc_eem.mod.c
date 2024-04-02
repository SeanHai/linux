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
	{ 0xc62a69e, "usbnet_resume" },
	{ 0xa8676eaa, "usbnet_suspend" },
	{ 0x329503a9, "usbnet_disconnect" },
	{ 0x7bda1555, "usbnet_probe" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0x145fd4a, "usbnet_get_endpoints" },
	{ 0x4bea39f, "__dynamic_netdev_dbg" },
	{ 0xf3c3589f, "usbnet_device_suggests_idle" },
	{ 0xbfef472c, "netdev_warn" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0xdad2fe11, "usbnet_skb_return" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0x8c24bd72, "skb_clone" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0x509f625d, "consume_skb" },
	{ 0xb0e602eb, "memmove" },
	{ 0x5def83f9, "skb_push" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0xe78bfacd, "crc32_le" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0xfad0a7f6, "skb_copy_expand" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet";

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Cip07in*");

MODULE_INFO(srcversion, "7B36069B1D7AB812D12E939");
MODULE_INFO(rhelversion, "8.0");
