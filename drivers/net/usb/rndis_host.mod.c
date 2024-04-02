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
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc62a69e, "usbnet_resume" },
	{ 0x7bda1555, "usbnet_probe" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xbb325202, "usbnet_cdc_unbind" },
	{ 0x329503a9, "usbnet_disconnect" },
	{ 0x8c24bd72, "skb_clone" },
	{ 0x8489625a, "usbnet_generic_cdc_bind" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0x99002040, "usbnet_stop" },
	{ 0x4bea39f, "__dynamic_netdev_dbg" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xf9f3b0ed, "usbnet_get_stats64" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0x80a50a34, "usbnet_start_xmit" },
	{ 0xa8676eaa, "usbnet_suspend" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0xfad0a7f6, "skb_copy_expand" },
	{ 0xe6478472, "_dev_info" },
	{ 0x7e9f153f, "usbnet_tx_timeout" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xdad2fe11, "usbnet_skb_return" },
	{ 0xb9c51a0c, "usb_driver_release_interface" },
	{ 0xa5cbe32e, "usbnet_open" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb04c82e9, "usb_interrupt_msg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x372e8e21, "eth_validate_addr" },
	{ 0x37a0cba, "kfree" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xb0e602eb, "memmove" },
	{ 0xc826b84c, "eth_mac_addr" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet,cdc_ether";

MODULE_ALIAS("usb:v1630p0042d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icEFisc01ip01in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icE0isc01ip03in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icEFisc04ip01in*");

MODULE_INFO(srcversion, "19789E1651C22039A5433AC");
MODULE_INFO(rhelversion, "8.0");
